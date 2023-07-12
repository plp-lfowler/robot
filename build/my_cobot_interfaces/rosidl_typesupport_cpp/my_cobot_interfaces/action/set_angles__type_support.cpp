// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from my_cobot_interfaces:action/SetAngles.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "my_cobot_interfaces/action/detail/set_angles__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace my_cobot_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetAngles_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetAngles_Goal_type_support_ids_t;

static const _SetAngles_Goal_type_support_ids_t _SetAngles_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_cobot_interfaces, action, SetAngles_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_cobot_interfaces, action, SetAngles_Goal)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetAngles_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_cobot_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_cobot_interfaces::action::SetAngles_Goal>()
{
  return &::my_cobot_interfaces::action::rosidl_typesupport_cpp::SetAngles_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_cobot_interfaces, action, SetAngles_Goal)() {
  return get_message_type_support_handle<my_cobot_interfaces::action::SetAngles_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_cobot_interfaces/action/detail/set_angles__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_cobot_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetAngles_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetAngles_Result_type_support_ids_t;

static const _SetAngles_Result_type_support_ids_t _SetAngles_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_cobot_interfaces, action, SetAngles_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_cobot_interfaces, action, SetAngles_Result)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetAngles_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_cobot_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_cobot_interfaces::action::SetAngles_Result>()
{
  return &::my_cobot_interfaces::action::rosidl_typesupport_cpp::SetAngles_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_cobot_interfaces, action, SetAngles_Result)() {
  return get_message_type_support_handle<my_cobot_interfaces::action::SetAngles_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_cobot_interfaces/action/detail/set_angles__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_cobot_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetAngles_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetAngles_Feedback_type_support_ids_t;

static const _SetAngles_Feedback_type_support_ids_t _SetAngles_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_cobot_interfaces, action, SetAngles_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_cobot_interfaces, action, SetAngles_Feedback)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetAngles_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_cobot_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_cobot_interfaces::action::SetAngles_Feedback>()
{
  return &::my_cobot_interfaces::action::rosidl_typesupport_cpp::SetAngles_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_cobot_interfaces, action, SetAngles_Feedback)() {
  return get_message_type_support_handle<my_cobot_interfaces::action::SetAngles_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_cobot_interfaces/action/detail/set_angles__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_cobot_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetAngles_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetAngles_SendGoal_Request_type_support_ids_t;

static const _SetAngles_SendGoal_Request_type_support_ids_t _SetAngles_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_cobot_interfaces, action, SetAngles_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_cobot_interfaces, action, SetAngles_SendGoal_Request)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetAngles_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_cobot_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_cobot_interfaces::action::SetAngles_SendGoal_Request>()
{
  return &::my_cobot_interfaces::action::rosidl_typesupport_cpp::SetAngles_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_cobot_interfaces, action, SetAngles_SendGoal_Request)() {
  return get_message_type_support_handle<my_cobot_interfaces::action::SetAngles_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_cobot_interfaces/action/detail/set_angles__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_cobot_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetAngles_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetAngles_SendGoal_Response_type_support_ids_t;

static const _SetAngles_SendGoal_Response_type_support_ids_t _SetAngles_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_cobot_interfaces, action, SetAngles_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_cobot_interfaces, action, SetAngles_SendGoal_Response)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetAngles_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_cobot_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_cobot_interfaces::action::SetAngles_SendGoal_Response>()
{
  return &::my_cobot_interfaces::action::rosidl_typesupport_cpp::SetAngles_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_cobot_interfaces, action, SetAngles_SendGoal_Response)() {
  return get_message_type_support_handle<my_cobot_interfaces::action::SetAngles_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "my_cobot_interfaces/action/detail/set_angles__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_cobot_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetAngles_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetAngles_SendGoal_type_support_ids_t;

static const _SetAngles_SendGoal_type_support_ids_t _SetAngles_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_cobot_interfaces, action, SetAngles_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_cobot_interfaces, action, SetAngles_SendGoal)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetAngles_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_cobot_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<my_cobot_interfaces::action::SetAngles_SendGoal>()
{
  return &::my_cobot_interfaces::action::rosidl_typesupport_cpp::SetAngles_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_cobot_interfaces/action/detail/set_angles__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_cobot_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetAngles_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetAngles_GetResult_Request_type_support_ids_t;

static const _SetAngles_GetResult_Request_type_support_ids_t _SetAngles_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_cobot_interfaces, action, SetAngles_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_cobot_interfaces, action, SetAngles_GetResult_Request)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetAngles_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_cobot_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_cobot_interfaces::action::SetAngles_GetResult_Request>()
{
  return &::my_cobot_interfaces::action::rosidl_typesupport_cpp::SetAngles_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_cobot_interfaces, action, SetAngles_GetResult_Request)() {
  return get_message_type_support_handle<my_cobot_interfaces::action::SetAngles_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_cobot_interfaces/action/detail/set_angles__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_cobot_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetAngles_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetAngles_GetResult_Response_type_support_ids_t;

static const _SetAngles_GetResult_Response_type_support_ids_t _SetAngles_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_cobot_interfaces, action, SetAngles_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_cobot_interfaces, action, SetAngles_GetResult_Response)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetAngles_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_cobot_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_cobot_interfaces::action::SetAngles_GetResult_Response>()
{
  return &::my_cobot_interfaces::action::rosidl_typesupport_cpp::SetAngles_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_cobot_interfaces, action, SetAngles_GetResult_Response)() {
  return get_message_type_support_handle<my_cobot_interfaces::action::SetAngles_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "my_cobot_interfaces/action/detail/set_angles__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_cobot_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetAngles_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetAngles_GetResult_type_support_ids_t;

static const _SetAngles_GetResult_type_support_ids_t _SetAngles_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_cobot_interfaces, action, SetAngles_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_cobot_interfaces, action, SetAngles_GetResult)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetAngles_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_cobot_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<my_cobot_interfaces::action::SetAngles_GetResult>()
{
  return &::my_cobot_interfaces::action::rosidl_typesupport_cpp::SetAngles_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_cobot_interfaces/action/detail/set_angles__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_cobot_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetAngles_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetAngles_FeedbackMessage_type_support_ids_t;

static const _SetAngles_FeedbackMessage_type_support_ids_t _SetAngles_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_cobot_interfaces, action, SetAngles_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_cobot_interfaces, action, SetAngles_FeedbackMessage)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetAngles_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_cobot_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_cobot_interfaces::action::SetAngles_FeedbackMessage>()
{
  return &::my_cobot_interfaces::action::rosidl_typesupport_cpp::SetAngles_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_cobot_interfaces, action, SetAngles_FeedbackMessage)() {
  return get_message_type_support_handle<my_cobot_interfaces::action::SetAngles_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "my_cobot_interfaces/action/detail/set_angles__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace my_cobot_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t SetAngles_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_cobot_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<my_cobot_interfaces::action::SetAngles>()
{
  using ::my_cobot_interfaces::action::rosidl_typesupport_cpp::SetAngles_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  SetAngles_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::my_cobot_interfaces::action::SetAngles::Impl::SendGoalService>();
  SetAngles_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::my_cobot_interfaces::action::SetAngles::Impl::GetResultService>();
  SetAngles_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::my_cobot_interfaces::action::SetAngles::Impl::CancelGoalService>();
  SetAngles_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::my_cobot_interfaces::action::SetAngles::Impl::FeedbackMessage>();
  SetAngles_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::my_cobot_interfaces::action::SetAngles::Impl::GoalStatusMessage>();
  return &SetAngles_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
