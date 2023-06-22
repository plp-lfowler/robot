// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from my_cobot_interfaces:srv/SetRadians.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "my_cobot_interfaces/srv/detail/set_radians__rosidl_typesupport_introspection_c.h"
#include "my_cobot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "my_cobot_interfaces/srv/detail/set_radians__functions.h"
#include "my_cobot_interfaces/srv/detail/set_radians__struct.h"


// Include directives for member types
// Member `joint_names`
#include "rosidl_runtime_c/string_functions.h"
// Member `angles`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void my_cobot_interfaces__srv__SetRadians_Request__rosidl_typesupport_introspection_c__SetRadians_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_cobot_interfaces__srv__SetRadians_Request__init(message_memory);
}

void my_cobot_interfaces__srv__SetRadians_Request__rosidl_typesupport_introspection_c__SetRadians_Request_fini_function(void * message_memory)
{
  my_cobot_interfaces__srv__SetRadians_Request__fini(message_memory);
}

size_t my_cobot_interfaces__srv__SetRadians_Request__rosidl_typesupport_introspection_c__size_function__SetRadians_Request__joint_names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * my_cobot_interfaces__srv__SetRadians_Request__rosidl_typesupport_introspection_c__get_const_function__SetRadians_Request__joint_names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * my_cobot_interfaces__srv__SetRadians_Request__rosidl_typesupport_introspection_c__get_function__SetRadians_Request__joint_names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void my_cobot_interfaces__srv__SetRadians_Request__rosidl_typesupport_introspection_c__fetch_function__SetRadians_Request__joint_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    my_cobot_interfaces__srv__SetRadians_Request__rosidl_typesupport_introspection_c__get_const_function__SetRadians_Request__joint_names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void my_cobot_interfaces__srv__SetRadians_Request__rosidl_typesupport_introspection_c__assign_function__SetRadians_Request__joint_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    my_cobot_interfaces__srv__SetRadians_Request__rosidl_typesupport_introspection_c__get_function__SetRadians_Request__joint_names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool my_cobot_interfaces__srv__SetRadians_Request__rosidl_typesupport_introspection_c__resize_function__SetRadians_Request__joint_names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t my_cobot_interfaces__srv__SetRadians_Request__rosidl_typesupport_introspection_c__size_function__SetRadians_Request__angles(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * my_cobot_interfaces__srv__SetRadians_Request__rosidl_typesupport_introspection_c__get_const_function__SetRadians_Request__angles(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * my_cobot_interfaces__srv__SetRadians_Request__rosidl_typesupport_introspection_c__get_function__SetRadians_Request__angles(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void my_cobot_interfaces__srv__SetRadians_Request__rosidl_typesupport_introspection_c__fetch_function__SetRadians_Request__angles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    my_cobot_interfaces__srv__SetRadians_Request__rosidl_typesupport_introspection_c__get_const_function__SetRadians_Request__angles(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void my_cobot_interfaces__srv__SetRadians_Request__rosidl_typesupport_introspection_c__assign_function__SetRadians_Request__angles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    my_cobot_interfaces__srv__SetRadians_Request__rosidl_typesupport_introspection_c__get_function__SetRadians_Request__angles(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool my_cobot_interfaces__srv__SetRadians_Request__rosidl_typesupport_introspection_c__resize_function__SetRadians_Request__angles(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember my_cobot_interfaces__srv__SetRadians_Request__rosidl_typesupport_introspection_c__SetRadians_Request_message_member_array[2] = {
  {
    "joint_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_cobot_interfaces__srv__SetRadians_Request, joint_names),  // bytes offset in struct
    NULL,  // default value
    my_cobot_interfaces__srv__SetRadians_Request__rosidl_typesupport_introspection_c__size_function__SetRadians_Request__joint_names,  // size() function pointer
    my_cobot_interfaces__srv__SetRadians_Request__rosidl_typesupport_introspection_c__get_const_function__SetRadians_Request__joint_names,  // get_const(index) function pointer
    my_cobot_interfaces__srv__SetRadians_Request__rosidl_typesupport_introspection_c__get_function__SetRadians_Request__joint_names,  // get(index) function pointer
    my_cobot_interfaces__srv__SetRadians_Request__rosidl_typesupport_introspection_c__fetch_function__SetRadians_Request__joint_names,  // fetch(index, &value) function pointer
    my_cobot_interfaces__srv__SetRadians_Request__rosidl_typesupport_introspection_c__assign_function__SetRadians_Request__joint_names,  // assign(index, value) function pointer
    my_cobot_interfaces__srv__SetRadians_Request__rosidl_typesupport_introspection_c__resize_function__SetRadians_Request__joint_names  // resize(index) function pointer
  },
  {
    "angles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_cobot_interfaces__srv__SetRadians_Request, angles),  // bytes offset in struct
    NULL,  // default value
    my_cobot_interfaces__srv__SetRadians_Request__rosidl_typesupport_introspection_c__size_function__SetRadians_Request__angles,  // size() function pointer
    my_cobot_interfaces__srv__SetRadians_Request__rosidl_typesupport_introspection_c__get_const_function__SetRadians_Request__angles,  // get_const(index) function pointer
    my_cobot_interfaces__srv__SetRadians_Request__rosidl_typesupport_introspection_c__get_function__SetRadians_Request__angles,  // get(index) function pointer
    my_cobot_interfaces__srv__SetRadians_Request__rosidl_typesupport_introspection_c__fetch_function__SetRadians_Request__angles,  // fetch(index, &value) function pointer
    my_cobot_interfaces__srv__SetRadians_Request__rosidl_typesupport_introspection_c__assign_function__SetRadians_Request__angles,  // assign(index, value) function pointer
    my_cobot_interfaces__srv__SetRadians_Request__rosidl_typesupport_introspection_c__resize_function__SetRadians_Request__angles  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_cobot_interfaces__srv__SetRadians_Request__rosidl_typesupport_introspection_c__SetRadians_Request_message_members = {
  "my_cobot_interfaces__srv",  // message namespace
  "SetRadians_Request",  // message name
  2,  // number of fields
  sizeof(my_cobot_interfaces__srv__SetRadians_Request),
  my_cobot_interfaces__srv__SetRadians_Request__rosidl_typesupport_introspection_c__SetRadians_Request_message_member_array,  // message members
  my_cobot_interfaces__srv__SetRadians_Request__rosidl_typesupport_introspection_c__SetRadians_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  my_cobot_interfaces__srv__SetRadians_Request__rosidl_typesupport_introspection_c__SetRadians_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_cobot_interfaces__srv__SetRadians_Request__rosidl_typesupport_introspection_c__SetRadians_Request_message_type_support_handle = {
  0,
  &my_cobot_interfaces__srv__SetRadians_Request__rosidl_typesupport_introspection_c__SetRadians_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_cobot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_cobot_interfaces, srv, SetRadians_Request)() {
  if (!my_cobot_interfaces__srv__SetRadians_Request__rosidl_typesupport_introspection_c__SetRadians_Request_message_type_support_handle.typesupport_identifier) {
    my_cobot_interfaces__srv__SetRadians_Request__rosidl_typesupport_introspection_c__SetRadians_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_cobot_interfaces__srv__SetRadians_Request__rosidl_typesupport_introspection_c__SetRadians_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "my_cobot_interfaces/srv/detail/set_radians__rosidl_typesupport_introspection_c.h"
// already included above
// #include "my_cobot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "my_cobot_interfaces/srv/detail/set_radians__functions.h"
// already included above
// #include "my_cobot_interfaces/srv/detail/set_radians__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void my_cobot_interfaces__srv__SetRadians_Response__rosidl_typesupport_introspection_c__SetRadians_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_cobot_interfaces__srv__SetRadians_Response__init(message_memory);
}

void my_cobot_interfaces__srv__SetRadians_Response__rosidl_typesupport_introspection_c__SetRadians_Response_fini_function(void * message_memory)
{
  my_cobot_interfaces__srv__SetRadians_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember my_cobot_interfaces__srv__SetRadians_Response__rosidl_typesupport_introspection_c__SetRadians_Response_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_cobot_interfaces__srv__SetRadians_Response, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_cobot_interfaces__srv__SetRadians_Response__rosidl_typesupport_introspection_c__SetRadians_Response_message_members = {
  "my_cobot_interfaces__srv",  // message namespace
  "SetRadians_Response",  // message name
  1,  // number of fields
  sizeof(my_cobot_interfaces__srv__SetRadians_Response),
  my_cobot_interfaces__srv__SetRadians_Response__rosidl_typesupport_introspection_c__SetRadians_Response_message_member_array,  // message members
  my_cobot_interfaces__srv__SetRadians_Response__rosidl_typesupport_introspection_c__SetRadians_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  my_cobot_interfaces__srv__SetRadians_Response__rosidl_typesupport_introspection_c__SetRadians_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_cobot_interfaces__srv__SetRadians_Response__rosidl_typesupport_introspection_c__SetRadians_Response_message_type_support_handle = {
  0,
  &my_cobot_interfaces__srv__SetRadians_Response__rosidl_typesupport_introspection_c__SetRadians_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_cobot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_cobot_interfaces, srv, SetRadians_Response)() {
  if (!my_cobot_interfaces__srv__SetRadians_Response__rosidl_typesupport_introspection_c__SetRadians_Response_message_type_support_handle.typesupport_identifier) {
    my_cobot_interfaces__srv__SetRadians_Response__rosidl_typesupport_introspection_c__SetRadians_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_cobot_interfaces__srv__SetRadians_Response__rosidl_typesupport_introspection_c__SetRadians_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "my_cobot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "my_cobot_interfaces/srv/detail/set_radians__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers my_cobot_interfaces__srv__detail__set_radians__rosidl_typesupport_introspection_c__SetRadians_service_members = {
  "my_cobot_interfaces__srv",  // service namespace
  "SetRadians",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // my_cobot_interfaces__srv__detail__set_radians__rosidl_typesupport_introspection_c__SetRadians_Request_message_type_support_handle,
  NULL  // response message
  // my_cobot_interfaces__srv__detail__set_radians__rosidl_typesupport_introspection_c__SetRadians_Response_message_type_support_handle
};

static rosidl_service_type_support_t my_cobot_interfaces__srv__detail__set_radians__rosidl_typesupport_introspection_c__SetRadians_service_type_support_handle = {
  0,
  &my_cobot_interfaces__srv__detail__set_radians__rosidl_typesupport_introspection_c__SetRadians_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_cobot_interfaces, srv, SetRadians_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_cobot_interfaces, srv, SetRadians_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_cobot_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_cobot_interfaces, srv, SetRadians)() {
  if (!my_cobot_interfaces__srv__detail__set_radians__rosidl_typesupport_introspection_c__SetRadians_service_type_support_handle.typesupport_identifier) {
    my_cobot_interfaces__srv__detail__set_radians__rosidl_typesupport_introspection_c__SetRadians_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)my_cobot_interfaces__srv__detail__set_radians__rosidl_typesupport_introspection_c__SetRadians_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_cobot_interfaces, srv, SetRadians_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_cobot_interfaces, srv, SetRadians_Response)()->data;
  }

  return &my_cobot_interfaces__srv__detail__set_radians__rosidl_typesupport_introspection_c__SetRadians_service_type_support_handle;
}
