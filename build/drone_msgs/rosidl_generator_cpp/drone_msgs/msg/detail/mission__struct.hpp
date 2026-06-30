// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from drone_msgs:msg/Mission.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__MSG__DETAIL__MISSION__STRUCT_HPP_
#define DRONE_MSGS__MSG__DETAIL__MISSION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'source'
// Member 'destination'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__drone_msgs__msg__Mission __attribute__((deprecated))
#else
# define DEPRECATED__drone_msgs__msg__Mission __declspec(deprecated)
#endif

namespace drone_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Mission_
{
  using Type = Mission_<ContainerAllocator>;

  explicit Mission_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : source(_init),
    destination(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->drone_name = "";
      this->mission_id = 0ul;
    }
  }

  explicit Mission_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : drone_name(_alloc),
    source(_alloc, _init),
    destination(_alloc, _init)
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
  using _source_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _source_type source;
  using _destination_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _destination_type destination;
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
  Type & set__source(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->source = _arg;
    return *this;
  }
  Type & set__destination(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->destination = _arg;
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
    drone_msgs::msg::Mission_<ContainerAllocator> *;
  using ConstRawPtr =
    const drone_msgs::msg::Mission_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drone_msgs::msg::Mission_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drone_msgs::msg::Mission_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drone_msgs::msg::Mission_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::msg::Mission_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drone_msgs::msg::Mission_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::msg::Mission_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drone_msgs::msg::Mission_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drone_msgs::msg::Mission_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drone_msgs__msg__Mission
    std::shared_ptr<drone_msgs::msg::Mission_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drone_msgs__msg__Mission
    std::shared_ptr<drone_msgs::msg::Mission_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Mission_ & other) const
  {
    if (this->drone_name != other.drone_name) {
      return false;
    }
    if (this->source != other.source) {
      return false;
    }
    if (this->destination != other.destination) {
      return false;
    }
    if (this->mission_id != other.mission_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Mission_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Mission_

// alias to use template instance with default allocator
using Mission =
  drone_msgs::msg::Mission_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace drone_msgs

#endif  // DRONE_MSGS__MSG__DETAIL__MISSION__STRUCT_HPP_
