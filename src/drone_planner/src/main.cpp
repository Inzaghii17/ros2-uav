#include <rclcpp/rclcpp.hpp>

#include "drone_planner/planner_node.hpp"

int main(int argc, char ** argv)
{
    rclcpp::init(argc, argv);

    auto node = std::make_shared<PlannerNode>();

    rclcpp::spin(node);

    rclcpp::shutdown();

    return 0;
}