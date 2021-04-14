// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from usv_msgs:msg/RangeBearing.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "usv_msgs/msg/detail/range_bearing__rosidl_typesupport_introspection_c.h"
#include "usv_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "usv_msgs/msg/detail/range_bearing__functions.h"
#include "usv_msgs/msg/detail/range_bearing__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RangeBearing__rosidl_typesupport_introspection_c__RangeBearing_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  usv_msgs__msg__RangeBearing__init(message_memory);
}

void RangeBearing__rosidl_typesupport_introspection_c__RangeBearing_fini_function(void * message_memory)
{
  usv_msgs__msg__RangeBearing__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RangeBearing__rosidl_typesupport_introspection_c__RangeBearing_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(usv_msgs__msg__RangeBearing, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "range",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(usv_msgs__msg__RangeBearing, range),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bearing",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(usv_msgs__msg__RangeBearing, bearing),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "elevation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(usv_msgs__msg__RangeBearing, elevation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RangeBearing__rosidl_typesupport_introspection_c__RangeBearing_message_members = {
  "usv_msgs__msg",  // message namespace
  "RangeBearing",  // message name
  4,  // number of fields
  sizeof(usv_msgs__msg__RangeBearing),
  RangeBearing__rosidl_typesupport_introspection_c__RangeBearing_message_member_array,  // message members
  RangeBearing__rosidl_typesupport_introspection_c__RangeBearing_init_function,  // function to initialize message memory (memory has to be allocated)
  RangeBearing__rosidl_typesupport_introspection_c__RangeBearing_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RangeBearing__rosidl_typesupport_introspection_c__RangeBearing_message_type_support_handle = {
  0,
  &RangeBearing__rosidl_typesupport_introspection_c__RangeBearing_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_usv_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, usv_msgs, msg, RangeBearing)() {
  RangeBearing__rosidl_typesupport_introspection_c__RangeBearing_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!RangeBearing__rosidl_typesupport_introspection_c__RangeBearing_message_type_support_handle.typesupport_identifier) {
    RangeBearing__rosidl_typesupport_introspection_c__RangeBearing_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RangeBearing__rosidl_typesupport_introspection_c__RangeBearing_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
