#include <chrono>
#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "drone_msgs/msg/drone_state.hpp"

using namespace std::chrono_literals;

class DroneExecutor : public rclcpp::Node
{
public:
    DroneExecutor()
        : Node("drone_executor"),
          x_(0.0),
          y_(0.0),
          z_(2.0),
          battery_(100.0)
    {
        RCLCPP_INFO(get_logger(), "Drone Executor Started");

        state_pub_ =
            create_publisher<drone_msgs::msg::DroneState>(
                "/drone_state",
                10);

        timer_ =
            create_wall_timer(
                1s,
                std::bind(&DroneExecutor::timerCallback, this));
    }

private:

    void timerCallback()
    {
        x_ += 1.0;

        battery_ -= 0.5;

        drone_msgs::msg::DroneState msg;

        msg.drone_name = "drone_blue";

        msg.pose.position.x = x_;
        msg.pose.position.y = y_;
        msg.pose.position.z = z_;

        msg.pose.orientation.x = 0.0;
        msg.pose.orientation.y = 0.0;
        msg.pose.orientation.z = 0.0;
        msg.pose.orientation.w = 1.0;

        msg.battery = battery_;
        msg.moving = true;

        state_pub_->publish(msg);

        RCLCPP_INFO(
            get_logger(),
            "Published [%s] x=%.2f battery=%.1f",
            msg.drone_name.c_str(),
            x_,
            battery_);
    }

    double x_;
    double y_;
    double z_;
    double battery_;

    rclcpp::Publisher<drone_msgs::msg::DroneState>::SharedPtr state_pub_;

    rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc,char **argv)
{
    rclcpp::init(argc,argv);

    auto node = std::make_shared<DroneExecutor>();

    rclcpp::spin(node);

    rclcpp::shutdown();

    return 0;
}