// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from car_interfaces:msg/StartPosition.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "car_interfaces/msg/detail/start_position__rosidl_typesupport_introspection_c.h"
#include "car_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "car_interfaces/msg/detail/start_position__functions.h"
#include "car_interfaces/msg/detail/start_position__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void car_interfaces__msg__StartPosition__rosidl_typesupport_introspection_c__StartPosition_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  car_interfaces__msg__StartPosition__init(message_memory);
}

void car_interfaces__msg__StartPosition__rosidl_typesupport_introspection_c__StartPosition_fini_function(void * message_memory)
{
  car_interfaces__msg__StartPosition__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember car_interfaces__msg__StartPosition__rosidl_typesupport_introspection_c__StartPosition_message_member_array[1] = {
  {
    "initial_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(car_interfaces__msg__StartPosition, initial_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers car_interfaces__msg__StartPosition__rosidl_typesupport_introspection_c__StartPosition_message_members = {
  "car_interfaces__msg",  // message namespace
  "StartPosition",  // message name
  1,  // number of fields
  sizeof(car_interfaces__msg__StartPosition),
  car_interfaces__msg__StartPosition__rosidl_typesupport_introspection_c__StartPosition_message_member_array,  // message members
  car_interfaces__msg__StartPosition__rosidl_typesupport_introspection_c__StartPosition_init_function,  // function to initialize message memory (memory has to be allocated)
  car_interfaces__msg__StartPosition__rosidl_typesupport_introspection_c__StartPosition_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t car_interfaces__msg__StartPosition__rosidl_typesupport_introspection_c__StartPosition_message_type_support_handle = {
  0,
  &car_interfaces__msg__StartPosition__rosidl_typesupport_introspection_c__StartPosition_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_car_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, car_interfaces, msg, StartPosition)() {
  if (!car_interfaces__msg__StartPosition__rosidl_typesupport_introspection_c__StartPosition_message_type_support_handle.typesupport_identifier) {
    car_interfaces__msg__StartPosition__rosidl_typesupport_introspection_c__StartPosition_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &car_interfaces__msg__StartPosition__rosidl_typesupport_introspection_c__StartPosition_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
