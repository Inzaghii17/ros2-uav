#include "drone_bridge/gazebo_bridge_node.hpp"

#include <functional>

using std::placeholders::_1;

GazeboBridgeNode::GazeboBridgeNode()
: Node("gazebo_bridge_node")
{
    drone_blue_state_sub_ =
        create_subscription<drone_msgs::msg::DroneState>(
            "/drone_blue/drone_state",
            10,
            std::bind(
                &GazeboBridgeNode::droneStateCallback,
                this,
                _1));

    drone_green_state_sub_ =
        create_subscription<drone_msgs::msg::DroneState>(
            "/drone_green/drone_state",
            10,
            std::bind(
                &GazeboBridgeNode::droneStateCallback,
                this,
                _1));

    RCLCPP_INFO(get_logger(), "Gazebo Bridge Node Started");
}

void GazeboBridgeNode::droneStateCallback(
    const drone_msgs::msg::DroneState::SharedPtr msg)
{
    RCLCPP_INFO(
        get_logger(),
        "\n========== %s ==========\n"
        "Position : (%.2f, %.2f, %.2f)\n"
        "Battery : %.2f%%\n"
        "Moving  : %s\n"
        "Primitive Index : %u\n"
        "==============================",
        msg->drone_name.c_str(),
        msg->pose.position.x,
        msg->pose.position.y,
        msg->pose.position.z,
        msg->battery,
        msg->moving ? "true" : "false",
        msg->current_primitive_index
    );
}



