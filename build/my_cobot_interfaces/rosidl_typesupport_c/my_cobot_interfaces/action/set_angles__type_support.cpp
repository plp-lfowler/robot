// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from my_cobot_interfaces:action/SetAngles.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "my_cobot_interfaces/action/detail/set_angles__struct.h"
#include "my_cobot_interfaces/action/detail/set_angles__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace my_cobot_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _SetAngles_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetAngles_Goal_type_support_ids_t;

static const _SetAngles_Goal_type_support_ids_t _SetAngles_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetAngles_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetAngles_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetAngles_Goal_type_support_symbol_names_t _SetAngles_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_cobot_interfaces, action, SetAngles_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_cobot_interfaces, action, SetAngles_Goal)),
  }
};

typedef struct _SetAngles_Goal_type_support_data_t
{
  void * data[2];
} _SetAngles_Goal_type_support_data_t;

static _SetAngles_Goal_type_support_data_t _SetAngles_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetAngles_Goal_message_typesupport_map = {
  2,
  "my_cobot_interfaces",
  &_SetAngles_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_SetAngles_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_SetAngles_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetAngles_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetAngles_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace my_cobot_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, my_cobot_interfaces, action, SetAngles_Goal)() {
  return &::my_cobot_interfaces::action::rosidl_typesupport_c::SetAngles_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_cobot_interfaces/action/detail/set_angles__struct.h"
// already included above
// #include "my_cobot_interfaces/action/detail/set_angles__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_cobot_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _SetAngles_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetAngles_Result_type_support_ids_t;

static const _SetAngles_Result_type_support_ids_t _SetAngles_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetAngles_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetAngles_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetAngles_Result_type_support_symbol_names_t _SetAngles_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_cobot_interfaces, action, SetAngles_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_cobot_interfaces, action, SetAngles_Result)),
  }
};

typedef struct _SetAngles_Result_type_support_data_t
{
  void * data[2];
} _SetAngles_Result_type_support_data_t;

static _SetAngles_Result_type_support_data_t _SetAngles_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetAngles_Result_message_typesupport_map = {
  2,
  "my_cobot_interfaces",
  &_SetAngles_Result_message_typesupport_ids.typesupport_identifier[0],
  &_SetAngles_Result_message_typesupport_symbol_names.symbol_name[0],
  &_SetAngles_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetAngles_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetAngles_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace my_cobot_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, my_cobot_interfaces, action, SetAngles_Result)() {
  return &::my_cobot_interfaces::action::rosidl_typesupport_c::SetAngles_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_cobot_interfaces/action/detail/set_angles__struct.h"
// already included above
// #include "my_cobot_interfaces/action/detail/set_angles__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_cobot_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _SetAngles_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetAngles_Feedback_type_support_ids_t;

static const _SetAngles_Feedback_type_support_ids_t _SetAngles_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetAngles_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetAngles_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetAngles_Feedback_type_support_symbol_names_t _SetAngles_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_cobot_interfaces, action, SetAngles_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_cobot_interfaces, action, SetAngles_Feedback)),
  }
};

typedef struct _SetAngles_Feedback_type_support_data_t
{
  void * data[2];
} _SetAngles_Feedback_type_support_data_t;

static _SetAngles_Feedback_type_support_data_t _SetAngles_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetAngles_Feedback_message_typesupport_map = {
  2,
  "my_cobot_interfaces",
  &_SetAngles_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_SetAngles_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_SetAngles_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetAngles_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetAngles_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace my_cobot_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, my_cobot_interfaces, action, SetAngles_Feedback)() {
  return &::my_cobot_interfaces::action::rosidl_typesupport_c::SetAngles_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_cobot_interfaces/action/detail/set_angles__struct.h"
// already included above
// #include "my_cobot_interfaces/action/detail/set_angles__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_cobot_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _SetAngles_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetAngles_SendGoal_Request_type_support_ids_t;

static const _SetAngles_SendGoal_Request_type_support_ids_t _SetAngles_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetAngles_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetAngles_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetAngles_SendGoal_Request_type_support_symbol_names_t _SetAngles_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_cobot_interfaces, action, SetAngles_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_cobot_interfaces, action, SetAngles_SendGoal_Request)),
  }
};

