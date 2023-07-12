// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from my_cobot_interfaces:msg/Block.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "my_cobot_interfaces/msg/detail/block__rosidl_typesupport_introspection_c.h"
#include "my_cobot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "my_cobot_interfaces/msg/detail/block__functions.h"
#include "my_cobot_interfaces/msg/detail/block__struct.h"


// Include directives for member types
// Member `color`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void my_cobot_interfaces__msg__Block__rosidl_typesupport_introspection_c__Block_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_cobot_interfaces__msg__Block__init(message_memory);
}

void my_cobot_interfaces__msg__Block__rosidl_typesupport_introspection_c__Block_fini_function(void * message_memory)
{
  my_cobot_interfaces__msg__Block__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember my_cobot_interfaces__msg__Block__rosidl_typesupport_introspection_c__Block_message_member_array[5] = {
  {
    "color",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_cobot_interfaces__msg__Block, color),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_cobot_interfaces__msg__Block, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_cobot_interfaces__msg__Block, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_cobot_interfaces__msg__Block, z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "theta",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_cobot_interfaces__msg__Block, theta),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_cobot_interfaces__msg__Block__rosidl_typesupport_introspection_c__Block_message_members = {
  "my_cobot_interfaces__msg",  // message namespace
  "Block",  // message name
  5,  // number of fields
  sizeof(my_cobot_interfaces__msg__Block),
  my_cobot_interfaces__msg__Block__rosidl_typesupport_introspection_c__Block_message_member_array,  // message members
  my_cobot_interfaces__msg__Block__rosidl_typesupport_introspection_c__Block_init_function,  // function to initialize message memory (memory has to be allocated)
  my_cobot_interfaces__msg__Block__rosidl_typesupport_introspection_c__Block_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_cobot_interfaces__msg__Block__rosidl_typesupport_introspection_c__Block_message_type_support_handle = {
  0,
  &my_cobot_interfaces__msg__Block__rosidl_typesupport_introspection_c__Block_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_cobot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_cobot_interfaces, msg, Block)() {
  if (!my_cobot_interfaces__msg__Block__rosidl_typesupport_introspection_c__Block_message_type_support_handle.typesupport_identifier) {
    my_cobot_interfaces__msg__Block__rosidl_typesupport_introspection_c__Block_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_cobot_interfaces__msg__Block__rosidl_typesupport_introspection_c__Block_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
