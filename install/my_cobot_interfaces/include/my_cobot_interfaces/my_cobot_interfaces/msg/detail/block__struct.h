// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_cobot_interfaces:msg/Block.idl
// generated code does not contain a copyright notice

#ifndef MY_COBOT_INTERFACES__MSG__DETAIL__BLOCK__STRUCT_H_
#define MY_COBOT_INTERFACES__MSG__DETAIL__BLOCK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'color'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Block in the package my_cobot_interfaces.
typedef struct my_cobot_interfaces__msg__Block
{
  rosidl_runtime_c__String color;
  double x;
  double y;
  double z;
  double theta;
} my_cobot_interfaces__msg__Block;

// Struct for a sequence of my_cobot_interfaces__msg__Block.
typedef struct my_cobot_interfaces__msg__Block__Sequence
{
  my_cobot_interfaces__msg__Block * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_cobot_interfaces__msg__Block__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_COBOT_INTERFACES__MSG__DETAIL__BLOCK__STRUCT_H_
