// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from drone_msgs:msg/Mission.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__MSG__DETAIL__MISSION__BUILDER_HPP_
#define DRONE_MSGS__MSG__DETAIL__MISSION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "drone_msgs/msg/detail/mission__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace drone_msgs
{

namespace msg
{

namespace builder
{

class Init_Mission_mission_id
{
public:
  explicit Init_Mission_mission_id(::drone_msgs::msg::Mission & msg)
  : msg_(msg)
  {}
  ::drone_msgs::msg::Mission mission_id(::drone_msgs::msg::Mission::_mission_id_type arg)
  {
    msg_.mission_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drone_msgs::msg::Mission msg_;
};

class Init_Mission_destination
{
public:
  explicit Init_Mission_destination(::drone_msgs::msg::Mission & msg)
  : msg_(msg)
  {}
  Init_Mission_mission_id destination(::drone_msgs::msg::Mission::_destination_type arg)
  {
    msg_.destination = std::move(arg);
    return Init_Mission_mission_id(msg_);
  }

private:
  ::drone_msgs::msg::Mission msg_;
};

class Init_Mission_source
{
public:
  explicit Init_Mission_source(::drone_msgs::msg::Mission & msg)
  : msg_(msg)
  {}
  Init_Mission_destination source(::drone_msgs::msg::Mission::_source_type arg)
  {
    msg_.source = std::move(arg);
    return Init_Mission_destination(msg_);
  }

private:
  ::drone_msgs::msg::Mission msg_;
};

class Init_Mission_drone_name
{
public:
  Init_Mission_drone_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Mission_source drone_name(::drone_msgs::msg::Mission::_drone_name_type arg)
  {
    msg_.drone_name = std::move(arg);
    return Init_Mission_source(msg_);
  }

private:
  ::drone_msgs::msg::Mission msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::drone_msgs::msg::Mission>()
{
  return drone_msgs::msg::builder::Init_Mission_drone_name();
}

}  // namespace drone_msgs

#endif  // DRONE_MSGS__MSG__DETAIL__MISSION__BUILDER_HPP_
