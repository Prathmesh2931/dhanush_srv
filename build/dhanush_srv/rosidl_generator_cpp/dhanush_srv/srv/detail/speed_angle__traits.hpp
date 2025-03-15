// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dhanush_srv:srv/SpeedAngle.idl
// generated code does not contain a copyright notice

#ifndef DHANUSH_SRV__SRV__DETAIL__SPEED_ANGLE__TRAITS_HPP_
#define DHANUSH_SRV__SRV__DETAIL__SPEED_ANGLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dhanush_srv/srv/detail/speed_angle__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace dhanush_srv
{

namespace srv
{

inline void to_flow_style_yaml(
  const SpeedAngle_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: speed
  {
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << ", ";
  }

  // member: angle
  {
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SpeedAngle_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << "\n";
  }

  // member: angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SpeedAngle_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace dhanush_srv

namespace rosidl_generator_traits
{

[[deprecated("use dhanush_srv::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dhanush_srv::srv::SpeedAngle_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  dhanush_srv::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dhanush_srv::srv::to_yaml() instead")]]
inline std::string to_yaml(const dhanush_srv::srv::SpeedAngle_Request & msg)
{
  return dhanush_srv::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dhanush_srv::srv::SpeedAngle_Request>()
{
  return "dhanush_srv::srv::SpeedAngle_Request";
}

template<>
inline const char * name<dhanush_srv::srv::SpeedAngle_Request>()
{
  return "dhanush_srv/srv/SpeedAngle_Request";
}

template<>
struct has_fixed_size<dhanush_srv::srv::SpeedAngle_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dhanush_srv::srv::SpeedAngle_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dhanush_srv::srv::SpeedAngle_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace dhanush_srv
{

namespace srv
{

inline void to_flow_style_yaml(
  const SpeedAngle_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SpeedAngle_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SpeedAngle_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace dhanush_srv

namespace rosidl_generator_traits
{

[[deprecated("use dhanush_srv::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dhanush_srv::srv::SpeedAngle_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  dhanush_srv::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dhanush_srv::srv::to_yaml() instead")]]
inline std::string to_yaml(const dhanush_srv::srv::SpeedAngle_Response & msg)
{
  return dhanush_srv::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dhanush_srv::srv::SpeedAngle_Response>()
{
  return "dhanush_srv::srv::SpeedAngle_Response";
}

template<>
inline const char * name<dhanush_srv::srv::SpeedAngle_Response>()
{
  return "dhanush_srv/srv/SpeedAngle_Response";
}

template<>
struct has_fixed_size<dhanush_srv::srv::SpeedAngle_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dhanush_srv::srv::SpeedAngle_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dhanush_srv::srv::SpeedAngle_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dhanush_srv::srv::SpeedAngle>()
{
  return "dhanush_srv::srv::SpeedAngle";
}

template<>
inline const char * name<dhanush_srv::srv::SpeedAngle>()
{
  return "dhanush_srv/srv/SpeedAngle";
}

template<>
struct has_fixed_size<dhanush_srv::srv::SpeedAngle>
  : std::integral_constant<
    bool,
    has_fixed_size<dhanush_srv::srv::SpeedAngle_Request>::value &&
    has_fixed_size<dhanush_srv::srv::SpeedAngle_Response>::value
  >
{
};

template<>
struct has_bounded_size<dhanush_srv::srv::SpeedAngle>
  : std::integral_constant<
    bool,
    has_bounded_size<dhanush_srv::srv::SpeedAngle_Request>::value &&
    has_bounded_size<dhanush_srv::srv::SpeedAngle_Response>::value
  >
{
};

template<>
struct is_service<dhanush_srv::srv::SpeedAngle>
  : std::true_type
{
};

template<>
struct is_service_request<dhanush_srv::srv::SpeedAngle_Request>
  : std::true_type
{
};

template<>
struct is_service_response<dhanush_srv::srv::SpeedAngle_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DHANUSH_SRV__SRV__DETAIL__SPEED_ANGLE__TRAITS_HPP_
