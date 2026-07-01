#include "drone_bridge/gazebo_bridge_node.hpp"

#include <memory>

int main(int argc, char ** argv)
{
    rclcpp::init(argc, argv);

    rclcpp::spin(std::make_shared<GazeboBridgeNode>());

    rclcpp::shutdown();

    return 0;
}
