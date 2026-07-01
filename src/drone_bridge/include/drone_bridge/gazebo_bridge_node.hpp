#ifndef DRONE_BRIDGE__GAZEBO_BRIDGE_NODE_HPP_
#define DRONE_BRIDGE__GAZEBO_BRIDGE_NODE_HPP_

#include <rclcpp/rclcpp.hpp>

#include "drone_msgs/msg/drone_state.hpp"

class GazeboBridgeNode : public rclcpp::Node
{
public:
    GazeboBridgeNode();

private:
    void droneStateCallback(
        const drone_msgs::msg::DroneState::SharedPtr msg);

    rclcpp::Subscription<drone_msgs::msg::DroneState>::SharedPtr
        drone_blue_state_sub_;

    rclcpp::Subscription<drone_msgs::msg::DroneState>::SharedPtr
        drone_green_state_sub_;
};

#endif


