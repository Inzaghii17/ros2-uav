#include "drone_bridge/gazebo_bridge_node.hpp"

#include <functional>

using std::placeholders::_1;

GazeboBridgeNode::GazeboBridgeNode()
: Node("gazebo_bridge_node")
{
    //------------------------------------
    // Subscribers
    //------------------------------------

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

    //------------------------------------
    // Debug publishers
    //------------------------------------

    drone_blue_pose_pub_ =
        create_publisher<geometry_msgs::msg::Pose>(
            "/drone_blue/bridge_pose",
            10);

    drone_green_pose_pub_ =
        create_publisher<geometry_msgs::msg::Pose>(
            "/drone_green/bridge_pose",
            10);

    //------------------------------------
    // Gazebo Service Client
    //------------------------------------

    set_pose_client_ =
        create_client<ros_gz_interfaces::srv::SetEntityPose>(
            "/world/empty_world/set_pose");

    RCLCPP_INFO(
        get_logger(),
        "Gazebo Bridge Node Started");
}

void GazeboBridgeNode::droneStateCallback(
    const drone_msgs::msg::DroneState::SharedPtr msg)
{
    //------------------------------------
    // Print
    //------------------------------------

    RCLCPP_INFO(
        get_logger(),
        "[%s] x=%.2f y=%.2f z=%.2f battery=%.2f",
        msg->drone_name.c_str(),
        msg->pose.position.x,
        msg->pose.position.y,
        msg->pose.position.z,
        msg->battery);

    //------------------------------------
    // Publish debug topic
    //------------------------------------

    if (msg->drone_name == "drone_blue")
        drone_blue_pose_pub_->publish(msg->pose);
    else
        drone_green_pose_pub_->publish(msg->pose);

    //------------------------------------
    // Wait for Gazebo
    //------------------------------------

    if (!set_pose_client_->wait_for_service(
            std::chrono::milliseconds(100)))
    {
        RCLCPP_WARN(
            get_logger(),
            "SetPose service unavailable");
        return;
    }

    //------------------------------------
    // Build request
    //------------------------------------

    auto request =
        std::make_shared<
            ros_gz_interfaces::srv::SetEntityPose::Request>();

    request->entity.name = msg->drone_name;

    request->entity.type =
        ros_gz_interfaces::msg::Entity::MODEL;

    request->pose = msg->pose;

    //------------------------------------
    // Send
    //------------------------------------

    RCLCPP_INFO(
    get_logger(),
    "Sending SetPose: name=%s type=%u x=%.2f y=%.2f z=%.2f",
    request->entity.name.c_str(),
    request->entity.type,
    request->pose.position.x,
    request->pose.position.y,
    request->pose.position.z);

    set_pose_client_->async_send_request(request);
}