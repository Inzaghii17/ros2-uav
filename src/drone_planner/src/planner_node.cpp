#include "drone_planner/planner_node.hpp"
#include "drone_common/battery_cost.hpp"

#include <functional>

using std::placeholders::_1;

PlannerNode::PlannerNode()
: Node("planner_node")
{
    mission_sub_ =
        create_subscription<drone_msgs::msg::Mission>(
            "/mission",
            10,
            std::bind(
                &PlannerNode::missionCallback,
                this,
                _1));

    mission_plan_pub_ =
        create_publisher<drone_msgs::msg::MissionPlan>(
            "/mission_plan",
            10);

    RCLCPP_INFO(
        get_logger(),
        "Planner Node Started");
}

void PlannerNode::missionCallback(
    const drone_msgs::msg::Mission::SharedPtr msg)
{
    RCLCPP_INFO(
        get_logger(),
        "Planning mission for %s",
        msg->drone_name.c_str());

    RCLCPP_INFO(
        get_logger(),
        "Source (%d, %d, %d) -> Goal (%d, %d, %d)",
        static_cast<int>(msg->source.x),
        static_cast<int>(msg->source.y),
        static_cast<int>(msg->source.z),
        static_cast<int>(msg->destination.x),
        static_cast<int>(msg->destination.y),
        static_cast<int>(msg->destination.z));

    drone_msgs::msg::MissionPlan plan;

    plan.drone_name = msg->drone_name;
    plan.mission_id = msg->mission_id;

    //-------------------------------------------------
    // Current and Goal Coordinates
    //-------------------------------------------------

    int current_x = static_cast<int>(msg->source.x);
    int current_y = static_cast<int>(msg->source.y);
    int current_z = static_cast<int>(msg->source.z);

    const int goal_x = static_cast<int>(msg->destination.x);
    const int goal_y = static_cast<int>(msg->destination.y);
    const int goal_z = static_cast<int>(msg->destination.z);

    std::vector<drone_msgs::msg::Primitive> xy_primitives;
    std::vector<drone_msgs::msg::Primitive> z_primitives;

    //-------------------------------------------------
    // Build XY Path
    //-------------------------------------------------

    while (current_x != goal_x || current_y != goal_y)
    {
        drone_msgs::msg::Primitive primitive;
        primitive.step_distance = 1.0;

        int dx = goal_x - current_x;
        int dy = goal_y - current_y;

        if (dx > 0 && dy > 0)
        {
            primitive.type = drone_msgs::msg::Primitive::NE;
            current_x++;
            current_y++;
        }
        else if (dx > 0 && dy < 0)
        {
            primitive.type = drone_msgs::msg::Primitive::SE;
            current_x++;
            current_y--;
        }
        else if (dx < 0 && dy > 0)
        {
            primitive.type = drone_msgs::msg::Primitive::NW;
            current_x--;
            current_y++;
        }
        else if (dx < 0 && dy < 0)
        {
            primitive.type = drone_msgs::msg::Primitive::SW;
            current_x--;
            current_y--;
        }
        else if (dx > 0)
        {
            primitive.type = drone_msgs::msg::Primitive::E;
            current_x++;
        }
        else if (dx < 0)
        {
            primitive.type = drone_msgs::msg::Primitive::W;
            current_x--;
        }
        else if (dy > 0)
        {
            primitive.type = drone_msgs::msg::Primitive::N;
            current_y++;
        }
        else
        {
            primitive.type = drone_msgs::msg::Primitive::S;
            current_y--;
        }

        xy_primitives.push_back(primitive);
    }

    //-------------------------------------------------
    // Build Z Path
    //-------------------------------------------------

    while (current_z != goal_z)
    {
        drone_msgs::msg::Primitive primitive;
        primitive.step_distance = 1.0;

        if (current_z < goal_z)
        {
            primitive.type = drone_msgs::msg::Primitive::UP;
            current_z++;
        }
        else
        {
            primitive.type = drone_msgs::msg::Primitive::DOWN;
            current_z--;
        }

        z_primitives.push_back(primitive);
    }

    //-------------------------------------------------
    // Interleave XY and Z Primitives
    //-------------------------------------------------

    size_t xy_index = 0;
    size_t z_index = 0;

    while (xy_index < xy_primitives.size() ||
           z_index < z_primitives.size())
    {
        if (xy_index < xy_primitives.size())
        {
            plan.primitives.push_back(
                xy_primitives[xy_index++]);
        }

        if (z_index < z_primitives.size())
        {
            plan.primitives.push_back(
                z_primitives[z_index++]);
        }
    }

    //-------------------------------------------------
    // Estimate Battery Requirement
    //-------------------------------------------------

    double estimated_battery = 0.0;

    for (const auto &primitive : plan.primitives)
    {
        estimated_battery +=
            drone_common::base_cost(
                primitive.type);
    }

    RCLCPP_INFO(
        get_logger(),
        "Estimated Battery Required : %.2f",
        estimated_battery);

    if (estimated_battery >
        drone_common::kInitialBattery)
    {
        RCLCPP_WARN(
            get_logger(),
            "Estimated battery exceeds available battery. Mission may fail.");
    }

    //-------------------------------------------------
    // Publish Plan
    //-------------------------------------------------

    RCLCPP_INFO(
        get_logger(),
        "Generated %zu primitives",
        plan.primitives.size());

    mission_plan_pub_->publish(plan);

    RCLCPP_INFO(
        get_logger(),
        "MissionPlan published");
}