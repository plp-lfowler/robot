// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from my_cobot_interfaces:srv/PlayPause.idl
// generated code does not contain a copyright notice
#include "my_cobot_interfaces/srv/detail/play_pause__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "my_cobot_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "my_cobot_interfaces/srv/detail/play_pause__struct.h"
#include "my_cobot_interfaces/srv/detail/play_pause__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _PlayPause_Request__ros_msg_type = my_cobot_interfaces__srv__PlayPause_Request;

static bool _PlayPause_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PlayPause_Request__ros_msg_type * ros_message = static_cast<const _PlayPause_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: play
  {
    cdr << (ros_message->play ? true : false);
  }

  return true;
}

static bool _PlayPause_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PlayPause_Request__ros_msg_type * ros_message = static_cast<_PlayPause_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: play
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->play = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_cobot_interfaces
size_t get_serialized_size_my_cobot_interfaces__srv__PlayPause_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PlayPause_Request__ros_msg_type * ros_message = static_cast<const _PlayPause_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name play
  {
    size_t item_size = sizeof(ros_message->play);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PlayPause_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_my_cobot_interfaces__srv__PlayPause_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_cobot_interfaces
size_t max_serialized_size_my_cobot_interfaces__srv__PlayPause_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: play
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _PlayPause_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_my_cobot_interfaces__srv__PlayPause_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PlayPause_Request = {
  "my_cobot_interfaces::srv",
  "PlayPause_Request",
  _PlayPause_Request__cdr_serialize,
  _PlayPause_Request__cdr_deserialize,
  _PlayPause_Request__get_serialized_size,
  _PlayPause_Request__max_serialized_size
};

static rosidl_message_type_support_t _PlayPause_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PlayPause_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_cobot_interfaces, srv, PlayPause_Request)() {
  return &_PlayPause_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "my_cobot_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "my_cobot_interfaces/srv/detail/play_pause__struct.h"
// already included above
// #include "my_cobot_interfaces/srv/detail/play_pause__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _PlayPause_Response__ros_msg_type = my_cobot_interfaces__srv__PlayPause_Response;

static bool _PlayPause_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PlayPause_Response__ros_msg_type * ros_message = static_cast<const _PlayPause_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _PlayPause_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PlayPause_Response__ros_msg_type * ros_message = static_cast<_PlayPause_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_cobot_interfaces
size_t get_serialized_size_my_cobot_interfaces__srv__PlayPause_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PlayPause_Response__ros_msg_type * ros_message = static_cast<const _PlayPause_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PlayPause_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_my_cobot_interfaces__srv__PlayPause_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_cobot_interfaces
size_t max_serialized_size_my_cobot_interfaces__srv__PlayPause_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _PlayPause_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_my_cobot_interfaces__srv__PlayPause_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PlayPause_Response = {
  "my_cobot_interfaces::srv",
  "PlayPause_Response",
  _PlayPause_Response__cdr_serialize,
  _PlayPause_Response__cdr_deserialize,
  _PlayPause_Response__get_serialized_size,
  _PlayPause_Response__max_serialized_size
};

static rosidl_message_type_support_t _PlayPause_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PlayPause_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_cobot_interfaces, srv, PlayPause_Response)() {
  return &_PlayPause_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "my_cobot_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "my_cobot_interfaces/srv/play_pause.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t PlayPause__callbacks = {
  "my_cobot_interfaces::srv",
  "PlayPause",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_cobot_interfaces, srv, PlayPause_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_cobot_interfaces, srv, PlayPause_Response)(),
};

static rosidl_service_type_support_t PlayPause__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &PlayPause__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_cobot_interfaces, srv, PlayPause)() {
  return &PlayPause__handle;
}

#if defined(__cplusplus)
}
#endif
