// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from drone_msgs:msg/Mission.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__MSG__DETAIL__MISSION__TRAITS_HPP_
#define DRONE_MSGS__MSG__DETAIL__MISSION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "drone_msgs/msg/detail/mission__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'source'
// Member 'destination'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace drone_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Mission & msg,
  std::ostream & out)
{
  out << "{";
  // member: drone_name
  {
    out << "drone_name: ";
    rosidl_generator_traits::value_to_yaml(msg.drone_name, out);
    out << ", ";
  }

  // member: source
  {
    out << "source: ";
    to_flow_style_yaml(msg.source, out);
    out << ", ";
  }

  // member: destination
  {
    out << "destination: ";
    to_flow_style_yaml(msg.destination, out);
    out << ", ";
  }

  // member: mission_id
  {
    out << "mission_id: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Mission & msg,
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

  // member: source
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "source:\n";
    to_block_style_yaml(msg.source, out, indentation + 2);
  }

  // member: destination
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "destination:\n";
    to_block_style_yaml(msg.destination, out, indentation + 2);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Mission & msg, bool use_flow_style = false)
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
  const drone_msgs::msg::Mission & msg,
  std::ostream & out, size_t indentation = 0)
{
  drone_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use drone_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const drone_msgs::msg::Mission & msg)
{
  return drone_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<drone_msgs::msg::Mission>()
{
  return "drone_msgs::msg::Mission";
}

template<>
inline const char * name<drone_msgs::msg::Mission>()
{
  return "drone_msgs/msg/Mission";
}

template<>
struct has_fixed_size<drone_msgs::msg::Mission>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<drone_msgs::msg::Mission>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<drone_msgs::msg::Mission>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DRONE_MSGS__MSG__DETAIL__MISSION__TRAITS_HPP_
