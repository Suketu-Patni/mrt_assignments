// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from drover4_info_interface:msg/DRover4Info.idl
// generated code does not contain a copyright notice

#ifndef DROVER4_INFO_INTERFACE__MSG__DETAIL__D_ROVER4_INFO__FUNCTIONS_H_
#define DROVER4_INFO_INTERFACE__MSG__DETAIL__D_ROVER4_INFO__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "drover4_info_interface/msg/rosidl_generator_c__visibility_control.h"

#include "drover4_info_interface/msg/detail/d_rover4_info__struct.h"

/// Initialize msg/DRover4Info message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * drover4_info_interface__msg__DRover4Info
 * )) before or use
 * drover4_info_interface__msg__DRover4Info__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_drover4_info_interface
bool
drover4_info_interface__msg__DRover4Info__init(drover4_info_interface__msg__DRover4Info * msg);

/// Finalize msg/DRover4Info message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_drover4_info_interface
void
drover4_info_interface__msg__DRover4Info__fini(drover4_info_interface__msg__DRover4Info * msg);

/// Create msg/DRover4Info message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * drover4_info_interface__msg__DRover4Info__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_drover4_info_interface
drover4_info_interface__msg__DRover4Info *
drover4_info_interface__msg__DRover4Info__create();

/// Destroy msg/DRover4Info message.
/**
 * It calls
 * drover4_info_interface__msg__DRover4Info__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_drover4_info_interface
void
drover4_info_interface__msg__DRover4Info__destroy(drover4_info_interface__msg__DRover4Info * msg);

/// Check for msg/DRover4Info message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_drover4_info_interface
bool
drover4_info_interface__msg__DRover4Info__are_equal(const drover4_info_interface__msg__DRover4Info * lhs, const drover4_info_interface__msg__DRover4Info * rhs);

/// Copy a msg/DRover4Info message.
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
ROSIDL_GENERATOR_C_PUBLIC_drover4_info_interface
bool
drover4_info_interface__msg__DRover4Info__copy(
  const drover4_info_interface__msg__DRover4Info * input,
  drover4_info_interface__msg__DRover4Info * output);

/// Initialize array of msg/DRover4Info messages.
/**
 * It allocates the memory for the number of elements and calls
 * drover4_info_interface__msg__DRover4Info__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_drover4_info_interface
bool
drover4_info_interface__msg__DRover4Info__Sequence__init(drover4_info_interface__msg__DRover4Info__Sequence * array, size_t size);

/// Finalize array of msg/DRover4Info messages.
/**
 * It calls
 * drover4_info_interface__msg__DRover4Info__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_drover4_info_interface
void
drover4_info_interface__msg__DRover4Info__Sequence__fini(drover4_info_interface__msg__DRover4Info__Sequence * array);

/// Create array of msg/DRover4Info messages.
/**
 * It allocates the memory for the array and calls
 * drover4_info_interface__msg__DRover4Info__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_drover4_info_interface
drover4_info_interface__msg__DRover4Info__Sequence *
drover4_info_interface__msg__DRover4Info__Sequence__create(size_t size);

/// Destroy array of msg/DRover4Info messages.
/**
 * It calls
 * drover4_info_interface__msg__DRover4Info__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_drover4_info_interface
void
drover4_info_interface__msg__DRover4Info__Sequence__destroy(drover4_info_interface__msg__DRover4Info__Sequence * array);

/// Check for msg/DRover4Info message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_drover4_info_interface
bool
drover4_info_interface__msg__DRover4Info__Sequence__are_equal(const drover4_info_interface__msg__DRover4Info__Sequence * lhs, const drover4_info_interface__msg__DRover4Info__Sequence * rhs);

/// Copy an array of msg/DRover4Info messages.
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
ROSIDL_GENERATOR_C_PUBLIC_drover4_info_interface
bool
drover4_info_interface__msg__DRover4Info__Sequence__copy(
  const drover4_info_interface__msg__DRover4Info__Sequence * input,
  drover4_info_interface__msg__DRover4Info__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DROVER4_INFO_INTERFACE__MSG__DETAIL__D_ROVER4_INFO__FUNCTIONS_H_
