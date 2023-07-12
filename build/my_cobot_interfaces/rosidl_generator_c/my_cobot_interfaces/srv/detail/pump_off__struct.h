// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_cobot_interfaces:srv/PumpOff.idl
// generated code does not contain a copyright notice

#ifndef MY_COBOT_INTERFACES__SRV__DETAIL__PUMP_OFF__STRUCT_H_
#define MY_COBOT_INTERFACES__SRV__DETAIL__PUMP_OFF__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/PumpOff in the package my_cobot_interfaces.
typedef struct my_cobot_interfaces__srv__PumpOff_Request
{
  uint8_t structure_needs_at_least_one_member;
} my_cobot_interfaces__srv__PumpOff_Request;

// Struct for a sequence of my_cobot_interfaces__srv__PumpOff_Request.
typedef struct my_cobot_interfaces__srv__PumpOff_Request__Sequence
{
  my_cobot_interfaces__srv__PumpOff_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_cobot_interfaces__srv__PumpOff_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/PumpOff in the package my_cobot_interfaces.
typedef struct my_cobot_interfaces__srv__PumpOff_Response
{
  uint8_t structure_needs_at_least_one_member;
} my_cobot_interfaces__srv__PumpOff_Response;

// Struct for a sequence of my_cobot_interfaces__srv__PumpOff_Response.
typedef struct my_cobot_interfaces__srv__PumpOff_Response__Sequence
{
  my_cobot_interfaces__srv__PumpOff_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_cobot_interfaces__srv__PumpOff_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_COBOT_INTERFACES__SRV__DETAIL__PUMP_OFF__STRUCT_H_
