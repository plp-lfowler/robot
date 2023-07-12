// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from my_cobot_interfaces:srv/GetBlocks.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "my_cobot_interfaces/srv/detail/get_blocks__rosidl_typesupport_introspection_c.h"
#include "my_cobot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "my_cobot_interfaces/srv/detail/get_blocks__functions.h"
#include "my_cobot_interfaces/srv/detail/get_blocks__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void my_cobot_interfaces__srv__GetBlocks_Request__rosidl_typesupport_introspection_c__GetBlocks_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_cobot_interfaces__srv__GetBlocks_Request__init(message_memory);
}

void my_cobot_interfaces__srv__GetBlocks_Request__rosidl_typesupport_introspection_c__GetBlocks_Request_fini_function(void * message_memory)
{
  my_cobot_interfaces__srv__GetBlocks_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember my_cobot_interfaces__srv__GetBlocks_Request__rosidl_typesupport_introspection_c__GetBlocks_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_cobot_interfaces__srv__GetBlocks_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_cobot_interfaces__srv__GetBlocks_Request__rosidl_typesupport_introspection_c__GetBlocks_Request_message_members = {
  "my_cobot_interfaces__srv",  // message namespace
  "GetBlocks_Request",  // message name
  1,  // number of fields
  sizeof(my_cobot_interfaces__srv__GetBlocks_Request),
  my_cobot_interfaces__srv__GetBlocks_Request__rosidl_typesupport_introspection_c__GetBlocks_Request_message_member_array,  // message members
  my_cobot_interfaces__srv__GetBlocks_Request__rosidl_typesupport_introspection_c__GetBlocks_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  my_cobot_interfaces__srv__GetBlocks_Request__rosidl_typesupport_introspection_c__GetBlocks_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_cobot_interfaces__srv__GetBlocks_Request__rosidl_typesupport_introspection_c__GetBlocks_Request_message_type_support_handle = {
  0,
  &my_cobot_interfaces__srv__GetBlocks_Request__rosidl_typesupport_introspection_c__GetBlocks_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_cobot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_cobot_interfaces, srv, GetBlocks_Request)() {
  if (!my_cobot_interfaces__srv__GetBlocks_Request__rosidl_typesupport_introspection_c__GetBlocks_Request_message_type_support_handle.typesupport_identifier) {
    my_cobot_interfaces__srv__GetBlocks_Request__rosidl_typesupport_introspection_c__GetBlocks_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_cobot_interfaces__srv__GetBlocks_Request__rosidl_typesupport_introspection_c__GetBlocks_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "my_cobot_interfaces/srv/detail/get_blocks__rosidl_typesupport_introspection_c.h"
// already included above
// #include "my_cobot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "my_cobot_interfaces/srv/detail/get_blocks__functions.h"
// already included above
// #include "my_cobot_interfaces/srv/detail/get_blocks__struct.h"


// Include directives for member types
// Member `blocks`
#include "my_cobot_interfaces/msg/block.h"
// Member `blocks`
#include "my_cobot_interfaces/msg/detail/block__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void my_cobot_interfaces__srv__GetBlocks_Response__rosidl_typesupport_introspection_c__GetBlocks_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_cobot_interfaces__srv__GetBlocks_Response__init(message_memory);
}

void my_cobot_interfaces__srv__GetBlocks_Response__rosidl_typesupport_introspection_c__GetBlocks_Response_fini_function(void * message_memory)
{
  my_cobot_interfaces__srv__GetBlocks_Response__fini(message_memory);
}

size_t my_cobot_interfaces__srv__GetBlocks_Response__rosidl_typesupport_introspection_c__size_function__GetBlocks_Response__blocks(
  const void * untyped_member)
{
  const my_cobot_interfaces__msg__Block__Sequence * member =
    (const my_cobot_interfaces__msg__Block__Sequence *)(untyped_member);
  return member->size;
}

const void * my_cobot_interfaces__srv__GetBlocks_Response__rosidl_typesupport_introspection_c__get_const_function__GetBlocks_Response__blocks(
  const void * untyped_member, size_t index)
{
  const my_cobot_interfaces__msg__Block__Sequence * member =
    (const my_cobot_interfaces__msg__Block__Sequence *)(untyped_member);
  return &member->data[index];
}

void * my_cobot_interfaces__srv__GetBlocks_Response__rosidl_typesupport_introspection_c__get_function__GetBlocks_Response__blocks(
  void * untyped_member, size_t index)
{
  my_cobot_interfaces__msg__Block__Sequence * member =
    (my_cobot_interfaces__msg__Block__Sequence *)(untyped_member);
  return &member->data[index];
}

void my_cobot_interfaces__srv__GetBlocks_Response__rosidl_typesupport_introspection_c__fetch_function__GetBlocks_Response__blocks(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const my_cobot_interfaces__msg__Block * item =
    ((const my_cobot_interfaces__msg__Block *)
    my_cobot_interfaces__srv__GetBlocks_Response__rosidl_typesupport_introspection_c__get_const_function__GetBlocks_Response__blocks(untyped_member, index));
  my_cobot_interfaces__msg__Block * value =
    (my_cobot_interfaces__msg__Block *)(untyped_value);
  *value = *item;
}

void my_cobot_interfaces__srv__GetBlocks_Response__rosidl_typesupport_introspection_c__assign_function__GetBlocks_Response__blocks(
  void * untyped_member, size_t index, const void * untyped_value)
{
  my_cobot_interfaces__msg__Block * item =
    ((my_cobot_interfaces__msg__Block *)
    my_cobot_interfaces__srv__GetBlocks_Response__rosidl_typesupport_introspection_c__get_function__GetBlocks_Response__blocks(untyped_member, index));
  const my_cobot_interfaces__msg__Block * value =
    (const my_cobot_interfaces__msg__Block *)(untyped_value);
  *item = *value;
}

bool my_cobot_interfaces__srv__GetBlocks_Response__rosidl_typesupport_introspection_c__resize_function__GetBlocks_Response__blocks(
  void * untyped_member, size_t size)
{
  my_cobot_interfaces__msg__Block__Sequence * member =
    (my_cobot_interfaces__msg__Block__Sequence *)(untyped_member);
  my_cobot_interfaces__msg__Block__Sequence__fini(member);
  return my_cobot_interfaces__msg__Block__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember my_cobot_interfaces__srv__GetBlocks_Response__rosidl_typesupport_introspection_c__GetBlocks_Response_message_member_array[1] = {
  {
    "blocks",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_cobot_interfaces__srv__GetBlocks_Response, blocks),  // bytes offset in struct
    NULL,  // default value
    my_cobot_interfaces__srv__GetBlocks_Response__rosidl_typesupport_introspection_c__size_function__GetBlocks_Response__blocks,  // size() function pointer
    my_cobot_interfaces__srv__GetBlocks_Response__rosidl_typesupport_introspection_c__get_const_function__GetBlocks_Response__blocks,  // get_const(index) function pointer
    my_cobot_interfaces__srv__GetBlocks_Response__rosidl_typesupport_introspection_c__get_function__GetBlocks_Response__blocks,  // get(index) function pointer
    my_cobot_interfaces__srv__GetBlocks_Response__rosidl_typesupport_introspection_c__fetch_function__GetBlocks_Response__blocks,  // fetch(index, &value) function pointer
    my_cobot_interfaces__srv__GetBlocks_Response__rosidl_typesupport_introspection_c__assign_function__GetBlocks_Response__blocks,  // assign(index, value) function pointer
    my_cobot_interfaces__srv__GetBlocks_Response__rosidl_typesupport_introspection_c__resize_function__GetBlocks_Response__blocks  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_cobot_interfaces__srv__GetBlocks_Response__rosidl_typesupport_introspection_c__GetBlocks_Response_message_members = {
  "my_cobot_interfaces__srv",  // message namespace
  "GetBlocks_Response",  // message name
  1,  // number of fields
  sizeof(my_cobot_interfaces__srv__GetBlocks_Response),
  my_cobot_interfaces__srv__GetBlocks_Response__rosidl_typesupport_introspection_c__GetBlocks_Response_message_member_array,  // message members
  my_cobot_interfaces__srv__GetBlocks_Response__rosidl_typesupport_introspection_c__GetBlocks_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  my_cobot_interfaces__srv__GetBlocks_Response__rosidl_typesupport_introspection_c__GetBlocks_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_cobot_interfaces__srv__GetBlocks_Response__rosidl_typesupport_introspection_c__GetBlocks_Response_message_type_support_handle = {
  0,
  &my_cobot_interfaces__srv__GetBlocks_Response__rosidl_typesupport_introspection_c__GetBlocks_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_cobot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_cobot_interfaces, srv, GetBlocks_Response)() {
  my_cobot_interfaces__srv__GetBlocks_Response__rosidl_typesupport_introspection_c__GetBlocks_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_cobot_interfaces, msg, Block)();
  if (!my_cobot_interfaces__srv__GetBlocks_Response__rosidl_typesupport_introspection_c__GetBlocks_Response_message_type_support_handle.typesupport_identifier) {
    my_cobot_interfaces__srv__GetBlocks_Response__rosidl_typesupport_introspection_c__GetBlocks_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_cobot_interfaces__srv__GetBlocks_Response__rosidl_typesupport_introspection_c__GetBlocks_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "my_cobot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "my_cobot_interfaces/srv/detail/get_blocks__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers my_cobot_interfaces__srv__detail__get_blocks__rosidl_typesupport_introspection_c__GetBlocks_service_members = {
  "my_cobot_interfaces__srv",  // service namespace
  "GetBlocks",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // my_cobot_interfaces__srv__detail__get_blocks__rosidl_typesupport_introspection_c__GetBlocks_Request_message_type_support_handle,
  NULL  // response message
  // my_cobot_interfaces__srv__detail__get_blocks__rosidl_typesupport_introspection_c__GetBlocks_Response_message_type_support_handle
};

static rosidl_service_type_support_t my_cobot_interfaces__srv__detail__get_blocks__rosidl_typesupport_introspection_c__GetBlocks_service_type_support_handle = {
  0,
  &my_cobot_interfaces__srv__detail__get_blocks__rosidl_typesupport_introspection_c__GetBlocks_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_cobot_interfaces, srv, GetBlocks_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_cobot_interfaces, srv, GetBlocks_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_cobot_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_cobot_interfaces, srv, GetBlocks)() {
  if (!my_cobot_interfaces__srv__detail__get_blocks__rosidl_typesupport_introspection_c__GetBlocks_service_type_support_handle.typesupport_identifier) {
    my_cobot_interfaces__srv__detail__get_blocks__rosidl_typesupport_introspection_c__GetBlocks_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)my_cobot_interfaces__srv__detail__get_blocks__rosidl_typesupport_introspection_c__GetBlocks_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_cobot_interfaces, srv, GetBlocks_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_cobot_interfaces, srv, GetBlocks_Response)()->data;
  }

  return &my_cobot_interfaces__srv__detail__get_blocks__rosidl_typesupport_introspection_c__GetBlocks_service_type_support_handle;
}
