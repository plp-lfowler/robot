// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_cobot_interfaces:srv/SetJointAngles.idl
// generated code does not contain a copyright notice

#ifndef MY_COBOT_INTERFACES__SRV__DETAIL__SET_JOINT_ANGLES__STRUCT_H_
#define MY_COBOT_INTERFACES__SRV__DETAIL__SET_JOINT_ANGLES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetJointAngles in the package my_cobot_interfaces.
typedef struct my_cobot_interfaces__srv__SetJointAngles_Request
{
  double j1;
  double j2;
  double j3;
  double j4;
  double j5;
  double j6;
} my_cobot_interfaces__srv__SetJointAngles_Request;

// Struct for a sequence of my_cobot_interfaces__srv__SetJointAngles_Request.
typedef struct my_cobot_interfaces__srv__SetJointAngles_Request__Sequence
{
  my_cobot_interfaces__srv__SetJointAngles_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_cobot_interfaces__srv__SetJointAngles_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetJointAngles in the package my_cobot_interfaces.
typedef struct my_cobot_interfaces__srv__SetJointAngles_Response
{
  bool success;
} my_cobot_interfaces__srv__SetJointAngles_Response;

// Struct for a sequence of my_cobot_interfaces__srv__SetJointAngles_Response.
typedef struct my_cobot_interfaces__srv__SetJointAngles_Response__Sequence
{
  my_cobot_interfaces__srv__SetJointAngles_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_cobot_interfaces__srv__SetJointAngles_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_COBOT_INTERFACES__SRV__DETAIL__SET_JOINT_ANGLES__STRUCT_H_
