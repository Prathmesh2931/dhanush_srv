// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from dhanush_srv:srv/SpeedAngle.idl
// generated code does not contain a copyright notice

#ifndef DHANUSH_SRV__SRV__DETAIL__SPEED_ANGLE__FUNCTIONS_H_
#define DHANUSH_SRV__SRV__DETAIL__SPEED_ANGLE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "dhanush_srv/msg/rosidl_generator_c__visibility_control.h"

#include "dhanush_srv/srv/detail/speed_angle__struct.h"

/// Initialize srv/SpeedAngle message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * dhanush_srv__srv__SpeedAngle_Request
 * )) before or use
 * dhanush_srv__srv__SpeedAngle_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_dhanush_srv
bool
dhanush_srv__srv__SpeedAngle_Request__init(dhanush_srv__srv__SpeedAngle_Request * msg);

/// Finalize srv/SpeedAngle message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dhanush_srv
void
dhanush_srv__srv__SpeedAngle_Request__fini(dhanush_srv__srv__SpeedAngle_Request * msg);

/// Create srv/SpeedAngle message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * dhanush_srv__srv__SpeedAngle_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dhanush_srv
dhanush_srv__srv__SpeedAngle_Request *
dhanush_srv__srv__SpeedAngle_Request__create();

/// Destroy srv/SpeedAngle message.
/**
 * It calls
 * dhanush_srv__srv__SpeedAngle_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dhanush_srv
void
dhanush_srv__srv__SpeedAngle_Request__destroy(dhanush_srv__srv__SpeedAngle_Request * msg);

/// Check for srv/SpeedAngle message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dhanush_srv
bool
dhanush_srv__srv__SpeedAngle_Request__are_equal(const dhanush_srv__srv__SpeedAngle_Request * lhs, const dhanush_srv__srv__SpeedAngle_Request * rhs);

/// Copy a srv/SpeedAngle message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_dhanush_srv
bool
dhanush_srv__srv__SpeedAngle_Request__copy(
  const dhanush_srv__srv__SpeedAngle_Request * input,
  dhanush_srv__srv__SpeedAngle_Request * output);

/// Initialize array of srv/SpeedAngle messages.
/**
 * It allocates the memory for the number of elements and calls
 * dhanush_srv__srv__SpeedAngle_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_dhanush_srv
bool
dhanush_srv__srv__SpeedAngle_Request__Sequence__init(dhanush_srv__srv__SpeedAngle_Request__Sequence * array, size_t size);

/// Finalize array of srv/SpeedAngle messages.
/**
 * It calls
 * dhanush_srv__srv__SpeedAngle_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dhanush_srv
void
dhanush_srv__srv__SpeedAngle_Request__Sequence__fini(dhanush_srv__srv__SpeedAngle_Request__Sequence * array);

/// Create array of srv/SpeedAngle messages.
/**
 * It allocates the memory for the array and calls
 * dhanush_srv__srv__SpeedAngle_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dhanush_srv
dhanush_srv__srv__SpeedAngle_Request__Sequence *
dhanush_srv__srv__SpeedAngle_Request__Sequence__create(size_t size);

/// Destroy array of srv/SpeedAngle messages.
/**
 * It calls
 * dhanush_srv__srv__SpeedAngle_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dhanush_srv
void
dhanush_srv__srv__SpeedAngle_Request__Sequence__destroy(dhanush_srv__srv__SpeedAngle_Request__Sequence * array);

/// Check for srv/SpeedAngle message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dhanush_srv
bool
dhanush_srv__srv__SpeedAngle_Request__Sequence__are_equal(const dhanush_srv__srv__SpeedAngle_Request__Sequence * lhs, const dhanush_srv__srv__SpeedAngle_Request__Sequence * rhs);

/// Copy an array of srv/SpeedAngle messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_dhanush_srv
bool
dhanush_srv__srv__SpeedAngle_Request__Sequence__copy(
  const dhanush_srv__srv__SpeedAngle_Request__Sequence * input,
  dhanush_srv__srv__SpeedAngle_Request__Sequence * output);

/// Initialize srv/SpeedAngle message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * dhanush_srv__srv__SpeedAngle_Response
 * )) before or use
 * dhanush_srv__srv__SpeedAngle_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_dhanush_srv
bool
dhanush_srv__srv__SpeedAngle_Response__init(dhanush_srv__srv__SpeedAngle_Response * msg);

/// Finalize srv/SpeedAngle message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dhanush_srv
void
dhanush_srv__srv__SpeedAngle_Response__fini(dhanush_srv__srv__SpeedAngle_Response * msg);

/// Create srv/SpeedAngle message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * dhanush_srv__srv__SpeedAngle_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dhanush_srv
dhanush_srv__srv__SpeedAngle_Response *
dhanush_srv__srv__SpeedAngle_Response__create();

/// Destroy srv/SpeedAngle message.
/**
 * It calls
 * dhanush_srv__srv__SpeedAngle_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dhanush_srv
void
dhanush_srv__srv__SpeedAngle_Response__destroy(dhanush_srv__srv__SpeedAngle_Response * msg);

/// Check for srv/SpeedAngle message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dhanush_srv
bool
dhanush_srv__srv__SpeedAngle_Response__are_equal(const dhanush_srv__srv__SpeedAngle_Response * lhs, const dhanush_srv__srv__SpeedAngle_Response * rhs);

/// Copy a srv/SpeedAngle message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_dhanush_srv
bool
dhanush_srv__srv__SpeedAngle_Response__copy(
  const dhanush_srv__srv__SpeedAngle_Response * input,
  dhanush_srv__srv__SpeedAngle_Response * output);

/// Initialize array of srv/SpeedAngle messages.
/**
 * It allocates the memory for the number of elements and calls
 * dhanush_srv__srv__SpeedAngle_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_dhanush_srv
bool
dhanush_srv__srv__SpeedAngle_Response__Sequence__init(dhanush_srv__srv__SpeedAngle_Response__Sequence * array, size_t size);

/// Finalize array of srv/SpeedAngle messages.
/**
 * It calls
 * dhanush_srv__srv__SpeedAngle_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dhanush_srv
void
dhanush_srv__srv__SpeedAngle_Response__Sequence__fini(dhanush_srv__srv__SpeedAngle_Response__Sequence * array);

/// Create array of srv/SpeedAngle messages.
/**
 * It allocates the memory for the array and calls
 * dhanush_srv__srv__SpeedAngle_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dhanush_srv
dhanush_srv__srv__SpeedAngle_Response__Sequence *
dhanush_srv__srv__SpeedAngle_Response__Sequence__create(size_t size);

/// Destroy array of srv/SpeedAngle messages.
/**
 * It calls
 * dhanush_srv__srv__SpeedAngle_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dhanush_srv
void
dhanush_srv__srv__SpeedAngle_Response__Sequence__destroy(dhanush_srv__srv__SpeedAngle_Response__Sequence * array);

/// Check for srv/SpeedAngle message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dhanush_srv
bool
dhanush_srv__srv__SpeedAngle_Response__Sequence__are_equal(const dhanush_srv__srv__SpeedAngle_Response__Sequence * lhs, const dhanush_srv__srv__SpeedAngle_Response__Sequence * rhs);

/// Copy an array of srv/SpeedAngle messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_dhanush_srv
bool
dhanush_srv__srv__SpeedAngle_Response__Sequence__copy(
  const dhanush_srv__srv__SpeedAngle_Response__Sequence * input,
  dhanush_srv__srv__SpeedAngle_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DHANUSH_SRV__SRV__DETAIL__SPEED_ANGLE__FUNCTIONS_H_
