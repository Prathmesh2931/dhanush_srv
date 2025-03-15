// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dhanush_srv:srv/SpeedAngle.idl
// generated code does not contain a copyright notice

#ifndef DHANUSH_SRV__SRV__DETAIL__SPEED_ANGLE__BUILDER_HPP_
#define DHANUSH_SRV__SRV__DETAIL__SPEED_ANGLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dhanush_srv/srv/detail/speed_angle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dhanush_srv
{

namespace srv
{

namespace builder
{

class Init_SpeedAngle_Request_angle
{
public:
  explicit Init_SpeedAngle_Request_angle(::dhanush_srv::srv::SpeedAngle_Request & msg)
  : msg_(msg)
  {}
  ::dhanush_srv::srv::SpeedAngle_Request angle(::dhanush_srv::srv::SpeedAngle_Request::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dhanush_srv::srv::SpeedAngle_Request msg_;
};

class Init_SpeedAngle_Request_speed
{
public:
  Init_SpeedAngle_Request_speed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpeedAngle_Request_angle speed(::dhanush_srv::srv::SpeedAngle_Request::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_SpeedAngle_Request_angle(msg_);
  }

private:
  ::dhanush_srv::srv::SpeedAngle_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dhanush_srv::srv::SpeedAngle_Request>()
{
  return dhanush_srv::srv::builder::Init_SpeedAngle_Request_speed();
}

}  // namespace dhanush_srv


namespace dhanush_srv
{

namespace srv
{

namespace builder
{

class Init_SpeedAngle_Response_success
{
public:
  Init_SpeedAngle_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dhanush_srv::srv::SpeedAngle_Response success(::dhanush_srv::srv::SpeedAngle_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dhanush_srv::srv::SpeedAngle_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dhanush_srv::srv::SpeedAngle_Response>()
{
  return dhanush_srv::srv::builder::Init_SpeedAngle_Response_success();
}

}  // namespace dhanush_srv

#endif  // DHANUSH_SRV__SRV__DETAIL__SPEED_ANGLE__BUILDER_HPP_
