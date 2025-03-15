// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dhanush_srv:srv/SpeedAngle.idl
// generated code does not contain a copyright notice

#ifndef DHANUSH_SRV__SRV__DETAIL__SPEED_ANGLE__STRUCT_HPP_
#define DHANUSH_SRV__SRV__DETAIL__SPEED_ANGLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__dhanush_srv__srv__SpeedAngle_Request __attribute__((deprecated))
#else
# define DEPRECATED__dhanush_srv__srv__SpeedAngle_Request __declspec(deprecated)
#endif

namespace dhanush_srv
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SpeedAngle_Request_
{
  using Type = SpeedAngle_Request_<ContainerAllocator>;

  explicit SpeedAngle_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed = 0.0f;
      this->angle = 0.0f;
    }
  }

  explicit SpeedAngle_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed = 0.0f;
      this->angle = 0.0f;
    }
  }

  // field types and members
  using _speed_type =
    float;
  _speed_type speed;
  using _angle_type =
    float;
  _angle_type angle;

  // setters for named parameter idiom
  Type & set__speed(
    const float & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__angle(
    const float & _arg)
  {
    this->angle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dhanush_srv::srv::SpeedAngle_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const dhanush_srv::srv::SpeedAngle_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dhanush_srv::srv::SpeedAngle_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dhanush_srv::srv::SpeedAngle_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dhanush_srv::srv::SpeedAngle_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dhanush_srv::srv::SpeedAngle_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dhanush_srv::srv::SpeedAngle_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dhanush_srv::srv::SpeedAngle_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dhanush_srv::srv::SpeedAngle_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dhanush_srv::srv::SpeedAngle_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dhanush_srv__srv__SpeedAngle_Request
    std::shared_ptr<dhanush_srv::srv::SpeedAngle_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dhanush_srv__srv__SpeedAngle_Request
    std::shared_ptr<dhanush_srv::srv::SpeedAngle_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SpeedAngle_Request_ & other) const
  {
    if (this->speed != other.speed) {
      return false;
    }
    if (this->angle != other.angle) {
      return false;
    }
    return true;
  }
  bool operator!=(const SpeedAngle_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SpeedAngle_Request_

// alias to use template instance with default allocator
using SpeedAngle_Request =
  dhanush_srv::srv::SpeedAngle_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dhanush_srv


#ifndef _WIN32
# define DEPRECATED__dhanush_srv__srv__SpeedAngle_Response __attribute__((deprecated))
#else
# define DEPRECATED__dhanush_srv__srv__SpeedAngle_Response __declspec(deprecated)
#endif

namespace dhanush_srv
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SpeedAngle_Response_
{
  using Type = SpeedAngle_Response_<ContainerAllocator>;

  explicit SpeedAngle_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit SpeedAngle_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dhanush_srv::srv::SpeedAngle_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const dhanush_srv::srv::SpeedAngle_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dhanush_srv::srv::SpeedAngle_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dhanush_srv::srv::SpeedAngle_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dhanush_srv::srv::SpeedAngle_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dhanush_srv::srv::SpeedAngle_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dhanush_srv::srv::SpeedAngle_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dhanush_srv::srv::SpeedAngle_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dhanush_srv::srv::SpeedAngle_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dhanush_srv::srv::SpeedAngle_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dhanush_srv__srv__SpeedAngle_Response
    std::shared_ptr<dhanush_srv::srv::SpeedAngle_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dhanush_srv__srv__SpeedAngle_Response
    std::shared_ptr<dhanush_srv::srv::SpeedAngle_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SpeedAngle_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const SpeedAngle_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SpeedAngle_Response_

// alias to use template instance with default allocator
using SpeedAngle_Response =
  dhanush_srv::srv::SpeedAngle_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dhanush_srv

namespace dhanush_srv
{

namespace srv
{

struct SpeedAngle
{
  using Request = dhanush_srv::srv::SpeedAngle_Request;
  using Response = dhanush_srv::srv::SpeedAngle_Response;
};

}  // namespace srv

}  // namespace dhanush_srv

#endif  // DHANUSH_SRV__SRV__DETAIL__SPEED_ANGLE__STRUCT_HPP_
