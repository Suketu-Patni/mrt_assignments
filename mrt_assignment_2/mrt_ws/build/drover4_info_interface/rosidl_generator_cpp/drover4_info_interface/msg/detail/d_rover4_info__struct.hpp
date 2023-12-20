// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from drover4_info_interface:msg/DRover4Info.idl
// generated code does not contain a copyright notice

#ifndef DROVER4_INFO_INTERFACE__MSG__DETAIL__D_ROVER4_INFO__STRUCT_HPP_
#define DROVER4_INFO_INTERFACE__MSG__DETAIL__D_ROVER4_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'current_location'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__drover4_info_interface__msg__DRover4Info __attribute__((deprecated))
#else
# define DEPRECATED__drover4_info_interface__msg__DRover4Info __declspec(deprecated)
#endif

namespace drover4_info_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DRover4Info_
{
  using Type = DRover4Info_<ContainerAllocator>;

  explicit DRover4Info_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : current_location(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rover_id = 0l;
      this->battery_level = 0.0f;
      this->health_status = "";
    }
  }

  explicit DRover4Info_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : current_location(_alloc, _init),
    health_status(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rover_id = 0l;
      this->battery_level = 0.0f;
      this->health_status = "";
    }
  }

  // field types and members
  using _rover_id_type =
    int32_t;
  _rover_id_type rover_id;
  using _battery_level_type =
    float;
  _battery_level_type battery_level;
  using _current_location_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _current_location_type current_location;
  using _health_status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _health_status_type health_status;

  // setters for named parameter idiom
  Type & set__rover_id(
    const int32_t & _arg)
  {
    this->rover_id = _arg;
    return *this;
  }
  Type & set__battery_level(
    const float & _arg)
  {
    this->battery_level = _arg;
    return *this;
  }
  Type & set__current_location(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->current_location = _arg;
    return *this;
  }
  Type & set__health_status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->health_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    drover4_info_interface::msg::DRover4Info_<ContainerAllocator> *;
  using ConstRawPtr =
    const drover4_info_interface::msg::DRover4Info_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drover4_info_interface::msg::DRover4Info_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drover4_info_interface::msg::DRover4Info_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drover4_info_interface::msg::DRover4Info_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drover4_info_interface::msg::DRover4Info_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drover4_info_interface::msg::DRover4Info_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drover4_info_interface::msg::DRover4Info_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drover4_info_interface::msg::DRover4Info_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drover4_info_interface::msg::DRover4Info_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drover4_info_interface__msg__DRover4Info
    std::shared_ptr<drover4_info_interface::msg::DRover4Info_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drover4_info_interface__msg__DRover4Info
    std::shared_ptr<drover4_info_interface::msg::DRover4Info_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DRover4Info_ & other) const
  {
    if (this->rover_id != other.rover_id) {
      return false;
    }
    if (this->battery_level != other.battery_level) {
      return false;
    }
    if (this->current_location != other.current_location) {
      return false;
    }
    if (this->health_status != other.health_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const DRover4Info_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DRover4Info_

// alias to use template instance with default allocator
using DRover4Info =
  drover4_info_interface::msg::DRover4Info_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace drover4_info_interface

#endif  // DROVER4_INFO_INTERFACE__MSG__DETAIL__D_ROVER4_INFO__STRUCT_HPP_
