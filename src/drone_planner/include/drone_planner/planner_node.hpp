#ifndef DRONE_PLANNER__PLANNER_NODE_HPP_
#define DRONE_PLANNER__PLANNER_NODE_HPP_

#include <rclcpp/rclcpp.hpp>

#include "drone_msgs/msg/mission.hpp"
#include "drone_msgs/msg/mission_plan.hpp"

class PlannerNode : public rclcpp::Node
{
public:
    PlannerNode();

private:

    void missionCallback(
        const drone_msgs::msg::Mission::SharedPtr msg);

    rclcpp::Subscription<drone_msgs::msg::Mission>::SharedPtr
        mission_sub_;

    rclcpp::Publisher<drone_msgs::msg::MissionPlan>::SharedPtr
        mission_plan_pub_;
};

#endif