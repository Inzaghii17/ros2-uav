#include <memory>

#include "geometry_msgs/msg/pose.hpp"
#include "rclcpp/rclcpp.hpp"

class GazeboBridge : public rclcpp::Node
{
public:
    GazeboBridge()
        : Node("gazebo_bridge")
    {
        RCLCPP_INFO(get_logger(), "Gazebo Bridge Started");

        pose_sub_ = create_subscription<geometry_msgs::msg::Pose>(
            "/drone_blue/pose",
            10,
            std::bind(&GazeboBridge::poseCallback,
                      this,
                      std::placeholders::_1));
    }

private:
    void poseCallback(const geometry_msgs::msg::Pose::SharedPtr msg)
    {
        RCLCPP_INFO(
            get_logger(),
            "Received Pose -> x: %.2f y: %.2f z: %.2f",
            msg->position.x,
            msg->position.y,
            msg->position.z);
    }

    rclcpp::Subscription<geometry_msgs::msg::Pose>::SharedPtr pose_sub_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);

    auto node = std::make_shared<GazeboBridge>();

    rclcpp::spin(node);

    rclcpp::shutdown();

    return 0;
}