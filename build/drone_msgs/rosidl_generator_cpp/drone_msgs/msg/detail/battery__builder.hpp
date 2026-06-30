// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from drone_msgs:msg/Battery.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__MSG__DETAIL__BATTERY__BUILDER_HPP_
#define DRONE_MSGS__MSG__DETAIL__BATTERY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "drone_msgs/msg/detail/battery__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace drone_msgs
{

namespace msg
{

namespace builder
{

class Init_Battery_mission_possible
{
public:
  explicit Init_Battery_mission_possible(::drone_msgs::msg::Battery & msg)
  : msg_(msg)
  {}
  ::drone_msgs::msg::Battery mission_possible(::drone_msgs::msg::Battery::_mission_possible_type arg)
  {
    msg_.mission_possible = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drone_msgs::msg::Battery msg_;
};

class Init_Battery_current_battery
{
public:
  explicit Init_Battery_current_battery(::drone_msgs::msg::Battery & msg)
  : msg_(msg)
  {}
  Init_Battery_mission_possible current_battery(::drone_msgs::msg::Battery::_current_battery_type arg)
  {
    msg_.current_battery = std::move(arg);
    return Init_Battery_mission_possible(msg_);
  }

private:
  ::drone_msgs::msg::Battery msg_;
};

class Init_Battery_estimated_cost
{
public:
  explicit Init_Battery_estimated_cost(::drone_msgs::msg::Battery & msg)
  : msg_(msg)
  {}
  Init_Battery_current_battery estimated_cost(::drone_msgs::msg::Battery::_estimated_cost_type arg)
  {
    msg_.estimated_cost = std::move(arg);
    return Init_Battery_current_battery(msg_);
  }

private:
  ::drone_msgs::msg::Battery msg_;
};

class Init_Battery_drone_name
{
public:
  explicit Init_Battery_drone_name(::drone_msgs::msg::Battery & msg)
  : msg_(msg)
  {}
  Init_Battery_estimated_cost drone_name(::drone_msgs::msg::Battery::_drone_name_type arg)
  {
    msg_.drone_name = std::move(arg);
    return Init_Battery_estimated_cost(msg_);
  }

private:
  ::drone_msgs::msg::Battery msg_;
};

class Init_Battery_mission_id
{
public:
  Init_Battery_mission_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Battery_drone_name mission_id(::drone_msgs::msg::Battery::_mission_id_type arg)
  {
    msg_.mission_id = std::move(arg);
    return Init_Battery_drone_name(msg_);
  }

private:
  ::drone_msgs::msg::Battery msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::drone_msgs::msg::Battery>()
{
  return drone_msgs::msg::builder::Init_Battery_mission_id();
}

}  // namespace drone_msgs

#endif  // DRONE_MSGS__MSG__DETAIL__BATTERY__BUILDER_HPP_