typedef struct _SetAngles_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _SetAngles_SendGoal_Request_type_support_data_t;

static _SetAngles_SendGoal_Request_type_support_data_t _SetAngles_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetAngles_SendGoal_Request_message_typesupport_map = {
  2,
  "my_cobot_interfaces",
  &_SetAngles_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetAngles_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetAngles_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetAngles_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetAngles_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace my_cobot_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, my_cobot_interfaces, action, SetAngles_SendGoal_Request)() {
  return &::my_cobot_interfaces::action::rosidl_typesupport_c::SetAngles_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_cobot_interfaces/action/detail/set_angles__struct.h"
// already included above
// #include "my_cobot_interfaces/action/detail/set_angles__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_cobot_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _SetAngles_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetAngles_SendGoal_Response_type_support_ids_t;

static const _SetAngles_SendGoal_Response_type_support_ids_t _SetAngles_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetAngles_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetAngles_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetAngles_SendGoal_Response_type_support_symbol_names_t _SetAngles_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_cobot_interfaces, action, SetAngles_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_cobot_interfaces, action, SetAngles_SendGoal_Response)),
  }
};

typedef struct _SetAngles_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _SetAngles_SendGoal_Response_type_support_data_t;

static _SetAngles_SendGoal_Response_type_support_data_t _SetAngles_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetAngles_SendGoal_Response_message_typesupport_map = {
  2,
  "my_cobot_interfaces",
  &_SetAngles_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetAngles_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetAngles_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetAngles_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetAngles_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace my_cobot_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, my_cobot_interfaces, action, SetAngles_SendGoal_Response)() {
  return &::my_cobot_interfaces::action::rosidl_typesupport_c::SetAngles_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "my_cobot_interfaces/action/detail/set_angles__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_cobot_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _SetAngles_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetAngles_SendGoal_type_support_ids_t;

static const _SetAngles_SendGoal_type_support_ids_t _SetAngles_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetAngles_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetAngles_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetAngles_SendGoal_type_support_symbol_names_t _SetAngles_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_cobot_interfaces, action, SetAngles_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_cobot_interfaces, action, SetAngles_SendGoal)),
  }
};

typedef struct _SetAngles_SendGoal_type_support_data_t
{
  void * data[2];
} _SetAngles_SendGoal_type_support_data_t;

static _SetAngles_SendGoal_type_support_data_t _SetAngles_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetAngles_SendGoal_service_typesupport_map = {
  2,
  "my_cobot_interfaces",
  &_SetAngles_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_SetAngles_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_SetAngles_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetAngles_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetAngles_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace my_cobot_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, my_cobot_interfaces, action, SetAngles_SendGoal)() {
  return &::my_cobot_interfaces::action::rosidl_typesupport_c::SetAngles_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_cobot_interfaces/action/detail/set_angles__struct.h"
// already included above
// #include "my_cobot_interfaces/action/detail/set_angles__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_cobot_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _SetAngles_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetAngles_GetResult_Request_type_support_ids_t;

static const _SetAngles_GetResult_Request_type_support_ids_t _SetAngles_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetAngles_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetAngles_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetAngles_GetResult_Request_type_support_symbol_names_t _SetAngles_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_cobot_interfaces, action, SetAngles_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_cobot_interfaces, action, SetAngles_GetResult_Request)),
  }
};

typedef struct _SetAngles_GetResult_Request_type_support_data_t
{
  void * data[2];
} _SetAngles_GetResult_Request_type_support_data_t;

static _SetAngles_GetResult_Request_type_support_data_t _SetAngles_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetAngles_GetResult_Request_message_typesupport_map = {
  2,
  "my_cobot_interfaces",
  &_SetAngles_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetAngles_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetAngles_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetAngles_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetAngles_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace my_cobot_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, my_cobot_interfaces, action, SetAngles_GetResult_Request)() {
  return &::my_cobot_interfaces::action::rosidl_typesupport_c::SetAngles_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_cobot_interfaces/action/detail/set_angles__struct.h"
// already included above
// #include "my_cobot_interfaces/action/detail/set_angles__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_cobot_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _SetAngles_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetAngles_GetResult_Response_type_support_ids_t;

static const _SetAngles_GetResult_Response_type_support_ids_t _SetAngles_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetAngles_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetAngles_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetAngles_GetResult_Response_type_support_symbol_names_t _SetAngles_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_cobot_interfaces, action, SetAngles_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_cobot_interfaces, action, SetAngles_GetResult_Response)),
  }
};

