// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:srv/BoundingBoxes.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__BOUNDING_BOXES__STRUCT_HPP_
#define INTERFACES__SRV__DETAIL__BOUNDING_BOXES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'img'
#include "sensor_msgs/msg/detail/image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interfaces__srv__BoundingBoxes_Request __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__srv__BoundingBoxes_Request __declspec(deprecated)
#endif

namespace interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct BoundingBoxes_Request_
{
  using Type = BoundingBoxes_Request_<ContainerAllocator>;

  explicit BoundingBoxes_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : img(_init)
  {
    (void)_init;
  }

  explicit BoundingBoxes_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : img(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _img_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _img_type img;

  // setters for named parameter idiom
  Type & set__img(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->img = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::srv::BoundingBoxes_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::srv::BoundingBoxes_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::srv::BoundingBoxes_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::srv::BoundingBoxes_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::BoundingBoxes_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::BoundingBoxes_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::BoundingBoxes_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::BoundingBoxes_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::srv::BoundingBoxes_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::srv::BoundingBoxes_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__srv__BoundingBoxes_Request
    std::shared_ptr<interfaces::srv::BoundingBoxes_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__srv__BoundingBoxes_Request
    std::shared_ptr<interfaces::srv::BoundingBoxes_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BoundingBoxes_Request_ & other) const
  {
    if (this->img != other.img) {
      return false;
    }
    return true;
  }
  bool operator!=(const BoundingBoxes_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BoundingBoxes_Request_

// alias to use template instance with default allocator
using BoundingBoxes_Request =
  interfaces::srv::BoundingBoxes_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces


#ifndef _WIN32
# define DEPRECATED__interfaces__srv__BoundingBoxes_Response __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__srv__BoundingBoxes_Response __declspec(deprecated)
#endif

namespace interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct BoundingBoxes_Response_
{
  using Type = BoundingBoxes_Response_<ContainerAllocator>;

  explicit BoundingBoxes_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit BoundingBoxes_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _bounding_boxes_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _bounding_boxes_type bounding_boxes;
  using _aruco_ids_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _aruco_ids_type aruco_ids;

  // setters for named parameter idiom
  Type & set__bounding_boxes(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->bounding_boxes = _arg;
    return *this;
  }
  Type & set__aruco_ids(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->aruco_ids = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::srv::BoundingBoxes_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::srv::BoundingBoxes_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::srv::BoundingBoxes_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::srv::BoundingBoxes_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::BoundingBoxes_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::BoundingBoxes_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::BoundingBoxes_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::BoundingBoxes_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::srv::BoundingBoxes_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::srv::BoundingBoxes_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__srv__BoundingBoxes_Response
    std::shared_ptr<interfaces::srv::BoundingBoxes_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__srv__BoundingBoxes_Response
    std::shared_ptr<interfaces::srv::BoundingBoxes_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BoundingBoxes_Response_ & other) const
  {
    if (this->bounding_boxes != other.bounding_boxes) {
      return false;
    }
    if (this->aruco_ids != other.aruco_ids) {
      return false;
    }
    return true;
  }
  bool operator!=(const BoundingBoxes_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BoundingBoxes_Response_

// alias to use template instance with default allocator
using BoundingBoxes_Response =
  interfaces::srv::BoundingBoxes_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces

namespace interfaces
{

namespace srv
{

struct BoundingBoxes
{
  using Request = interfaces::srv::BoundingBoxes_Request;
  using Response = interfaces::srv::BoundingBoxes_Response;
};

}  // namespace srv

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__BOUNDING_BOXES__STRUCT_HPP_
