// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_cobot_interfaces:srv/SetCoords.idl
// generated code does not contain a copyright notice

#ifndef MY_COBOT_INTERFACES__SRV__DETAIL__SET_COORDS__STRUCT_H_
#define MY_COBOT_INTERFACES__SRV__DETAIL__SET_COORDS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetCoords in the package my_cobot_interfaces.
typedef struct my_cobot_interfaces__srv__SetCoords_Request
{
  double x;
  double y;
  double z;
  double rx;
  double ry;
  double rz;
  bool cartesian;
} my_cobot_interfaces__srv__SetCoords_Request;

// Struct for a sequence of my_cobot_interfaces__srv__SetCoords_Request.
typedef struct my_cobot_interfaces__srv__SetCoords_Request__Sequence
{
  my_cobot_interfaces__srv__SetCoords_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_cobot_interfaces__srv__SetCoords_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetCoords in the package my_cobot_interfaces.
typedef struct my_cobot_interfaces__srv__SetCoords_Response
{
  bool success;
} my_cobot_interfaces__srv__SetCoords_Response;

// Struct for a sequence of my_cobot_interfaces__srv__SetCoords_Response.
typedef struct my_cobot_interfaces__srv__SetCoords_Response__Sequence
{
  my_cobot_interfaces__srv__SetCoords_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_cobot_interfaces__srv__SetCoords_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_COBOT_INTERFACES__SRV__DETAIL__SET_COORDS__STRUCT_H_
