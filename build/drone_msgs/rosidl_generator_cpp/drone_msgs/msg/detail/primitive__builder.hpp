// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from drone_msgs:msg/Primitive.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__MSG__DETAIL__PRIMITIVE__BUILDER_HPP_
#define DRONE_MSGS__MSG__DETAIL__PRIMITIVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "drone_msgs/msg/detail/primitive__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace drone_msgs
{

namespace msg
{

namespace builder
{

class Init_Primitive_step_distance
{
public:
  explicit Init_Primitive_step_distance(::drone_msgs::msg::Primitive & msg)
  : msg_(msg)
  {}
  ::drone_msgs::msg::Primitive step_distance(::drone_msgs::msg::Primitive::_step_distance_type arg)
  {
    msg_.step_distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drone_msgs::msg::Primitive msg_;
};

class Init_Primitive_type
{
public:
  Init_Primitive_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Primitive_step_distance type(::drone_msgs::msg::Primitive::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_Primitive_step_distance(msg_);
  }

private:
  ::drone_msgs::msg::Primitive msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::drone_msgs::msg::Primitive>()
{
  return drone_msgs::msg::builder::Init_Primitive_type();
}

}  // namespace drone_msgs

#endif  // DRONE_MSGS__MSG__DETAIL__PRIMITIVE__BUILDER_HPP_
