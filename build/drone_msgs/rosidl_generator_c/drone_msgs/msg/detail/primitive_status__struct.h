// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from drone_msgs:msg/PrimitiveStatus.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__MSG__DETAIL__PRIMITIVE_STATUS__STRUCT_H_
#define DRONE_MSGS__MSG__DETAIL__PRIMITIVE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'drone_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/PrimitiveStatus in the package drone_msgs.
typedef struct drone_msgs__msg__PrimitiveStatus
{
  rosidl_runtime_c__String drone_name;
  uint32_t mission_id;
  uint32_t current_index;
  uint32_t total_primitives;
  bool mission_complete;
  double battery_remaining;
} drone_msgs__msg__PrimitiveStatus;

// Struct for a sequence of drone_msgs__msg__PrimitiveStatus.
typedef struct drone_msgs__msg__PrimitiveStatus__Sequence
{
  drone_msgs__msg__PrimitiveStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drone_msgs__msg__PrimitiveStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DRONE_MSGS__MSG__DETAIL__PRIMITIVE_STATUS__STRUCT_H_
