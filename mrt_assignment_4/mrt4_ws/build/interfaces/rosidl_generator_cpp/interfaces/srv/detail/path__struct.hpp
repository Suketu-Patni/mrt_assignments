// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:srv/Path.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__PATH__STRUCT_HPP_
#define INTERFACES__SRV__DETAIL__PATH__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interfaces__srv__Path_Request __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__srv__Path_Request __declspec(deprecated)
#endif

namespace interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Path_Request_
{
  using Type = Path_Request_<ContainerAllocator>;

  explicit Path_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Path_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _bounding_boxes_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _bounding_boxes_type bounding_boxes;

  // setters for named parameter idiom
  Type & set__bounding_boxes(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->bounding_boxes = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::srv::Path_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::srv::Path_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::srv::Path_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::srv::Path_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::Path_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::Path_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::Path_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::Path_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::srv::Path_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::srv::Path_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__srv__Path_Request
    std::shared_ptr<interfaces::srv::Path_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__srv__Path_Request
    std::shared_ptr<interfaces::srv::Path_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Path_Request_ & other) const
  {
    if (this->bounding_boxes != other.bounding_boxes) {
      return false;
    }
    return true;
  }
  bool operator!=(const Path_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Path_Request_

// alias to use template instance with default allocator
using Path_Request =
  interfaces::srv::Path_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces


#ifndef _WIN32
# define DEPRECATED__interfaces__srv__Path_Response __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__srv__Path_Response __declspec(deprecated)
#endif

namespace interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Path_Response_
{
  using Type = Path_Response_<ContainerAllocator>;

  explicit Path_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Path_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _path_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _path_type path;

  // setters for named parameter idiom
  Type & set__path(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->path = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::srv::Path_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::srv::Path_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::srv::Path_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::srv::Path_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::Path_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::Path_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::Path_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::Path_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::srv::Path_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::srv::Path_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__srv__Path_Response
    std::shared_ptr<interfaces::srv::Path_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__srv__Path_Response
    std::shared_ptr<interfaces::srv::Path_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Path_Response_ & other) const
  {
    if (this->path != other.path) {
      return false;
    }
    return true;
  }
  bool operator!=(const Path_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Path_Response_

// alias to use template instance with default allocator
using Path_Response =
  interfaces::srv::Path_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces

namespace interfaces
{

namespace srv
{

struct Path
{
  using Request = interfaces::srv::Path_Request;
  using Response = interfaces::srv::Path_Response;
};

}  // namespace srv

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__PATH__STRUCT_HPP_
