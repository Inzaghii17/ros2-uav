// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from drone_msgs:msg/DroneState.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__MSG__DETAIL__DRONE_STATE__TRAITS_HPP_
#define DRONE_MSGS__MSG__DETAIL__DRONE_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "drone_msgs/msg/detail/drone_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace drone_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DroneState & msg,
  std::ostream & out)
{
  out << "{";
  // member: drone_name
  {
    out << "drone_name: ";
    rosidl_generator_traits::value_to_yaml(msg.drone_name, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: battery
  {
    out << "battery: ";
    rosidl_generator_traits::value_to_yaml(msg.battery, out);
    out << ", ";
  }

  // member: moving
  {
    out << "moving: ";
    rosidl_generator_traits::value_to_yaml(msg.moving, out);
    out << ", ";
  }

  // member: current_primitive_index
  {
    out << "current_primitive_index: ";
    rosidl_generator_traits::value_to_yaml(msg.current_primitive_index, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DroneState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: drone_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drone_name: ";
    rosidl_generator_traits::value_to_yaml(msg.drone_name, out);
    out << "\n";
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: battery
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery: ";
    rosidl_generator_traits::value_to_yaml(msg.battery, out);
    out << "\n";
  }

  // member: moving
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "moving: ";
    rosidl_generator_traits::value_to_yaml(msg.moving, out);
    out << "\n";
  }

  // member: current_primitive_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_primitive_index: ";
    rosidl_generator_traits::value_to_yaml(msg.current_primitive_index, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DroneState & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace drone_msgs

namespace rosidl_generator_traits
{

[[deprecated("use drone_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const drone_msgs::msg::DroneState & msg,
  std::ostream & out, size_t indentation = 0)
{
  drone_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use drone_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const drone_msgs::msg::DroneState & msg)
{
  return drone_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<drone_msgs::msg::DroneState>()
{
  return "drone_msgs::msg::DroneState";
}

template<>
inline const char * name<drone_msgs::msg::DroneState>()
{
  return "drone_msgs/msg/DroneState";
}

template<>
struct has_fixed_size<drone_msgs::msg::DroneState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<drone_msgs::msg::DroneState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<drone_msgs::msg::DroneState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DRONE_MSGS__MSG__DETAIL__DRONE_STATE__TRAITS_HPP_
