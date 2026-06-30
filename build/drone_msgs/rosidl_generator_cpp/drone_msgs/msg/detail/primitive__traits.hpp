// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from drone_msgs:msg/Primitive.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__MSG__DETAIL__PRIMITIVE__TRAITS_HPP_
#define DRONE_MSGS__MSG__DETAIL__PRIMITIVE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "drone_msgs/msg/detail/primitive__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace drone_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Primitive & msg,
  std::ostream & out)
{
  out << "{";
  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: step_distance
  {
    out << "step_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.step_distance, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Primitive & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: step_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "step_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.step_distance, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Primitive & msg, bool use_flow_style = false)
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
  const drone_msgs::msg::Primitive & msg,
  std::ostream & out, size_t indentation = 0)
{
  drone_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use drone_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const drone_msgs::msg::Primitive & msg)
{
  return drone_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<drone_msgs::msg::Primitive>()
{
  return "drone_msgs::msg::Primitive";
}

template<>
inline const char * name<drone_msgs::msg::Primitive>()
{
  return "drone_msgs/msg/Primitive";
}

template<>
struct has_fixed_size<drone_msgs::msg::Primitive>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<drone_msgs::msg::Primitive>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<drone_msgs::msg::Primitive>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DRONE_MSGS__MSG__DETAIL__PRIMITIVE__TRAITS_HPP_
