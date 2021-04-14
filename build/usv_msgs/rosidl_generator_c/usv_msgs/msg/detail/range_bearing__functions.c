// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from usv_msgs:msg/RangeBearing.idl
// generated code does not contain a copyright notice
#include "usv_msgs/msg/detail/range_bearing__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
usv_msgs__msg__RangeBearing__init(usv_msgs__msg__RangeBearing * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    usv_msgs__msg__RangeBearing__fini(msg);
    return false;
  }
  // range
  // bearing
  // elevation
  return true;
}

void
usv_msgs__msg__RangeBearing__fini(usv_msgs__msg__RangeBearing * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // range
  // bearing
  // elevation
}

usv_msgs__msg__RangeBearing *
usv_msgs__msg__RangeBearing__create()
{
  usv_msgs__msg__RangeBearing * msg = (usv_msgs__msg__RangeBearing *)malloc(sizeof(usv_msgs__msg__RangeBearing));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(usv_msgs__msg__RangeBearing));
  bool success = usv_msgs__msg__RangeBearing__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
usv_msgs__msg__RangeBearing__destroy(usv_msgs__msg__RangeBearing * msg)
{
  if (msg) {
    usv_msgs__msg__RangeBearing__fini(msg);
  }
  free(msg);
}


bool
usv_msgs__msg__RangeBearing__Sequence__init(usv_msgs__msg__RangeBearing__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  usv_msgs__msg__RangeBearing * data = NULL;
  if (size) {
    data = (usv_msgs__msg__RangeBearing *)calloc(size, sizeof(usv_msgs__msg__RangeBearing));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = usv_msgs__msg__RangeBearing__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        usv_msgs__msg__RangeBearing__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
usv_msgs__msg__RangeBearing__Sequence__fini(usv_msgs__msg__RangeBearing__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      usv_msgs__msg__RangeBearing__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

usv_msgs__msg__RangeBearing__Sequence *
usv_msgs__msg__RangeBearing__Sequence__create(size_t size)
{
  usv_msgs__msg__RangeBearing__Sequence * array = (usv_msgs__msg__RangeBearing__Sequence *)malloc(sizeof(usv_msgs__msg__RangeBearing__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = usv_msgs__msg__RangeBearing__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
usv_msgs__msg__RangeBearing__Sequence__destroy(usv_msgs__msg__RangeBearing__Sequence * array)
{
  if (array) {
    usv_msgs__msg__RangeBearing__Sequence__fini(array);
  }
  free(array);
}
