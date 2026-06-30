// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from drone_msgs:msg/Battery.idl
// generated code does not contain a copyright notice
#include "drone_msgs/msg/detail/battery__rosidl_typesupport_fastrtps_cpp.hpp"
#include "drone_msgs/msg/detail/battery__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace drone_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_drone_msgs
cdr_serialize(
  const drone_msgs::msg::Battery & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: mission_id
  cdr << ros_message.mission_id;
  // Member: drone_name
  cdr << ros_message.drone_name;
  // Member: estimated_cost
  cdr << ros_message.estimated_cost;
  // Member: current_battery
  cdr << ros_message.current_battery;
  // Member: mission_possible
  cdr << (ros_message.mission_possible ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_drone_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  drone_msgs::msg::Battery & ros_message)
{
  // Member: mission_id
  cdr >> ros_message.mission_id;

  // Member: drone_name
  cdr >> ros_message.drone_name;

  // Member: estimated_cost
  cdr >> ros_message.estimated_cost;

  // Member: current_battery
  cdr >> ros_message.current_battery;

  // Member: mission_possible
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.mission_possible = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_drone_msgs
get_serialized_size(
  const drone_msgs::msg::Battery & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: mission_id
  {
    size_t item_size = sizeof(ros_message.mission_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: drone_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.drone_name.size() + 1);
  // Member: estimated_cost
  {
    size_t item_size = sizeof(ros_message.estimated_cost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: current_battery
  {
    size_t item_size = sizeof(ros_message.current_battery);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mission_possible
  {
    size_t item_size = sizeof(ros_message.mission_possible);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_drone_msgs
max_serialized_size_Battery(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: mission_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: drone_name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: estimated_cost
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: current_battery
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: mission_possible
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = drone_msgs::msg::Battery;
    is_plain =
      (
      offsetof(DataType, mission_possible) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Battery__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const drone_msgs::msg::Battery *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Battery__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<drone_msgs::msg::Battery *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Battery__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const drone_msgs::msg::Battery *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Battery__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Battery(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Battery__callbacks = {
  "drone_msgs::msg",
  "Battery",
  _Battery__cdr_serialize,
  _Battery__cdr_deserialize,
  _Battery__get_serialized_size,
  _Battery__max_serialized_size
};

static rosidl_message_type_support_t _Battery__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Battery__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace drone_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_drone_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<drone_msgs::msg::Battery>()
{
  return &drone_msgs::msg::typesupport_fastrtps_cpp::_Battery__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, drone_msgs, msg, Battery)() {
  return &drone_msgs::msg::typesupport_fastrtps_cpp::_Battery__handle;
}

#ifdef __cplusplus
}
#endif
