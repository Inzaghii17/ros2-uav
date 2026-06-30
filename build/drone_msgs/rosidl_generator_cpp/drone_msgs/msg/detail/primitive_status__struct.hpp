// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from drone_msgs:msg/PrimitiveStatus.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__MSG__DETAIL__PRIMITIVE_STATUS__STRUCT_HPP_
#define DRONE_MSGS__MSG__DETAIL__PRIMITIVE_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__drone_msgs__msg__PrimitiveStatus __attribute__((deprecated))
#else
# define DEPRECATED__drone_msgs__msg__PrimitiveStatus __declspec(deprecated)
#endif

namespace drone_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PrimitiveStatus_
{
  using Type = PrimitiveStatus_<ContainerAllocator>;

  explicit PrimitiveStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->drone_name = "";
      this->mission_id = 0ul;
      this->current_index = 0ul;
      this->total_primitives = 0ul;
      this->mission_complete = false;
      this->battery_remaining = 0.0;
    }
  }

  explicit PrimitiveStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : drone_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->drone_name = "";
      this->mission_id = 0ul;
      this->current_index = 0ul;
      this->total_primitives = 0ul;
      this->mission_complete = false;
      this->battery_remaining = 0.0;
    }
  }

  // field types and members
  using _drone_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _drone_name_type drone_name;
  using _mission_id_type =
    uint32_t;
  _mission_id_type mission_id;
  using _current_index_type =
    uint32_t;
  _current_index_type current_index;
  using _total_primitives_type =
    uint32_t;
  _total_primitives_type total_primitives;
  using _mission_complete_type =
    bool;
  _mission_complete_type mission_complete;
  using _battery_remaining_type =
    double;
  _battery_remaining_type battery_remaining;

  // setters for named parameter idiom
  Type & set__drone_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->drone_name = _arg;
    return *this;
  }
  Type & set__mission_id(
    const uint32_t & _arg)
  {
    this->mission_id = _arg;
    return *this;
  }
  Type & set__current_index(
    const uint32_t & _arg)
  {
    this->current_index = _arg;
    return *this;
  }
  Type & set__total_primitives(
    const uint32_t & _arg)
  {
    this->total_primitives = _arg;
    return *this;
  }
  Type & set__mission_complete(
    const bool & _arg)
  {
    this->mission_complete = _arg;
    return *this;
  }
  Type & set__battery_remaining(
    const double & _arg)
  {
    this->battery_remaining = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    drone_msgs::msg::PrimitiveStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const drone_msgs::msg::PrimitiveStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drone_msgs::msg::PrimitiveStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drone_msgs::msg::PrimitiveStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drone_msgs::msg::PrimitiveStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::msg::PrimitiveStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drone_msgs::msg::PrimitiveStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::msg::PrimitiveStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drone_msgs::msg::PrimitiveStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drone_msgs::msg::PrimitiveStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drone_msgs__msg__PrimitiveStatus
    std::shared_ptr<drone_msgs::msg::PrimitiveStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drone_msgs__msg__PrimitiveStatus
    std::shared_ptr<drone_msgs::msg::PrimitiveStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PrimitiveStatus_ & other) const
  {
    if (this->drone_name != other.drone_name) {
      return false;
    }
    if (this->mission_id != other.mission_id) {
      return false;
    }
    if (this->current_index != other.current_index) {
      return false;
    }
    if (this->total_primitives != other.total_primitives) {
      return false;
    }
    if (this->mission_complete != other.mission_complete) {
      return false;
    }
    if (this->battery_remaining != other.battery_remaining) {
      return false;
    }
    return true;
  }
  bool operator!=(const PrimitiveStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PrimitiveStatus_

// alias to use template instance with default allocator
using PrimitiveStatus =
  drone_msgs::msg::PrimitiveStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace drone_msgs

#endif  // DRONE_MSGS__MSG__DETAIL__PRIMITIVE_STATUS__STRUCT_HPP_
