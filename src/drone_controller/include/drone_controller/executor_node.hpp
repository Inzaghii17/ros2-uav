#pragma once

#include <rclcpp/rclcpp.hpp>
#include <geometry_msgs/msg/pose.hpp>
#include "drone_msgs/msg/mission_plan.hpp"
#include "drone_msgs/msg/drone_state.hpp"
#include "drone_msgs/msg/primitive_status.hpp"
#include "drone_common/battery_cost.hpp"


class ExecutorNode : public rclcpp::Node
{
public:
    ExecutorNode();

private:

    // ==========================
    // Callbacks
    // ==========================
    void computeNextTarget();

    void interpolateStep();

    bool targetReached() const;

    void publishDroneState();

    void publishPrimitiveStatus();

    void applyBatteryCost();

    void missionCallback(
        const drone_msgs::msg::MissionPlan::SharedPtr msg);

    void timerCallback();
    

    // ==========================
    // Mission State
    // ==========================

    drone_msgs::msg::MissionPlan current_plan_;

    bool has_active_mission_ = false;

    // Which primitive are we executing?
    size_t current_primitive_index_ = 0;

    // Current target pose
    geometry_msgs::msg::Pose target_pose_;

    // Current simulated pose
    geometry_msgs::msg::Pose current_pose_;

    double battery_ = 100.0;

    constexpr static double kMoveSpeed = 0.05;


    // ==========================
    // ROS Interfaces
    // ==========================

    rclcpp::Subscription<drone_msgs::msg::MissionPlan>::SharedPtr
        mission_sub_;

    rclcpp::Publisher<drone_msgs::msg::DroneState>::SharedPtr
        drone_state_pub_;

    rclcpp::Publisher<drone_msgs::msg::PrimitiveStatus>::SharedPtr
        primitive_status_pub_;

    rclcpp::TimerBase::SharedPtr timer_;
};