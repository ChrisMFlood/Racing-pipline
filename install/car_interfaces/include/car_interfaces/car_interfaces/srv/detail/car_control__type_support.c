// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from car_interfaces:srv/CarControl.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "car_interfaces/srv/detail/car_control__rosidl_typesupport_introspection_c.h"
#include "car_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "car_interfaces/srv/detail/car_control__functions.h"
#include "car_interfaces/srv/detail/car_control__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void car_interfaces__srv__CarControl_Request__rosidl_typesupport_introspection_c__CarControl_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  car_interfaces__srv__CarControl_Request__init(message_memory);
}

void car_interfaces__srv__CarControl_Request__rosidl_typesupport_introspection_c__CarControl_Request_fini_function(void * message_memory)
{
  car_interfaces__srv__CarControl_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember car_interfaces__srv__CarControl_Request__rosidl_typesupport_introspection_c__CarControl_Request_message_member_array[1] = {
  {
    "initial_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(car_interfaces__srv__CarControl_Request, initial_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers car_interfaces__srv__CarControl_Request__rosidl_typesupport_introspection_c__CarControl_Request_message_members = {
  "car_interfaces__srv",  // message namespace
  "CarControl_Request",  // message name
  1,  // number of fields
  sizeof(car_interfaces__srv__CarControl_Request),
  car_interfaces__srv__CarControl_Request__rosidl_typesupport_introspection_c__CarControl_Request_message_member_array,  // message members
  car_interfaces__srv__CarControl_Request__rosidl_typesupport_introspection_c__CarControl_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  car_interfaces__srv__CarControl_Request__rosidl_typesupport_introspection_c__CarControl_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t car_interfaces__srv__CarControl_Request__rosidl_typesupport_introspection_c__CarControl_Request_message_type_support_handle = {
  0,
  &car_interfaces__srv__CarControl_Request__rosidl_typesupport_introspection_c__CarControl_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_car_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, car_interfaces, srv, CarControl_Request)() {
  if (!car_interfaces__srv__CarControl_Request__rosidl_typesupport_introspection_c__CarControl_Request_message_type_support_handle.typesupport_identifier) {
    car_interfaces__srv__CarControl_Request__rosidl_typesupport_introspection_c__CarControl_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &car_interfaces__srv__CarControl_Request__rosidl_typesupport_introspection_c__CarControl_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "car_interfaces/srv/detail/car_control__rosidl_typesupport_introspection_c.h"
// already included above
// #include "car_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "car_interfaces/srv/detail/car_control__functions.h"
// already included above
// #include "car_interfaces/srv/detail/car_control__struct.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void car_interfaces__srv__CarControl_Response__rosidl_typesupport_introspection_c__CarControl_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  car_interfaces__srv__CarControl_Response__init(message_memory);
}

void car_interfaces__srv__CarControl_Response__rosidl_typesupport_introspection_c__CarControl_Response_fini_function(void * message_memory)
{
  car_interfaces__srv__CarControl_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember car_interfaces__srv__CarControl_Response__rosidl_typesupport_introspection_c__CarControl_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(car_interfaces__srv__CarControl_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(car_interfaces__srv__CarControl_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers car_interfaces__srv__CarControl_Response__rosidl_typesupport_introspection_c__CarControl_Response_message_members = {
  "car_interfaces__srv",  // message namespace
  "CarControl_Response",  // message name
  2,  // number of fields
  sizeof(car_interfaces__srv__CarControl_Response),
  car_interfaces__srv__CarControl_Response__rosidl_typesupport_introspection_c__CarControl_Response_message_member_array,  // message members
  car_interfaces__srv__CarControl_Response__rosidl_typesupport_introspection_c__CarControl_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  car_interfaces__srv__CarControl_Response__rosidl_typesupport_introspection_c__CarControl_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t car_interfaces__srv__CarControl_Response__rosidl_typesupport_introspection_c__CarControl_Response_message_type_support_handle = {
  0,
  &car_interfaces__srv__CarControl_Response__rosidl_typesupport_introspection_c__CarControl_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_car_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, car_interfaces, srv, CarControl_Response)() {
  if (!car_interfaces__srv__CarControl_Response__rosidl_typesupport_introspection_c__CarControl_Response_message_type_support_handle.typesupport_identifier) {
    car_interfaces__srv__CarControl_Response__rosidl_typesupport_introspection_c__CarControl_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &car_interfaces__srv__CarControl_Response__rosidl_typesupport_introspection_c__CarControl_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "car_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "car_interfaces/srv/detail/car_control__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers car_interfaces__srv__detail__car_control__rosidl_typesupport_introspection_c__CarControl_service_members = {
  "car_interfaces__srv",  // service namespace
  "CarControl",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // car_interfaces__srv__detail__car_control__rosidl_typesupport_introspection_c__CarControl_Request_message_type_support_handle,
  NULL  // response message
  // car_interfaces__srv__detail__car_control__rosidl_typesupport_introspection_c__CarControl_Response_message_type_support_handle
};

static rosidl_service_type_support_t car_interfaces__srv__detail__car_control__rosidl_typesupport_introspection_c__CarControl_service_type_support_handle = {
  0,
  &car_interfaces__srv__detail__car_control__rosidl_typesupport_introspection_c__CarControl_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, car_interfaces, srv, CarControl_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, car_interfaces, srv, CarControl_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_car_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, car_interfaces, srv, CarControl)() {
  if (!car_interfaces__srv__detail__car_control__rosidl_typesupport_introspection_c__CarControl_service_type_support_handle.typesupport_identifier) {
    car_interfaces__srv__detail__car_control__rosidl_typesupport_introspection_c__CarControl_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)car_interfaces__srv__detail__car_control__rosidl_typesupport_introspection_c__CarControl_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, car_interfaces, srv, CarControl_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, car_interfaces, srv, CarControl_Response)()->data;
  }

  return &car_interfaces__srv__detail__car_control__rosidl_typesupport_introspection_c__CarControl_service_type_support_handle;
}
