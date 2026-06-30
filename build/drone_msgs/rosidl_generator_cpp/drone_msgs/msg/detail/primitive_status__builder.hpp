// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from drone_msgs:msg/PrimitiveStatus.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__MSG__DETAIL__PRIMITIVE_STATUS__BUILDER_HPP_
#define DRONE_MSGS__MSG__DETAIL__PRIMITIVE_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "drone_msgs/msg/detail/primitive_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace drone_msgs
{

namespace msg
{

namespace builder
{

class Init_PrimitiveStatus_battery_remaining
{
public:
  explicit Init_PrimitiveStatus_battery_remaining(::drone_msgs::msg::PrimitiveStatus & msg)
  : msg_(msg)
  {}
  ::drone_msgs::msg::PrimitiveStatus battery_remaining(::drone_msgs::msg::PrimitiveStatus::_battery_remaining_type arg)
  {
    msg_.battery_remaining = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drone_msgs::msg::PrimitiveStatus msg_;
};

class Init_PrimitiveStatus_mission_complete
{
public:
  explicit Init_PrimitiveStatus_mission_complete(::drone_msgs::msg::PrimitiveStatus & msg)
  : msg_(msg)
  {}
  Init_PrimitiveStatus_battery_remaining mission_complete(::drone_msgs::msg::PrimitiveStatus::_mission_complete_type arg)
  {
    msg_.mission_complete = std::move(arg);
    return Init_PrimitiveStatus_battery_remaining(msg_);
  }

private:
  ::drone_msgs::msg::PrimitiveStatus msg_;
};

class Init_PrimitiveStatus_total_primitives
{
public:
  explicit Init_PrimitiveStatus_total_primitives(::drone_msgs::msg::PrimitiveStatus & msg)
  : msg_(msg)
  {}
  Init_PrimitiveStatus_mission_complete total_primitives(::drone_msgs::msg::PrimitiveStatus::_total_primitives_type arg)
  {
    msg_.total_primitives = std::move(arg);
    return Init_PrimitiveStatus_mission_complete(msg_);
  }

private:
  ::drone_msgs::msg::PrimitiveStatus msg_;
};

class Init_PrimitiveStatus_current_index
{
public:
  explicit Init_PrimitiveStatus_current_index(::drone_msgs::msg::PrimitiveStatus & msg)
  : msg_(msg)
  {}
  Init_PrimitiveStatus_total_primitives current_index(::drone_msgs::msg::PrimitiveStatus::_current_index_type arg)
  {
    msg_.current_index = std::move(arg);
    return Init_PrimitiveStatus_total_primitives(msg_);
  }

private:
  ::drone_msgs::msg::PrimitiveStatus msg_;
};

class Init_PrimitiveStatus_mission_id
{
public:
  explicit Init_PrimitiveStatus_mission_id(::drone_msgs::msg::PrimitiveStatus & msg)
  : msg_(msg)
  {}
  Init_PrimitiveStatus_current_index mission_id(::drone_msgs::msg::PrimitiveStatus::_mission_id_type arg)
  {
    msg_.mission_id = std::move(arg);
    return Init_PrimitiveStatus_current_index(msg_);
  }

private:
  ::drone_msgs::msg::PrimitiveStatus msg_;
};

class Init_PrimitiveStatus_drone_name
{
public:
  Init_PrimitiveStatus_drone_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PrimitiveStatus_mission_id drone_name(::drone_msgs::msg::PrimitiveStatus::_drone_name_type arg)
  {
    msg_.drone_name = std::move(arg);
    return Init_PrimitiveStatus_mission_id(msg_);
  }

private:
  ::drone_msgs::msg::PrimitiveStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::drone_msgs::msg::PrimitiveStatus>()
{
  return drone_msgs::msg::builder::Init_PrimitiveStatus_drone_name();
}

}  // namespace drone_msgs

#endif  // DRONE_MSGS__MSG__DETAIL__PRIMITIVE_STATUS__BUILDER_HPP_
