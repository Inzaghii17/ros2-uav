#ifndef MISSION_MANAGER__MISSION_MANAGER_NODE_HPP_
#define MISSION_MANAGER__MISSION_MANAGER_NODE_HPP_

#include <rclcpp/rclcpp.hpp>

#include "drone_msgs/msg/mission_plan.hpp"

class MissionManagerNode : public rclcpp::Node
{
public:
    MissionManagerNode();

private:

    void missionPlanCallback(
        const drone_msgs::msg::MissionPlan::SharedPtr msg);

    rclcpp::Subscription<drone_msgs::msg::MissionPlan>::SharedPtr
        mission_plan_sub_;

    rclcpp::Publisher<drone_msgs::msg::MissionPlan>::SharedPtr
        drone_blue_pub_;

    rclcpp::Publisher<drone_msgs::msg::MissionPlan>::SharedPtr
        drone_green_pub_;
};

#endif