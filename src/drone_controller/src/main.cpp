#include "drone_controller/executor_node.hpp"

int main(int argc, char ** argv)
{
    rclcpp::init(argc, argv);

    rclcpp::spin(
        std::make_shared<ExecutorNode>());

    rclcpp::shutdown();

    return 0;
}


