// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_robotiq_controller:srv/SetForce.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_robotiq_controller/srv/set_force.h"


#ifndef MY_ROBOTIQ_CONTROLLER__SRV__DETAIL__SET_FORCE__STRUCT_H_
#define MY_ROBOTIQ_CONTROLLER__SRV__DETAIL__SET_FORCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetForce in the package my_robotiq_controller.
typedef struct my_robotiq_controller__srv__SetForce_Request
{
  uint8_t force;
} my_robotiq_controller__srv__SetForce_Request;

// Struct for a sequence of my_robotiq_controller__srv__SetForce_Request.
typedef struct my_robotiq_controller__srv__SetForce_Request__Sequence
{
  my_robotiq_controller__srv__SetForce_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_robotiq_controller__srv__SetForce_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetForce in the package my_robotiq_controller.
typedef struct my_robotiq_controller__srv__SetForce_Response
{
  bool success;
  rosidl_runtime_c__String message;
} my_robotiq_controller__srv__SetForce_Response;

// Struct for a sequence of my_robotiq_controller__srv__SetForce_Response.
typedef struct my_robotiq_controller__srv__SetForce_Response__Sequence
{
  my_robotiq_controller__srv__SetForce_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_robotiq_controller__srv__SetForce_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  my_robotiq_controller__srv__SetForce_Event__request__MAX_SIZE = 1
};
// response
enum
{
  my_robotiq_controller__srv__SetForce_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetForce in the package my_robotiq_controller.
typedef struct my_robotiq_controller__srv__SetForce_Event
{
  service_msgs__msg__ServiceEventInfo info;
  my_robotiq_controller__srv__SetForce_Request__Sequence request;
  my_robotiq_controller__srv__SetForce_Response__Sequence response;
} my_robotiq_controller__srv__SetForce_Event;

// Struct for a sequence of my_robotiq_controller__srv__SetForce_Event.
typedef struct my_robotiq_controller__srv__SetForce_Event__Sequence
{
  my_robotiq_controller__srv__SetForce_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_robotiq_controller__srv__SetForce_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_ROBOTIQ_CONTROLLER__SRV__DETAIL__SET_FORCE__STRUCT_H_
