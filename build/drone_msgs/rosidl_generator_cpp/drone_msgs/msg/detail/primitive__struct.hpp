// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from drone_msgs:msg/Primitive.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__MSG__DETAIL__PRIMITIVE__STRUCT_HPP_
#define DRONE_MSGS__MSG__DETAIL__PRIMITIVE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__drone_msgs__msg__Primitive __attribute__((deprecated))
#else
# define DEPRECATED__drone_msgs__msg__Primitive __declspec(deprecated)
#endif

namespace drone_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Primitive_
{
  using Type = Primitive_<ContainerAllocator>;

  explicit Primitive_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
      this->step_distance = 0.0;
    }
  }

  explicit Primitive_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
      this->step_distance = 0.0;
    }
  }

  // field types and members
  using _type_type =
    uint8_t;
  _type_type type;
  using _step_distance_type =
    double;
  _step_distance_type step_distance;

  // setters for named parameter idiom
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__step_distance(
    const double & _arg)
  {
    this->step_distance = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t HOVER =
    0u;
  static constexpr uint8_t N =
    1u;
  static constexpr uint8_t NE =
    2u;
  static constexpr uint8_t E =
    3u;
  static constexpr uint8_t SE =
    4u;
  static constexpr uint8_t S =
    5u;
  static constexpr uint8_t SW =
    6u;
  static constexpr uint8_t W =
    7u;
  static constexpr uint8_t NW =
    8u;

  // pointer types
  using RawPtr =
    drone_msgs::msg::Primitive_<ContainerAllocator> *;
  using ConstRawPtr =
    const drone_msgs::msg::Primitive_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drone_msgs::msg::Primitive_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drone_msgs::msg::Primitive_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drone_msgs::msg::Primitive_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::msg::Primitive_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drone_msgs::msg::Primitive_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::msg::Primitive_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drone_msgs::msg::Primitive_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drone_msgs::msg::Primitive_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drone_msgs__msg__Primitive
    std::shared_ptr<drone_msgs::msg::Primitive_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drone_msgs__msg__Primitive
    std::shared_ptr<drone_msgs::msg::Primitive_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Primitive_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->step_distance != other.step_distance) {
      return false;
    }
    return true;
  }
  bool operator!=(const Primitive_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Primitive_

// alias to use template instance with default allocator
using Primitive =
  drone_msgs::msg::Primitive_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Primitive_<ContainerAllocator>::HOVER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Primitive_<ContainerAllocator>::N;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Primitive_<ContainerAllocator>::NE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Primitive_<ContainerAllocator>::E;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Primitive_<ContainerAllocator>::SE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Primitive_<ContainerAllocator>::S;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Primitive_<ContainerAllocator>::SW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Primitive_<ContainerAllocator>::W;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Primitive_<ContainerAllocator>::NW;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace drone_msgs

#endif  // DRONE_MSGS__MSG__DETAIL__PRIMITIVE__STRUCT_HPP_
