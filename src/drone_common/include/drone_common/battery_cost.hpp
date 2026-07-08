#pragma once

#include "drone_msgs/msg/primitive.hpp"

namespace drone_common
{

//-------------------------------------
// Initial Battery
//-------------------------------------

constexpr double kInitialBattery = 100.0;

//-------------------------------------
// Base Costs
//-------------------------------------

inline double base_cost(uint8_t primitive)
{
    switch (primitive)
    {
        case drone_msgs::msg::Primitive::HOVER:
            return 1.0;

        case drone_msgs::msg::Primitive::N:
        case drone_msgs::msg::Primitive::S:
        case drone_msgs::msg::Primitive::E:
        case drone_msgs::msg::Primitive::W:
            return 2.0;

        case drone_msgs::msg::Primitive::NE:
        case drone_msgs::msg::Primitive::NW:
        case drone_msgs::msg::Primitive::SE:
        case drone_msgs::msg::Primitive::SW:
            return 2.8;

        case drone_msgs::msg::Primitive::UP:
            return 4.0;

        case drone_msgs::msg::Primitive::DOWN:
            return 1.5;

        default:
            return 2.0;
    }
}

//-------------------------------------
// Actual Runtime Cost
//-------------------------------------

inline double battery_cost(
    uint8_t primitive,
    double random_draw)
{
    return base_cost(primitive) * (0.5 + random_draw);
}

} // namespace drone_common