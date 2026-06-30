// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from drone_msgs:msg/DroneState.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__MSG__DETAIL__DRONE_STATE__STRUCT_HPP_
#define DRONE_MSGS__MSG__DETAIL__DRONE_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__drone_msgs__msg__DroneState __attribute__((deprecated))
#else
# define DEPRECATED__drone_msgs__msg__DroneState __declspec(deprecated)
#endif

namespace drone_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DroneState_
{
  using Type = DroneState_<ContainerAllocator>;

  explicit DroneState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->drone_name = "";
      this->battery = 0.0;
      this->moving = false;
      this->current_primitive_index = 0ul;
    }
  }

  explicit DroneState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : drone_name(_alloc),
    pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->drone_name = "";
      this->battery = 0.0;
      this->moving = false;
      this->current_primitive_index = 0ul;
    }
  }

  // field types and members
  using _drone_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _drone_name_type drone_name;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _battery_type =
    double;
  _battery_type battery;
  using _moving_type =
    bool;
  _moving_type moving;
  using _current_primitive_index_type =
    uint32_t;
  _current_primitive_index_type current_primitive_index;

  // setters for named parameter idiom
  Type & set__drone_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->drone_name = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__battery(
    const double & _arg)
  {
    this->battery = _arg;
    return *this;
  }
  Type & set__moving(
    const bool & _arg)
  {
    this->moving = _arg;
    return *this;
  }
  Type & set__current_primitive_index(
    const uint32_t & _arg)
  {
    this->current_primitive_index = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    drone_msgs::msg::DroneState_<ContainerAllocator> *;
  using ConstRawPtr =
    const drone_msgs::msg::DroneState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drone_msgs::msg::DroneState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drone_msgs::msg::DroneState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drone_msgs::msg::DroneState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::msg::DroneState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drone_msgs::msg::DroneState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::msg::DroneState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drone_msgs::msg::DroneState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drone_msgs::msg::DroneState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drone_msgs__msg__DroneState
    std::shared_ptr<drone_msgs::msg::DroneState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drone_msgs__msg__DroneState
    std::shared_ptr<drone_msgs::msg::DroneState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DroneState_ & other) const
  {
    if (this->drone_name != other.drone_name) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->battery != other.battery) {
      return false;
    }
    if (this->moving != other.moving) {
      return false;
    }
    if (this->current_primitive_index != other.current_primitive_index) {
      return false;
    }
    return true;
  }
  bool operator!=(const DroneState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DroneState_

// alias to use template instance with default allocator
using DroneState =
  drone_msgs::msg::DroneState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace drone_msgs

#endif  // DRONE_MSGS__MSG__DETAIL__DRONE_STATE__STRUCT_HPP_
