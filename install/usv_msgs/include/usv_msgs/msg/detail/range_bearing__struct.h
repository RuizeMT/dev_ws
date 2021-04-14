// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from usv_msgs:msg/RangeBearing.idl
// generated code does not contain a copyright notice

#ifndef USV_MSGS__MSG__DETAIL__RANGE_BEARING__STRUCT_H_
#define USV_MSGS__MSG__DETAIL__RANGE_BEARING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

// Struct defined in msg/RangeBearing in the package usv_msgs.
typedef struct usv_msgs__msg__RangeBearing
{
  std_msgs__msg__Header header;
  float range;
  float bearing;
  float elevation;
} usv_msgs__msg__RangeBearing;

// Struct for a sequence of usv_msgs__msg__RangeBearing.
typedef struct usv_msgs__msg__RangeBearing__Sequence
{
  usv_msgs__msg__RangeBearing * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} usv_msgs__msg__RangeBearing__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // USV_MSGS__MSG__DETAIL__RANGE_BEARING__STRUCT_H_
