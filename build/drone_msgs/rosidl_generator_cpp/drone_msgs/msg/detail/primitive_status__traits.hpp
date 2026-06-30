// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from drone_msgs:msg/PrimitiveStatus.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__MSG__DETAIL__PRIMITIVE_STATUS__TRAITS_HPP_
#define DRONE_MSGS__MSG__DETAIL__PRIMITIVE_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "drone_msgs/msg/detail/primitive_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace drone_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PrimitiveStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: drone_name
  {
    out << "drone_name: ";
    rosidl_generator_traits::value_to_yaml(msg.drone_name, out);
    out << ", ";
  }

  // member: mission_id
  {
    out << "mission_id: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_id, out);
    out << ", ";
  }

  // member: current_index
  {
    out << "current_index: ";
    rosidl_generator_traits::value_to_yaml(msg.current_index, out);
    out << ", ";
  }

  // member: total_primitives
  {
    out << "total_primitives: ";
    rosidl_generator_traits::value_to_yaml(msg.total_primitives, out);
    out << ", ";
  }

  // member: mission_complete
  {
    out << "mission_complete: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_complete, out);
    out << ", ";
  }

  // member: battery_remaining
  {
    out << "battery_remaining: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_remaining, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PrimitiveStatus & msg,
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

  // member: mission_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mission_id: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_id, out);
    out << "\n";
  }

  // member: current_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_index: ";
    rosidl_generator_traits::value_to_yaml(msg.current_index, out);
    out << "\n";
  }

  // member: total_primitives
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_primitives: ";
    rosidl_generator_traits::value_to_yaml(msg.total_primitives, out);
    out << "\n";
  }

  // member: mission_complete
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mission_complete: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_complete, out);
    out << "\n";
  }

  // member: battery_remaining
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_remaining: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_remaining, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PrimitiveStatus & msg, bool use_flow_style = false)
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
  const drone_msgs::msg::PrimitiveStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  drone_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use drone_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const drone_msgs::msg::PrimitiveStatus & msg)
{
  return drone_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<drone_msgs::msg::PrimitiveStatus>()
{
  return "drone_msgs::msg::PrimitiveStatus";
}

template<>
inline const char * name<drone_msgs::msg::PrimitiveStatus>()
{
  return "drone_msgs/msg/PrimitiveStatus";
}

template<>
struct has_fixed_size<drone_msgs::msg::PrimitiveStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<drone_msgs::msg::PrimitiveStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<drone_msgs::msg::PrimitiveStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DRONE_MSGS__MSG__DETAIL__PRIMITIVE_STATUS__TRAITS_HPP_
