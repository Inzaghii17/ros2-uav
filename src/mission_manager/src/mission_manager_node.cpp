#include "mission_manager/mission_manager_node.hpp"

#include <functional>

using std::placeholders::_1;

MissionManagerNode::MissionManagerNode()
: Node("mission_manager_node")
{
    mission_plan_sub_ =
        create_subscription<drone_msgs::msg::MissionPlan>(
            "/mission_plan",
            10,
            std::bind(
                &MissionManagerNode::missionPlanCallback,
                this,
                _1));

    drone_blue_pub_ =
        create_publisher<drone_msgs::msg::MissionPlan>(
            "/drone_blue/mission_plan",
            10);

    drone_green_pub_ =
        create_publisher<drone_msgs::msg::MissionPlan>(
            "/drone_green/mission_plan",
            10);

    RCLCPP_INFO(
        get_logger(),
        "Mission Manager Started");
}

void MissionManagerNode::missionPlanCallback(
    const drone_msgs::msg::MissionPlan::SharedPtr msg)
{
    RCLCPP_INFO(
        get_logger(),
        "Received MissionPlan for %s",
        msg->drone_name.c_str());

    if (msg->drone_name == "drone_blue")
    {
        drone_blue_pub_->publish(*msg);

        RCLCPP_INFO(
            get_logger(),
            "Forwarded MissionPlan -> /drone_blue/mission_plan");
    }
    else if (msg->drone_name == "drone_green")
    {
        drone_green_pub_->publish(*msg);

        RCLCPP_INFO(
            get_logger(),
            "Forwarded MissionPlan -> /drone_green/mission_plan");
    }
    else
    {
        RCLCPP_WARN(
            get_logger(),
            "Unknown drone '%s'",
            msg->drone_name.c_str());
    }
}