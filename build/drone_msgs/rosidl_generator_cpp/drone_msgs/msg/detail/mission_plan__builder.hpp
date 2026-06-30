// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from drone_msgs:msg/MissionPlan.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__MSG__DETAIL__MISSION_PLAN__BUILDER_HPP_
#define DRONE_MSGS__MSG__DETAIL__MISSION_PLAN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "drone_msgs/msg/detail/mission_plan__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace drone_msgs
{

namespace msg
{

namespace builder
{

class Init_MissionPlan_mission_id
{
public:
  explicit Init_MissionPlan_mission_id(::drone_msgs::msg::MissionPlan & msg)
  : msg_(msg)
  {}
  ::drone_msgs::msg::MissionPlan mission_id(::drone_msgs::msg::MissionPlan::_mission_id_type arg)
  {
    msg_.mission_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drone_msgs::msg::MissionPlan msg_;
};

class Init_MissionPlan_primitives
{
public:
  explicit Init_MissionPlan_primitives(::drone_msgs::msg::MissionPlan & msg)
  : msg_(msg)
  {}
  Init_MissionPlan_mission_id primitives(::drone_msgs::msg::MissionPlan::_primitives_type arg)
  {
    msg_.primitives = std::move(arg);
    return Init_MissionPlan_mission_id(msg_);
  }

private:
  ::drone_msgs::msg::MissionPlan msg_;
};

class Init_MissionPlan_drone_name
{
public:
  Init_MissionPlan_drone_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MissionPlan_primitives drone_name(::drone_msgs::msg::MissionPlan::_drone_name_type arg)
  {
    msg_.drone_name = std::move(arg);
    return Init_MissionPlan_primitives(msg_);
  }

private:
  ::drone_msgs::msg::MissionPlan msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::drone_msgs::msg::MissionPlan>()
{
  return drone_msgs::msg::builder::Init_MissionPlan_drone_name();
}

}  // namespace drone_msgs

#endif  // DRONE_MSGS__MSG__DETAIL__MISSION_PLAN__BUILDER_HPP_