typedef struct _SetAngles_GetResult_Response_type_support_data_t
{
  void * data[2];
} _SetAngles_GetResult_Response_type_support_data_t;

static _SetAngles_GetResult_Response_type_support_data_t _SetAngles_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetAngles_GetResult_Response_message_typesupport_map = {
  2,
  "my_cobot_interfaces",
  &_SetAngles_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetAngles_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetAngles_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetAngles_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetAngles_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace my_cobot_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, my_cobot_interfaces, action, SetAngles_GetResult_Response)() {
  return &::my_cobot_interfaces::action::rosidl_typesupport_c::SetAngles_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "my_cobot_interfaces/action/detail/set_angles__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_cobot_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _SetAngles_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetAngles_GetResult_type_support_ids_t;

static const _SetAngles_GetResult_type_support_ids_t _SetAngles_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetAngles_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetAngles_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetAngles_GetResult_type_support_symbol_names_t _SetAngles_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_cobot_interfaces, action, SetAngles_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_cobot_interfaces, action, SetAngles_GetResult)),
  }
};

typedef struct _SetAngles_GetResult_type_support_data_t
{
  void * data[2];
} _SetAngles_GetResult_type_support_data_t;

static _SetAngles_GetResult_type_support_data_t _SetAngles_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetAngles_GetResult_service_typesupport_map = {
  2,
  "my_cobot_interfaces",
  &_SetAngles_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_SetAngles_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_SetAngles_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetAngles_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetAngles_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace my_cobot_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, my_cobot_interfaces, action, SetAngles_GetResult)() {
  return &::my_cobot_interfaces::action::rosidl_typesupport_c::SetAngles_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_cobot_interfaces/action/detail/set_angles__struct.h"
// already included above
// #include "my_cobot_interfaces/action/detail/set_angles__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_cobot_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _SetAngles_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetAngles_FeedbackMessage_type_support_ids_t;

static const _SetAngles_FeedbackMessage_type_support_ids_t _SetAngles_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetAngles_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetAngles_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetAngles_FeedbackMessage_type_support_symbol_names_t _SetAngles_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_cobot_interfaces, action, SetAngles_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_cobot_interfaces, action, SetAngles_FeedbackMessage)),
  }
};

typedef struct _SetAngles_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _SetAngles_FeedbackMessage_type_support_data_t;

static _SetAngles_FeedbackMessage_type_support_data_t _SetAngles_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetAngles_FeedbackMessage_message_typesupport_map = {
  2,
  "my_cobot_interfaces",
  &_SetAngles_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_SetAngles_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_SetAngles_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetAngles_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetAngles_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace my_cobot_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, my_cobot_interfaces, action, SetAngles_FeedbackMessage)() {
  return &::my_cobot_interfaces::action::rosidl_typesupport_c::SetAngles_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "my_cobot_interfaces/action/set_angles.h"
// already included above
// #include "my_cobot_interfaces/action/detail/set_angles__type_support.h"

static rosidl_action_type_support_t _my_cobot_interfaces__action__SetAngles__typesupport_c;

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, my_cobot_interfaces, action, SetAngles)()
{
  // Thread-safe by always writing the same values to the static struct
  _my_cobot_interfaces__action__SetAngles__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, my_cobot_interfaces, action, SetAngles_SendGoal)();
  _my_cobot_interfaces__action__SetAngles__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, my_cobot_interfaces, action, SetAngles_GetResult)();
  _my_cobot_interfaces__action__SetAngles__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _my_cobot_interfaces__action__SetAngles__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, my_cobot_interfaces, action, SetAngles_FeedbackMessage)();
  _my_cobot_interfaces__action__SetAngles__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_my_cobot_interfaces__action__SetAngles__typesupport_c;
}

#ifdef __cplusplus
}
#endif
