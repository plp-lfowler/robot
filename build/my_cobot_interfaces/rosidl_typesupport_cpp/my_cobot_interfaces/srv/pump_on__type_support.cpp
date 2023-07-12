// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from my_cobot_interfaces:srv/PumpOn.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "my_cobot_interfaces/srv/detail/pump_on__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace my_cobot_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _PumpOn_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PumpOn_Request_type_support_ids_t;

static const _PumpOn_Request_type_support_ids_t _PumpOn_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PumpOn_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PumpOn_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PumpOn_Request_type_support_symbol_names_t _PumpOn_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_cobot_interfaces, srv, PumpOn_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_cobot_interfaces, srv, PumpOn_Request)),
  }
};

typedef struct _PumpOn_Request_type_support_data_t
{
  void * data[2];
} _PumpOn_Request_type_support_data_t;

static _PumpOn_Request_type_support_data_t _PumpOn_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PumpOn_Request_message_typesupport_map = {
  2,
  "my_cobot_interfaces",
  &_PumpOn_Request_message_typesupport_ids.typesupport_identifier[0],
  &_PumpOn_Request_message_typesupport_symbol_names.symbol_name[0],
  &_PumpOn_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PumpOn_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PumpOn_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace my_cobot_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_cobot_interfaces::srv::PumpOn_Request>()
{
  return &::my_cobot_interfaces::srv::rosidl_typesupport_cpp::PumpOn_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_cobot_interfaces, srv, PumpOn_Request)() {
  return get_message_type_support_handle<my_cobot_interfaces::srv::PumpOn_Request>();
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
// #include "my_cobot_interfaces/srv/detail/pump_on__struct.hpp"
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

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _PumpOn_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PumpOn_Response_type_support_ids_t;

static const _PumpOn_Response_type_support_ids_t _PumpOn_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PumpOn_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PumpOn_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PumpOn_Response_type_support_symbol_names_t _PumpOn_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_cobot_interfaces, srv, PumpOn_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_cobot_interfaces, srv, PumpOn_Response)),
  }
};

typedef struct _PumpOn_Response_type_support_data_t
{
  void * data[2];
} _PumpOn_Response_type_support_data_t;

static _PumpOn_Response_type_support_data_t _PumpOn_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PumpOn_Response_message_typesupport_map = {
  2,
  "my_cobot_interfaces",
  &_PumpOn_Response_message_typesupport_ids.typesupport_identifier[0],
  &_PumpOn_Response_message_typesupport_symbol_names.symbol_name[0],
  &_PumpOn_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PumpOn_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PumpOn_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace my_cobot_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_cobot_interfaces::srv::PumpOn_Response>()
{
  return &::my_cobot_interfaces::srv::rosidl_typesupport_cpp::PumpOn_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_cobot_interfaces, srv, PumpOn_Response)() {
  return get_message_type_support_handle<my_cobot_interfaces::srv::PumpOn_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "my_cobot_interfaces/srv/detail/pump_on__struct.hpp"
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

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _PumpOn_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PumpOn_type_support_ids_t;

static const _PumpOn_type_support_ids_t _PumpOn_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PumpOn_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PumpOn_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PumpOn_type_support_symbol_names_t _PumpOn_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_cobot_interfaces, srv, PumpOn)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_cobot_interfaces, srv, PumpOn)),
  }
};

typedef struct _PumpOn_type_support_data_t
{
  void * data[2];
} _PumpOn_type_support_data_t;

static _PumpOn_type_support_data_t _PumpOn_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PumpOn_service_typesupport_map = {
  2,
  "my_cobot_interfaces",
  &_PumpOn_service_typesupport_ids.typesupport_identifier[0],
  &_PumpOn_service_typesupport_symbol_names.symbol_name[0],
  &_PumpOn_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t PumpOn_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PumpOn_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace my_cobot_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<my_cobot_interfaces::srv::PumpOn>()
{
  return &::my_cobot_interfaces::srv::rosidl_typesupport_cpp::PumpOn_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
