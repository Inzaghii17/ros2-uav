#include "drone_controller/executor_node.hpp"
#include <cmath>
using std::placeholders::_1;

ExecutorNode::ExecutorNode()
: Node("executor_node")
{   


    current_pose_.position.x = 0.0;
    current_pose_.position.y = 0.0;
    current_pose_.position.z = 0.0;

    target_pose_ = current_pose_;

    mission_sub_ =
        create_subscription<drone_msgs::msg::MissionPlan>(
            "mission_plan",
            10,
            std::bind(&ExecutorNode::missionCallback,
                      this,
                      _1));

    drone_state_pub_ =
        create_publisher<drone_msgs::msg::DroneState>(
            "drone_state",
            10);

    primitive_status_pub_ =
        create_publisher<drone_msgs::msg::PrimitiveStatus>(
            "primitive_status",
            10);

    timer_ =
        create_wall_timer(
            std::chrono::milliseconds(33),
            std::bind(&ExecutorNode::timerCallback,
                      this));

    RCLCPP_INFO(get_logger(),
                "Executor Node Started");
}

void ExecutorNode::missionCallback(
    const drone_msgs::msg::MissionPlan::SharedPtr msg)
{   

    // Store the received mission
    current_plan_ = *msg;

    // Mark that we now have an active mission
    has_active_mission_ = true;

    RCLCPP_INFO(get_logger(),
                "========== Mission Received ==========");

    RCLCPP_INFO(get_logger(),
                "Drone: %s",
                current_plan_.drone_name.c_str());

    RCLCPP_INFO(get_logger(),
                "Mission ID: %u",
                current_plan_.mission_id);

    RCLCPP_INFO(get_logger(),
                "Total Primitives: %zu",
                current_plan_.primitives.size());

    current_primitive_index_ = 0;

    computeNextTarget();
}

void ExecutorNode::timerCallback()
{
    if (!has_active_mission_)
    {
        return;
    }

    // We'll add movement logic here in M3.3
    interpolateStep();
    publishDroneState();
}


void ExecutorNode::computeNextTarget()
{
    if (current_primitive_index_ >= current_plan_.primitives.size())
    {
        return;
    }

    // Start from the current pose
    target_pose_ = current_pose_;

    const auto &primitive = current_plan_.primitives[current_primitive_index_];

    switch (primitive.type)
    {
        case drone_msgs::msg::Primitive::N:
            target_pose_.position.y += primitive.step_distance;
            break;

        case drone_msgs::msg::Primitive::S:
            target_pose_.position.y -= primitive.step_distance;
            break;

        case drone_msgs::msg::Primitive::E:
            target_pose_.position.x += primitive.step_distance;
            break;

        case drone_msgs::msg::Primitive::W:
            target_pose_.position.x -= primitive.step_distance;
            break;

        case drone_msgs::msg::Primitive::NE:
            target_pose_.position.x += primitive.step_distance;
            target_pose_.position.y += primitive.step_distance;
            break;

        case drone_msgs::msg::Primitive::NW:
            target_pose_.position.x -= primitive.step_distance;
            target_pose_.position.y += primitive.step_distance;
            break;

        case drone_msgs::msg::Primitive::SE:
            target_pose_.position.x += primitive.step_distance;
            target_pose_.position.y -= primitive.step_distance;
            break;

        case drone_msgs::msg::Primitive::SW:
            target_pose_.position.x -= primitive.step_distance;
            target_pose_.position.y -= primitive.step_distance;
            break;

        case drone_msgs::msg::Primitive::HOVER:
            break;
    }

    RCLCPP_INFO(
        get_logger(),
        "Target Pose -> (%.2f, %.2f)",
        target_pose_.position.x,
        target_pose_.position.y);
}

void ExecutorNode::interpolateStep()
{
    if (targetReached())
    {
        // Snap exactly to the target
        current_pose_ = target_pose_;

        RCLCPP_INFO(
            get_logger(),
            "Primitive %zu Complete!",
            current_primitive_index_);

        current_primitive_index_++;

        if (current_primitive_index_ >= current_plan_.primitives.size())
        {
            has_active_mission_ = false;
        }

        publishPrimitiveStatus();

        if (!has_active_mission_)
        {
            RCLCPP_INFO(get_logger(), "Mission Complete!");
            return;
        }

        computeNextTarget();
        return;
    }

    if (current_pose_.position.x < target_pose_.position.x)
        current_pose_.position.x += kMoveSpeed;
    else if (current_pose_.position.x > target_pose_.position.x)
        current_pose_.position.x -= kMoveSpeed;

    if (current_pose_.position.y < target_pose_.position.y)
        current_pose_.position.y += kMoveSpeed;
    else if (current_pose_.position.y > target_pose_.position.y)
        current_pose_.position.y -= kMoveSpeed;

    RCLCPP_INFO(
        get_logger(),
        "Current Pose -> (%.2f, %.2f)",
        current_pose_.position.x,
        current_pose_.position.y);
}

bool ExecutorNode::targetReached() const
{
    constexpr double epsilon = 0.01;

    return
        std::abs(current_pose_.position.x - target_pose_.position.x) < epsilon &&
        std::abs(current_pose_.position.y - target_pose_.position.y) < epsilon;
}

void ExecutorNode::publishDroneState()
{
    drone_msgs::msg::DroneState msg;

    msg.drone_name = current_plan_.drone_name;

    msg.pose = current_pose_;

    msg.battery = 100.0;

    msg.moving = has_active_mission_;

    msg.current_primitive_index =
        current_primitive_index_;

    drone_state_pub_->publish(msg);
}

void ExecutorNode::publishPrimitiveStatus()
{
    drone_msgs::msg::PrimitiveStatus msg;

    msg.drone_name = current_plan_.drone_name;

    msg.mission_id = current_plan_.mission_id;

    msg.current_index = current_primitive_index_;

    msg.total_primitives = current_plan_.primitives.size();

    msg.mission_complete = !has_active_mission_;

    msg.battery_remaining = 100.0;

    primitive_status_pub_->publish(msg);
}