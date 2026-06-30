// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from drone_msgs:msg/DroneState.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__MSG__DETAIL__DRONE_STATE__BUILDER_HPP_
#define DRONE_MSGS__MSG__DETAIL__DRONE_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "drone_msgs/msg/detail/drone_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace drone_msgs
{

namespace msg
{

namespace builder
{

class Init_DroneState_current_primitive_index
{
public:
  explicit Init_DroneState_current_primitive_index(::drone_msgs::msg::DroneState & msg)
  : msg_(msg)
  {}
  ::drone_msgs::msg::DroneState current_primitive_index(::drone_msgs::msg::DroneState::_current_primitive_index_type arg)
  {
    msg_.current_primitive_index = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drone_msgs::msg::DroneState msg_;
};

class Init_DroneState_moving
{
public:
  explicit Init_DroneState_moving(::drone_msgs::msg::DroneState & msg)
  : msg_(msg)
  {}
  Init_DroneState_current_primitive_index moving(::drone_msgs::msg::DroneState::_moving_type arg)
  {
    msg_.moving = std::move(arg);
    return Init_DroneState_current_primitive_index(msg_);
  }

private:
  ::drone_msgs::msg::DroneState msg_;
};

class Init_DroneState_battery
{
public:
  explicit Init_DroneState_battery(::drone_msgs::msg::DroneState & msg)
  : msg_(msg)
  {}
  Init_DroneState_moving battery(::drone_msgs::msg::DroneState::_battery_type arg)
  {
    msg_.battery = std::move(arg);
    return Init_DroneState_moving(msg_);
  }

private:
  ::drone_msgs::msg::DroneState msg_;
};

class Init_DroneState_pose
{
public:
  explicit Init_DroneState_pose(::drone_msgs::msg::DroneState & msg)
  : msg_(msg)
  {}
  Init_DroneState_battery pose(::drone_msgs::msg::DroneState::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_DroneState_battery(msg_);
  }

private:
  ::drone_msgs::msg::DroneState msg_;
};

class Init_DroneState_drone_name
{
public:
  Init_DroneState_drone_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DroneState_pose drone_name(::drone_msgs::msg::DroneState::_drone_name_type arg)
  {
    msg_.drone_name = std::move(arg);
    return Init_DroneState_pose(msg_);
  }

private:
  ::drone_msgs::msg::DroneState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::drone_msgs::msg::DroneState>()
{
  return drone_msgs::msg::builder::Init_DroneState_drone_name();
}

}  // namespace drone_msgs

#endif  // DRONE_MSGS__MSG__DETAIL__DRONE_STATE__BUILDER_HPP_
