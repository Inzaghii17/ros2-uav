// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from drone_msgs:msg/Battery.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__MSG__DETAIL__BATTERY__STRUCT_HPP_
#define DRONE_MSGS__MSG__DETAIL__BATTERY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__drone_msgs__msg__Battery __attribute__((deprecated))
#else
# define DEPRECATED__drone_msgs__msg__Battery __declspec(deprecated)
#endif

namespace drone_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Battery_
{
  using Type = Battery_<ContainerAllocator>;

  explicit Battery_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mission_id = 0ul;
      this->drone_name = "";
      this->estimated_cost = 0.0;
      this->current_battery = 0.0;
      this->mission_possible = false;
    }
  }

  explicit Battery_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : drone_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mission_id = 0ul;
      this->drone_name = "";
      this->estimated_cost = 0.0;
      this->current_battery = 0.0;
      this->mission_possible = false;
    }
  }

  // field types and members
  using _mission_id_type =
    uint32_t;
  _mission_id_type mission_id;
  using _drone_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _drone_name_type drone_name;
  using _estimated_cost_type =
    double;
  _estimated_cost_type estimated_cost;
  using _current_battery_type =
    double;
  _current_battery_type current_battery;
  using _mission_possible_type =
    bool;
  _mission_possible_type mission_possible;

  // setters for named parameter idiom
  Type & set__mission_id(
    const uint32_t & _arg)
  {
    this->mission_id = _arg;
    return *this;
  }
  Type & set__drone_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->drone_name = _arg;
    return *this;
  }
  Type & set__estimated_cost(
    const double & _arg)
  {
    this->estimated_cost = _arg;
    return *this;
  }
  Type & set__current_battery(
    const double & _arg)
  {
    this->current_battery = _arg;
    return *this;
  }
  Type & set__mission_possible(
    const bool & _arg)
  {
    this->mission_possible = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    drone_msgs::msg::Battery_<ContainerAllocator> *;
  using ConstRawPtr =
    const drone_msgs::msg::Battery_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drone_msgs::msg::Battery_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drone_msgs::msg::Battery_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drone_msgs::msg::Battery_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::msg::Battery_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drone_msgs::msg::Battery_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::msg::Battery_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drone_msgs::msg::Battery_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drone_msgs::msg::Battery_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drone_msgs__msg__Battery
    std::shared_ptr<drone_msgs::msg::Battery_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drone_msgs__msg__Battery
    std::shared_ptr<drone_msgs::msg::Battery_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Battery_ & other) const
  {
    if (this->mission_id != other.mission_id) {
      return false;
    }
    if (this->drone_name != other.drone_name) {
      return false;
    }
    if (this->estimated_cost != other.estimated_cost) {
      return false;
    }
    if (this->current_battery != other.current_battery) {
      return false;
    }
    if (this->mission_possible != other.mission_possible) {
      return false;
    }
    return true;
  }
  bool operator!=(const Battery_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Battery_

// alias to use template instance with default allocator
using Battery =
  drone_msgs::msg::Battery_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace drone_msgs

#endif  // DRONE_MSGS__MSG__DETAIL__BATTERY__STRUCT_HPP_
