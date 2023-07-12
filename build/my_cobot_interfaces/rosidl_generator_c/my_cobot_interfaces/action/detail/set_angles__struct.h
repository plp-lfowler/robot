// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_cobot_interfaces:action/SetAngles.idl
// generated code does not contain a copyright notice

#ifndef MY_COBOT_INTERFACES__ACTION__DETAIL__SET_ANGLES__STRUCT_H_
#define MY_COBOT_INTERFACES__ACTION__DETAIL__SET_ANGLES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/SetAngles in the package my_cobot_interfaces.
typedef struct my_cobot_interfaces__action__SetAngles_Goal
{
  double j1;
  double j2;
  double j3;
  double j4;
  double j5;
  double j6;
} my_cobot_interfaces__action__SetAngles_Goal;

// Struct for a sequence of my_cobot_interfaces__action__SetAngles_Goal.
typedef struct my_cobot_interfaces__action__SetAngles_Goal__Sequence
{
  my_cobot_interfaces__action__SetAngles_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_cobot_interfaces__action__SetAngles_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/SetAngles in the package my_cobot_interfaces.
typedef struct my_cobot_interfaces__action__SetAngles_Result
{
  bool timeout;
} my_cobot_interfaces__action__SetAngles_Result;

// Struct for a sequence of my_cobot_interfaces__action__SetAngles_Result.
typedef struct my_cobot_interfaces__action__SetAngles_Result__Sequence
{
  my_cobot_interfaces__action__SetAngles_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_cobot_interfaces__action__SetAngles_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/SetAngles in the package my_cobot_interfaces.
typedef struct my_cobot_interfaces__action__SetAngles_Feedback
{
  uint8_t structure_needs_at_least_one_member;
} my_cobot_interfaces__action__SetAngles_Feedback;

// Struct for a sequence of my_cobot_interfaces__action__SetAngles_Feedback.
typedef struct my_cobot_interfaces__action__SetAngles_Feedback__Sequence
{
  my_cobot_interfaces__action__SetAngles_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_cobot_interfaces__action__SetAngles_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "my_cobot_interfaces/action/detail/set_angles__struct.h"

/// Struct defined in action/SetAngles in the package my_cobot_interfaces.
typedef struct my_cobot_interfaces__action__SetAngles_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  my_cobot_interfaces__action__SetAngles_Goal goal;
} my_cobot_interfaces__action__SetAngles_SendGoal_Request;

// Struct for a sequence of my_cobot_interfaces__action__SetAngles_SendGoal_Request.
typedef struct my_cobot_interfaces__action__SetAngles_SendGoal_Request__Sequence
{
  my_cobot_interfaces__action__SetAngles_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_cobot_interfaces__action__SetAngles_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/SetAngles in the package my_cobot_interfaces.
typedef struct my_cobot_interfaces__action__SetAngles_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} my_cobot_interfaces__action__SetAngles_SendGoal_Response;

// Struct for a sequence of my_cobot_interfaces__action__SetAngles_SendGoal_Response.
typedef struct my_cobot_interfaces__action__SetAngles_SendGoal_Response__Sequence
{
  my_cobot_interfaces__action__SetAngles_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_cobot_interfaces__action__SetAngles_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/SetAngles in the package my_cobot_interfaces.
typedef struct my_cobot_interfaces__action__SetAngles_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} my_cobot_interfaces__action__SetAngles_GetResult_Request;

// Struct for a sequence of my_cobot_interfaces__action__SetAngles_GetResult_Request.
typedef struct my_cobot_interfaces__action__SetAngles_GetResult_Request__Sequence
{
  my_cobot_interfaces__action__SetAngles_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_cobot_interfaces__action__SetAngles_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "my_cobot_interfaces/action/detail/set_angles__struct.h"

/// Struct defined in action/SetAngles in the package my_cobot_interfaces.
typedef struct my_cobot_interfaces__action__SetAngles_GetResult_Response
{
  int8_t status;
  my_cobot_interfaces__action__SetAngles_Result result;
} my_cobot_interfaces__action__SetAngles_GetResult_Response;

// Struct for a sequence of my_cobot_interfaces__action__SetAngles_GetResult_Response.
typedef struct my_cobot_interfaces__action__SetAngles_GetResult_Response__Sequence
{
  my_cobot_interfaces__action__SetAngles_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_cobot_interfaces__action__SetAngles_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "my_cobot_interfaces/action/detail/set_angles__struct.h"

/// Struct defined in action/SetAngles in the package my_cobot_interfaces.
typedef struct my_cobot_interfaces__action__SetAngles_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  my_cobot_interfaces__action__SetAngles_Feedback feedback;
} my_cobot_interfaces__action__SetAngles_FeedbackMessage;

// Struct for a sequence of my_cobot_interfaces__action__SetAngles_FeedbackMessage.
typedef struct my_cobot_interfaces__action__SetAngles_FeedbackMessage__Sequence
{
  my_cobot_interfaces__action__SetAngles_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_cobot_interfaces__action__SetAngles_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_COBOT_INTERFACES__ACTION__DETAIL__SET_ANGLES__STRUCT_H_
