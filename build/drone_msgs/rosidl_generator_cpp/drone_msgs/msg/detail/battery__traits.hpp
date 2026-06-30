// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from drone_msgs:msg/Battery.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__MSG__DETAIL__BATTERY__TRAITS_HPP_
#define DRONE_MSGS__MSG__DETAIL__BATTERY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "drone_msgs/msg/detail/battery__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace drone_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Battery & msg,
  std::ostream & out)
{
  out << "{";
  // member: mission_id
  {
    out << "mission_id: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_id, out);
    out << ", ";
  }

  // member: drone_name
  {
    out << "drone_name: ";
    rosidl_generator_traits::value_to_yaml(msg.drone_name, out);
    out << ", ";
  }

  // member: estimated_cost
  {
    out << "estimated_cost: ";
    rosidl_generator_traits::value_to_yaml(msg.estimated_cost, out);
    out << ", ";
  }

  // member: current_battery
  {
    out << "current_battery: ";
    rosidl_generator_traits::value_to_yaml(msg.current_battery, out);
    out << ", ";
  }

  // member: mission_possible
  {
    out << "mission_possible: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_possible, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Battery & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mission_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mission_id: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_id, out);
    out << "\n";
  }

  // member: drone_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drone_name: ";
    rosidl_generator_traits::value_to_yaml(msg.drone_name, out);
    out << "\n";
  }

  // member: estimated_cost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "estimated_cost: ";
    rosidl_generator_traits::value_to_yaml(msg.estimated_cost, out);
    out << "\n";
  }

  // member: current_battery
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_battery: ";
    rosidl_generator_traits::value_to_yaml(msg.current_battery, out);
    out << "\n";
  }

  // member: mission_possible
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mission_possible: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_possible, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Battery & msg, bool use_flow_style = false)
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
  const drone_msgs::msg::Battery & msg,
  std::ostream & out, size_t indentation = 0)
{
  drone_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use drone_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const drone_msgs::msg::Battery & msg)
{
  return drone_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<drone_msgs::msg::Battery>()
{
  return "drone_msgs::msg::Battery";
}

template<>
inline const char * name<drone_msgs::msg::Battery>()
{
  return "drone_msgs/msg/Battery";
}

template<>
struct has_fixed_size<drone_msgs::msg::Battery>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<drone_msgs::msg::Battery>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<drone_msgs::msg::Battery>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DRONE_MSGS__MSG__DETAIL__BATTERY__TRAITS_HPP_
