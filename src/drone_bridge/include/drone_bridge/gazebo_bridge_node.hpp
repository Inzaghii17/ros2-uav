#ifndef DRONE_BRIDGE__GAZEBO_BRIDGE_NODE_HPP_
#define DRONE_BRIDGE__GAZEBO_BRIDGE_NODE_HPP_

#include <rclcpp/rclcpp.hpp>

#include "geometry_msgs/msg/pose.hpp"
#include "drone_msgs/msg/drone_state.hpp"

#include "ros_gz_interfaces/srv/set_entity_pose.hpp"

class GazeboBridgeNode : public rclcpp::Node
{
public:
    GazeboBridgeNode();

private:

    void droneStateCallback(
        const drone_msgs::msg::DroneState::SharedPtr msg);

    //------------------------------------
    // Subscribers
    //------------------------------------

    rclcpp::Subscription<drone_msgs::msg::DroneState>::SharedPtr
        drone_blue_state_sub_;

    rclcpp::Subscription<drone_msgs::msg::DroneState>::SharedPtr
        drone_green_state_sub_;

    //------------------------------------
    // Debug publishers
    //------------------------------------

    rclcpp::Publisher<geometry_msgs::msg::Pose>::SharedPtr
        drone_blue_pose_pub_;

    rclcpp::Publisher<geometry_msgs::msg::Pose>::SharedPtr
        drone_green_pose_pub_;

    //------------------------------------
    // Gazebo Service Client
    //------------------------------------

    rclcpp::Client<
        ros_gz_interfaces::srv::SetEntityPose>::SharedPtr
        set_pose_client_;
};

#endif