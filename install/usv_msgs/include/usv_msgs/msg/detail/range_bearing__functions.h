// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from usv_msgs:msg/RangeBearing.idl
// generated code does not contain a copyright notice

#ifndef USV_MSGS__MSG__DETAIL__RANGE_BEARING__FUNCTIONS_H_
#define USV_MSGS__MSG__DETAIL__RANGE_BEARING__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "usv_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "usv_msgs/msg/detail/range_bearing__struct.h"

/// Initialize msg/RangeBearing message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * usv_msgs__msg__RangeBearing
 * )) before or use
 * usv_msgs__msg__RangeBearing__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_usv_msgs
bool
usv_msgs__msg__RangeBearing__init(usv_msgs__msg__RangeBearing * msg);

/// Finalize msg/RangeBearing message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_usv_msgs
void
usv_msgs__msg__RangeBearing__fini(usv_msgs__msg__RangeBearing * msg);

/// Create msg/RangeBearing message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * usv_msgs__msg__RangeBearing__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_usv_msgs
usv_msgs__msg__RangeBearing *
usv_msgs__msg__RangeBearing__create();

/// Destroy msg/RangeBearing message.
/**
 * It calls
 * usv_msgs__msg__RangeBearing__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_usv_msgs
void
usv_msgs__msg__RangeBearing__destroy(usv_msgs__msg__RangeBearing * msg);


/// Initialize array of msg/RangeBearing messages.
/**
 * It allocates the memory for the number of elements and calls
 * usv_msgs__msg__RangeBearing__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_usv_msgs
bool
usv_msgs__msg__RangeBearing__Sequence__init(usv_msgs__msg__RangeBearing__Sequence * array, size_t size);

/// Finalize array of msg/RangeBearing messages.
/**
 * It calls
 * usv_msgs__msg__RangeBearing__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_usv_msgs
void
usv_msgs__msg__RangeBearing__Sequence__fini(usv_msgs__msg__RangeBearing__Sequence * array);

/// Create array of msg/RangeBearing messages.
/**
 * It allocates the memory for the array and calls
 * usv_msgs__msg__RangeBearing__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_usv_msgs
usv_msgs__msg__RangeBearing__Sequence *
usv_msgs__msg__RangeBearing__Sequence__create(size_t size);

/// Destroy array of msg/RangeBearing messages.
/**
 * It calls
 * usv_msgs__msg__RangeBearing__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_usv_msgs
void
usv_msgs__msg__RangeBearing__Sequence__destroy(usv_msgs__msg__RangeBearing__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // USV_MSGS__MSG__DETAIL__RANGE_BEARING__FUNCTIONS_H_
