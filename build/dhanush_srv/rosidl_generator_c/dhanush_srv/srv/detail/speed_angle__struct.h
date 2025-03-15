// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dhanush_srv:srv/SpeedAngle.idl
// generated code does not contain a copyright notice

#ifndef DHANUSH_SRV__SRV__DETAIL__SPEED_ANGLE__STRUCT_H_
#define DHANUSH_SRV__SRV__DETAIL__SPEED_ANGLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SpeedAngle in the package dhanush_srv.
typedef struct dhanush_srv__srv__SpeedAngle_Request
{
  float speed;
  float angle;
} dhanush_srv__srv__SpeedAngle_Request;

// Struct for a sequence of dhanush_srv__srv__SpeedAngle_Request.
typedef struct dhanush_srv__srv__SpeedAngle_Request__Sequence
{
  dhanush_srv__srv__SpeedAngle_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dhanush_srv__srv__SpeedAngle_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SpeedAngle in the package dhanush_srv.
typedef struct dhanush_srv__srv__SpeedAngle_Response
{
  bool success;
} dhanush_srv__srv__SpeedAngle_Response;

// Struct for a sequence of dhanush_srv__srv__SpeedAngle_Response.
typedef struct dhanush_srv__srv__SpeedAngle_Response__Sequence
{
  dhanush_srv__srv__SpeedAngle_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dhanush_srv__srv__SpeedAngle_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DHANUSH_SRV__SRV__DETAIL__SPEED_ANGLE__STRUCT_H_
