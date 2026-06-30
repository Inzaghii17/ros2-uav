#pragma once

namespace drone_common
{

// Static battery cost per primitive
constexpr double kChargePerUnitDistance = 2.0;

// Actual battery consumed during execution
inline double battery_cost(double random_draw)
{
    return kChargePerUnitDistance * random_draw;
}

// Expected value used by Mission Manager
inline double expected_battery_cost()
{
    return kChargePerUnitDistance * 0.5;
}

} // namespace drone_common