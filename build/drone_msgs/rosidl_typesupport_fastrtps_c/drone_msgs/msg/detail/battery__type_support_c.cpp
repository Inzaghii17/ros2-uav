// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from drone_msgs:msg/Battery.idl
// generated code does not contain a copyright notice
#include "drone_msgs/msg/detail/battery__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "drone_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "drone_msgs/msg/detail/battery__struct.h"
#include "drone_msgs/msg/detail/battery__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // drone_name
#include "rosidl_runtime_c/string_functions.h"  // drone_name

// forward declare type support functions


using _Battery__ros_msg_type = drone_msgs__msg__Battery;

static bool _Battery__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Battery__ros_msg_type * ros_message = static_cast<const _Battery__ros_msg_type *>(untyped_ros_message);
  // Field name: mission_id
  {
    cdr << ros_message->mission_id;
  }

  // Field name: drone_name
  {
    const rosidl_runtime_c__String * str = &ros_message->drone_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: estimated_cost
  {
    cdr << ros_message->estimated_cost;
  }

  // Field name: current_battery
  {
    cdr << ros_message->current_battery;
  }

  // Field name: mission_possible
  {
    cdr << (ros_message->mission_possible ? true : false);
  }

  return true;
}

static bool _Battery__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Battery__ros_msg_type * ros_message = static_cast<_Battery__ros_msg_type *>(untyped_ros_message);
  // Field name: mission_id
  {
    cdr >> ros_message->mission_id;
  }

  // Field name: drone_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->drone_name.data) {
      rosidl_runtime_c__String__init(&ros_message->drone_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->drone_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'drone_name'\n");
      return false;
    }
  }

  // Field name: estimated_cost
  {
    cdr >> ros_message->estimated_cost;
  }

  // Field name: current_battery
  {
    cdr >> ros_message->current_battery;
  }

  // Field name: mission_possible
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->mission_possible = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_drone_msgs
size_t get_serialized_size_drone_msgs__msg__Battery(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Battery__ros_msg_type * ros_message = static_cast<const _Battery__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name mission_id
  {
    size_t item_size = sizeof(ros_message->mission_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name drone_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->drone_name.size + 1);
  // field.name estimated_cost
  {
    size_t item_size = sizeof(ros_message->estimated_cost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name current_battery
  {
    size_t item_size = sizeof(ros_message->current_battery);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mission_possible
  {
    size_t item_size = sizeof(ros_message->mission_possible);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Battery__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_drone_msgs__msg__Battery(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_drone_msgs
size_t max_serialized_size_drone_msgs__msg__Battery(
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

  // member: mission_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: drone_name
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
  // member: estimated_cost
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: current_battery
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: mission_possible
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
    using DataType = drone_msgs__msg__Battery;
    is_plain =
      (
      offsetof(DataType, mission_possible) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Battery__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_drone_msgs__msg__Battery(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Battery = {
  "drone_msgs::msg",
  "Battery",
  _Battery__cdr_serialize,
  _Battery__cdr_deserialize,
  _Battery__get_serialized_size,
  _Battery__max_serialized_size
};

static rosidl_message_type_support_t _Battery__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Battery,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, drone_msgs, msg, Battery)() {
  return &_Battery__type_support;
}

#if defined(__cplusplus)
}
#endif
