// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from drone_msgs:msg/Primitive.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__MSG__DETAIL__PRIMITIVE__STRUCT_H_
#define DRONE_MSGS__MSG__DETAIL__PRIMITIVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'HOVER'.
enum
{
  drone_msgs__msg__Primitive__HOVER = 0
};

/// Constant 'N'.
enum
{
  drone_msgs__msg__Primitive__N = 1
};

/// Constant 'NE'.
enum
{
  drone_msgs__msg__Primitive__NE = 2
};

/// Constant 'E'.
enum
{
  drone_msgs__msg__Primitive__E = 3
};

/// Constant 'SE'.
enum
{
  drone_msgs__msg__Primitive__SE = 4
};

/// Constant 'S'.
enum
{
  drone_msgs__msg__Primitive__S = 5
};

/// Constant 'SW'.
enum
{
  drone_msgs__msg__Primitive__SW = 6
};

/// Constant 'W'.
enum
{
  drone_msgs__msg__Primitive__W = 7
};

/// Constant 'NW'.
enum
{
  drone_msgs__msg__Primitive__NW = 8
};

/// Struct defined in msg/Primitive in the package drone_msgs.
typedef struct drone_msgs__msg__Primitive
{
  uint8_t type;
  double step_distance;
} drone_msgs__msg__Primitive;

// Struct for a sequence of drone_msgs__msg__Primitive.
typedef struct drone_msgs__msg__Primitive__Sequence
{
  drone_msgs__msg__Primitive * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drone_msgs__msg__Primitive__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DRONE_MSGS__MSG__DETAIL__PRIMITIVE__STRUCT_H_
