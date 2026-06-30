// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from drone_msgs:msg/MissionPlan.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__MSG__DETAIL__MISSION_PLAN__STRUCT_HPP_
#define DRONE_MSGS__MSG__DETAIL__MISSION_PLAN__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'primitives'
#include "drone_msgs/msg/detail/primitive__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__drone_msgs__msg__MissionPlan __attribute__((deprecated))
#else
# define DEPRECATED__drone_msgs__msg__MissionPlan __declspec(deprecated)
#endif

namespace drone_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MissionPlan_
{
  using Type = MissionPlan_<ContainerAllocator>;

  explicit MissionPlan_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->drone_name = "";
      this->mission_id = 0ul;
    }
  }

  explicit MissionPlan_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : drone_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->drone_name = "";
      this->mission_id = 0ul;
    }
  }

  // field types and members
  using _drone_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _drone_name_type drone_name;
  using _primitives_type =
    std::vector<drone_msgs::msg::Primitive_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<drone_msgs::msg::Primitive_<ContainerAllocator>>>;
  _primitives_type primitives;
  using _mission_id_type =
    uint32_t;
  _mission_id_type mission_id;

  // setters for named parameter idiom
  Type & set__drone_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->drone_name = _arg;
    return *this;
  }
  Type & set__primitives(
    const std::vector<drone_msgs::msg::Primitive_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<drone_msgs::msg::Primitive_<ContainerAllocator>>> & _arg)
  {
    this->primitives = _arg;
    return *this;
  }
  Type & set__mission_id(
    const uint32_t & _arg)
  {
    this->mission_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    drone_msgs::msg::MissionPlan_<ContainerAllocator> *;
  using ConstRawPtr =
    const drone_msgs::msg::MissionPlan_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drone_msgs::msg::MissionPlan_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drone_msgs::msg::MissionPlan_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drone_msgs::msg::MissionPlan_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::msg::MissionPlan_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drone_msgs::msg::MissionPlan_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::msg::MissionPlan_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drone_msgs::msg::MissionPlan_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drone_msgs::msg::MissionPlan_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drone_msgs__msg__MissionPlan
    std::shared_ptr<drone_msgs::msg::MissionPlan_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drone_msgs__msg__MissionPlan
    std::shared_ptr<drone_msgs::msg::MissionPlan_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MissionPlan_ & other) const
  {
    if (this->drone_name != other.drone_name) {
      return false;
    }
    if (this->primitives != other.primitives) {
      return false;
    }
    if (this->mission_id != other.mission_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const MissionPlan_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MissionPlan_

// alias to use template instance with default allocator
using MissionPlan =
  drone_msgs::msg::MissionPlan_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace drone_msgs

#endif  // DRONE_MSGS__MSG__DETAIL__MISSION_PLAN__STRUCT_HPP_
