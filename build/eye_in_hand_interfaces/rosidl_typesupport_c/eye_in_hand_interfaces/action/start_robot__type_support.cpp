// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from eye_in_hand_interfaces:action/StartRobot.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "eye_in_hand_interfaces/action/detail/start_robot__struct.h"
#include "eye_in_hand_interfaces/action/detail/start_robot__type_support.h"
#include "eye_in_hand_interfaces/action/detail/start_robot__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace eye_in_hand_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _StartRobot_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _StartRobot_Goal_type_support_ids_t;

static const _StartRobot_Goal_type_support_ids_t _StartRobot_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _StartRobot_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _StartRobot_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _StartRobot_Goal_type_support_symbol_names_t _StartRobot_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, eye_in_hand_interfaces, action, StartRobot_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, eye_in_hand_interfaces, action, StartRobot_Goal)),
  }
};

typedef struct _StartRobot_Goal_type_support_data_t
{
  void * data[2];
} _StartRobot_Goal_type_support_data_t;

static _StartRobot_Goal_type_support_data_t _StartRobot_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _StartRobot_Goal_message_typesupport_map = {
  2,
  "eye_in_hand_interfaces",
  &_StartRobot_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_StartRobot_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_StartRobot_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t StartRobot_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_StartRobot_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &eye_in_hand_interfaces__action__StartRobot_Goal__get_type_hash,
  &eye_in_hand_interfaces__action__StartRobot_Goal__get_type_description,
  &eye_in_hand_interfaces__action__StartRobot_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace eye_in_hand_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, eye_in_hand_interfaces, action, StartRobot_Goal)() {
  return &::eye_in_hand_interfaces::action::rosidl_typesupport_c::StartRobot_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "eye_in_hand_interfaces/action/detail/start_robot__struct.h"
// already included above
// #include "eye_in_hand_interfaces/action/detail/start_robot__type_support.h"
// already included above
// #include "eye_in_hand_interfaces/action/detail/start_robot__functions.h"
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

namespace eye_in_hand_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _StartRobot_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _StartRobot_Result_type_support_ids_t;

static const _StartRobot_Result_type_support_ids_t _StartRobot_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _StartRobot_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _StartRobot_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _StartRobot_Result_type_support_symbol_names_t _StartRobot_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, eye_in_hand_interfaces, action, StartRobot_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, eye_in_hand_interfaces, action, StartRobot_Result)),
  }
};

typedef struct _StartRobot_Result_type_support_data_t
{
  void * data[2];
} _StartRobot_Result_type_support_data_t;

static _StartRobot_Result_type_support_data_t _StartRobot_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _StartRobot_Result_message_typesupport_map = {
  2,
  "eye_in_hand_interfaces",
  &_StartRobot_Result_message_typesupport_ids.typesupport_identifier[0],
  &_StartRobot_Result_message_typesupport_symbol_names.symbol_name[0],
  &_StartRobot_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t StartRobot_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_StartRobot_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &eye_in_hand_interfaces__action__StartRobot_Result__get_type_hash,
  &eye_in_hand_interfaces__action__StartRobot_Result__get_type_description,
  &eye_in_hand_interfaces__action__StartRobot_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace eye_in_hand_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, eye_in_hand_interfaces, action, StartRobot_Result)() {
  return &::eye_in_hand_interfaces::action::rosidl_typesupport_c::StartRobot_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "eye_in_hand_interfaces/action/detail/start_robot__struct.h"
// already included above
// #include "eye_in_hand_interfaces/action/detail/start_robot__type_support.h"
// already included above
// #include "eye_in_hand_interfaces/action/detail/start_robot__functions.h"
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

namespace eye_in_hand_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _StartRobot_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _StartRobot_Feedback_type_support_ids_t;

static const _StartRobot_Feedback_type_support_ids_t _StartRobot_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _StartRobot_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _StartRobot_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _StartRobot_Feedback_type_support_symbol_names_t _StartRobot_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, eye_in_hand_interfaces, action, StartRobot_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, eye_in_hand_interfaces, action, StartRobot_Feedback)),
  }
};

typedef struct _StartRobot_Feedback_type_support_data_t
{
  void * data[2];
} _StartRobot_Feedback_type_support_data_t;

static _StartRobot_Feedback_type_support_data_t _StartRobot_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _StartRobot_Feedback_message_typesupport_map = {
  2,
  "eye_in_hand_interfaces",
  &_StartRobot_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_StartRobot_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_StartRobot_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t StartRobot_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_StartRobot_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &eye_in_hand_interfaces__action__StartRobot_Feedback__get_type_hash,
  &eye_in_hand_interfaces__action__StartRobot_Feedback__get_type_description,
  &eye_in_hand_interfaces__action__StartRobot_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace eye_in_hand_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, eye_in_hand_interfaces, action, StartRobot_Feedback)() {
  return &::eye_in_hand_interfaces::action::rosidl_typesupport_c::StartRobot_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "eye_in_hand_interfaces/action/detail/start_robot__struct.h"
// already included above
// #include "eye_in_hand_interfaces/action/detail/start_robot__type_support.h"
// already included above
// #include "eye_in_hand_interfaces/action/detail/start_robot__functions.h"
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

namespace eye_in_hand_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _StartRobot_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _StartRobot_SendGoal_Request_type_support_ids_t;

static const _StartRobot_SendGoal_Request_type_support_ids_t _StartRobot_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _StartRobot_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _StartRobot_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _StartRobot_SendGoal_Request_type_support_symbol_names_t _StartRobot_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, eye_in_hand_interfaces, action, StartRobot_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, eye_in_hand_interfaces, action, StartRobot_SendGoal_Request)),
  }
};

typedef struct _StartRobot_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _StartRobot_SendGoal_Request_type_support_data_t;

static _StartRobot_SendGoal_Request_type_support_data_t _StartRobot_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _StartRobot_SendGoal_Request_message_typesupport_map = {
  2,
  "eye_in_hand_interfaces",
  &_StartRobot_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_StartRobot_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_StartRobot_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t StartRobot_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_StartRobot_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &eye_in_hand_interfaces__action__StartRobot_SendGoal_Request__get_type_hash,
  &eye_in_hand_interfaces__action__StartRobot_SendGoal_Request__get_type_description,
  &eye_in_hand_interfaces__action__StartRobot_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace eye_in_hand_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, eye_in_hand_interfaces, action, StartRobot_SendGoal_Request)() {
  return &::eye_in_hand_interfaces::action::rosidl_typesupport_c::StartRobot_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "eye_in_hand_interfaces/action/detail/start_robot__struct.h"
// already included above
// #include "eye_in_hand_interfaces/action/detail/start_robot__type_support.h"
// already included above
// #include "eye_in_hand_interfaces/action/detail/start_robot__functions.h"
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

namespace eye_in_hand_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _StartRobot_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _StartRobot_SendGoal_Response_type_support_ids_t;

static const _StartRobot_SendGoal_Response_type_support_ids_t _StartRobot_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _StartRobot_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _StartRobot_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _StartRobot_SendGoal_Response_type_support_symbol_names_t _StartRobot_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, eye_in_hand_interfaces, action, StartRobot_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, eye_in_hand_interfaces, action, StartRobot_SendGoal_Response)),
  }
};

typedef struct _StartRobot_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _StartRobot_SendGoal_Response_type_support_data_t;

static _StartRobot_SendGoal_Response_type_support_data_t _StartRobot_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _StartRobot_SendGoal_Response_message_typesupport_map = {
  2,
  "eye_in_hand_interfaces",
  &_StartRobot_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_StartRobot_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_StartRobot_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t StartRobot_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_StartRobot_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &eye_in_hand_interfaces__action__StartRobot_SendGoal_Response__get_type_hash,
  &eye_in_hand_interfaces__action__StartRobot_SendGoal_Response__get_type_description,
  &eye_in_hand_interfaces__action__StartRobot_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace eye_in_hand_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, eye_in_hand_interfaces, action, StartRobot_SendGoal_Response)() {
  return &::eye_in_hand_interfaces::action::rosidl_typesupport_c::StartRobot_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "eye_in_hand_interfaces/action/detail/start_robot__struct.h"
// already included above
// #include "eye_in_hand_interfaces/action/detail/start_robot__type_support.h"
// already included above
// #include "eye_in_hand_interfaces/action/detail/start_robot__functions.h"
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

namespace eye_in_hand_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _StartRobot_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _StartRobot_SendGoal_Event_type_support_ids_t;

static const _StartRobot_SendGoal_Event_type_support_ids_t _StartRobot_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _StartRobot_SendGoal_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _StartRobot_SendGoal_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _StartRobot_SendGoal_Event_type_support_symbol_names_t _StartRobot_SendGoal_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, eye_in_hand_interfaces, action, StartRobot_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, eye_in_hand_interfaces, action, StartRobot_SendGoal_Event)),
  }
};

typedef struct _StartRobot_SendGoal_Event_type_support_data_t
{
  void * data[2];
} _StartRobot_SendGoal_Event_type_support_data_t;

static _StartRobot_SendGoal_Event_type_support_data_t _StartRobot_SendGoal_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _StartRobot_SendGoal_Event_message_typesupport_map = {
  2,
  "eye_in_hand_interfaces",
  &_StartRobot_SendGoal_Event_message_typesupport_ids.typesupport_identifier[0],
  &_StartRobot_SendGoal_Event_message_typesupport_symbol_names.symbol_name[0],
  &_StartRobot_SendGoal_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t StartRobot_SendGoal_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_StartRobot_SendGoal_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &eye_in_hand_interfaces__action__StartRobot_SendGoal_Event__get_type_hash,
  &eye_in_hand_interfaces__action__StartRobot_SendGoal_Event__get_type_description,
  &eye_in_hand_interfaces__action__StartRobot_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace eye_in_hand_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, eye_in_hand_interfaces, action, StartRobot_SendGoal_Event)() {
  return &::eye_in_hand_interfaces::action::rosidl_typesupport_c::StartRobot_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "eye_in_hand_interfaces/action/detail/start_robot__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace eye_in_hand_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{
typedef struct _StartRobot_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _StartRobot_SendGoal_type_support_ids_t;

static const _StartRobot_SendGoal_type_support_ids_t _StartRobot_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _StartRobot_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _StartRobot_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _StartRobot_SendGoal_type_support_symbol_names_t _StartRobot_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, eye_in_hand_interfaces, action, StartRobot_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, eye_in_hand_interfaces, action, StartRobot_SendGoal)),
  }
};

typedef struct _StartRobot_SendGoal_type_support_data_t
{
  void * data[2];
} _StartRobot_SendGoal_type_support_data_t;

static _StartRobot_SendGoal_type_support_data_t _StartRobot_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _StartRobot_SendGoal_service_typesupport_map = {
  2,
  "eye_in_hand_interfaces",
  &_StartRobot_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_StartRobot_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_StartRobot_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t StartRobot_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_StartRobot_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &StartRobot_SendGoal_Request_message_type_support_handle,
  &StartRobot_SendGoal_Response_message_type_support_handle,
  &StartRobot_SendGoal_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    eye_in_hand_interfaces,
    action,
    StartRobot_SendGoal
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    eye_in_hand_interfaces,
    action,
    StartRobot_SendGoal
  ),
  &eye_in_hand_interfaces__action__StartRobot_SendGoal__get_type_hash,
  &eye_in_hand_interfaces__action__StartRobot_SendGoal__get_type_description,
  &eye_in_hand_interfaces__action__StartRobot_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace eye_in_hand_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, eye_in_hand_interfaces, action, StartRobot_SendGoal)() {
  return &::eye_in_hand_interfaces::action::rosidl_typesupport_c::StartRobot_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "eye_in_hand_interfaces/action/detail/start_robot__struct.h"
// already included above
// #include "eye_in_hand_interfaces/action/detail/start_robot__type_support.h"
// already included above
// #include "eye_in_hand_interfaces/action/detail/start_robot__functions.h"
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

namespace eye_in_hand_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _StartRobot_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _StartRobot_GetResult_Request_type_support_ids_t;

static const _StartRobot_GetResult_Request_type_support_ids_t _StartRobot_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _StartRobot_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _StartRobot_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _StartRobot_GetResult_Request_type_support_symbol_names_t _StartRobot_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, eye_in_hand_interfaces, action, StartRobot_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, eye_in_hand_interfaces, action, StartRobot_GetResult_Request)),
  }
};

typedef struct _StartRobot_GetResult_Request_type_support_data_t
{
  void * data[2];
} _StartRobot_GetResult_Request_type_support_data_t;

static _StartRobot_GetResult_Request_type_support_data_t _StartRobot_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _StartRobot_GetResult_Request_message_typesupport_map = {
  2,
  "eye_in_hand_interfaces",
  &_StartRobot_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_StartRobot_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_StartRobot_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t StartRobot_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_StartRobot_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &eye_in_hand_interfaces__action__StartRobot_GetResult_Request__get_type_hash,
  &eye_in_hand_interfaces__action__StartRobot_GetResult_Request__get_type_description,
  &eye_in_hand_interfaces__action__StartRobot_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace eye_in_hand_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, eye_in_hand_interfaces, action, StartRobot_GetResult_Request)() {
  return &::eye_in_hand_interfaces::action::rosidl_typesupport_c::StartRobot_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "eye_in_hand_interfaces/action/detail/start_robot__struct.h"
// already included above
// #include "eye_in_hand_interfaces/action/detail/start_robot__type_support.h"
// already included above
// #include "eye_in_hand_interfaces/action/detail/start_robot__functions.h"
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

namespace eye_in_hand_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _StartRobot_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _StartRobot_GetResult_Response_type_support_ids_t;

static const _StartRobot_GetResult_Response_type_support_ids_t _StartRobot_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _StartRobot_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _StartRobot_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _StartRobot_GetResult_Response_type_support_symbol_names_t _StartRobot_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, eye_in_hand_interfaces, action, StartRobot_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, eye_in_hand_interfaces, action, StartRobot_GetResult_Response)),
  }
};

typedef struct _StartRobot_GetResult_Response_type_support_data_t
{
  void * data[2];
} _StartRobot_GetResult_Response_type_support_data_t;

static _StartRobot_GetResult_Response_type_support_data_t _StartRobot_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _StartRobot_GetResult_Response_message_typesupport_map = {
  2,
  "eye_in_hand_interfaces",
  &_StartRobot_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_StartRobot_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_StartRobot_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t StartRobot_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_StartRobot_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &eye_in_hand_interfaces__action__StartRobot_GetResult_Response__get_type_hash,
  &eye_in_hand_interfaces__action__StartRobot_GetResult_Response__get_type_description,
  &eye_in_hand_interfaces__action__StartRobot_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace eye_in_hand_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, eye_in_hand_interfaces, action, StartRobot_GetResult_Response)() {
  return &::eye_in_hand_interfaces::action::rosidl_typesupport_c::StartRobot_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "eye_in_hand_interfaces/action/detail/start_robot__struct.h"
// already included above
// #include "eye_in_hand_interfaces/action/detail/start_robot__type_support.h"
// already included above
// #include "eye_in_hand_interfaces/action/detail/start_robot__functions.h"
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

namespace eye_in_hand_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _StartRobot_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _StartRobot_GetResult_Event_type_support_ids_t;

static const _StartRobot_GetResult_Event_type_support_ids_t _StartRobot_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _StartRobot_GetResult_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _StartRobot_GetResult_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _StartRobot_GetResult_Event_type_support_symbol_names_t _StartRobot_GetResult_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, eye_in_hand_interfaces, action, StartRobot_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, eye_in_hand_interfaces, action, StartRobot_GetResult_Event)),
  }
};

typedef struct _StartRobot_GetResult_Event_type_support_data_t
{
  void * data[2];
} _StartRobot_GetResult_Event_type_support_data_t;

static _StartRobot_GetResult_Event_type_support_data_t _StartRobot_GetResult_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _StartRobot_GetResult_Event_message_typesupport_map = {
  2,
  "eye_in_hand_interfaces",
  &_StartRobot_GetResult_Event_message_typesupport_ids.typesupport_identifier[0],
  &_StartRobot_GetResult_Event_message_typesupport_symbol_names.symbol_name[0],
  &_StartRobot_GetResult_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t StartRobot_GetResult_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_StartRobot_GetResult_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &eye_in_hand_interfaces__action__StartRobot_GetResult_Event__get_type_hash,
  &eye_in_hand_interfaces__action__StartRobot_GetResult_Event__get_type_description,
  &eye_in_hand_interfaces__action__StartRobot_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace eye_in_hand_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, eye_in_hand_interfaces, action, StartRobot_GetResult_Event)() {
  return &::eye_in_hand_interfaces::action::rosidl_typesupport_c::StartRobot_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "eye_in_hand_interfaces/action/detail/start_robot__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "service_msgs/msg/service_event_info.h"
// already included above
// #include "builtin_interfaces/msg/time.h"

namespace eye_in_hand_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{
typedef struct _StartRobot_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _StartRobot_GetResult_type_support_ids_t;

static const _StartRobot_GetResult_type_support_ids_t _StartRobot_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _StartRobot_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _StartRobot_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _StartRobot_GetResult_type_support_symbol_names_t _StartRobot_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, eye_in_hand_interfaces, action, StartRobot_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, eye_in_hand_interfaces, action, StartRobot_GetResult)),
  }
};

typedef struct _StartRobot_GetResult_type_support_data_t
{
  void * data[2];
} _StartRobot_GetResult_type_support_data_t;

static _StartRobot_GetResult_type_support_data_t _StartRobot_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _StartRobot_GetResult_service_typesupport_map = {
  2,
  "eye_in_hand_interfaces",
  &_StartRobot_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_StartRobot_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_StartRobot_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t StartRobot_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_StartRobot_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &StartRobot_GetResult_Request_message_type_support_handle,
  &StartRobot_GetResult_Response_message_type_support_handle,
  &StartRobot_GetResult_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    eye_in_hand_interfaces,
    action,
    StartRobot_GetResult
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    eye_in_hand_interfaces,
    action,
    StartRobot_GetResult
  ),
  &eye_in_hand_interfaces__action__StartRobot_GetResult__get_type_hash,
  &eye_in_hand_interfaces__action__StartRobot_GetResult__get_type_description,
  &eye_in_hand_interfaces__action__StartRobot_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace eye_in_hand_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, eye_in_hand_interfaces, action, StartRobot_GetResult)() {
  return &::eye_in_hand_interfaces::action::rosidl_typesupport_c::StartRobot_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "eye_in_hand_interfaces/action/detail/start_robot__struct.h"
// already included above
// #include "eye_in_hand_interfaces/action/detail/start_robot__type_support.h"
// already included above
// #include "eye_in_hand_interfaces/action/detail/start_robot__functions.h"
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

namespace eye_in_hand_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _StartRobot_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _StartRobot_FeedbackMessage_type_support_ids_t;

static const _StartRobot_FeedbackMessage_type_support_ids_t _StartRobot_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _StartRobot_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _StartRobot_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _StartRobot_FeedbackMessage_type_support_symbol_names_t _StartRobot_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, eye_in_hand_interfaces, action, StartRobot_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, eye_in_hand_interfaces, action, StartRobot_FeedbackMessage)),
  }
};

typedef struct _StartRobot_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _StartRobot_FeedbackMessage_type_support_data_t;

static _StartRobot_FeedbackMessage_type_support_data_t _StartRobot_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _StartRobot_FeedbackMessage_message_typesupport_map = {
  2,
  "eye_in_hand_interfaces",
  &_StartRobot_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_StartRobot_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_StartRobot_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t StartRobot_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_StartRobot_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &eye_in_hand_interfaces__action__StartRobot_FeedbackMessage__get_type_hash,
  &eye_in_hand_interfaces__action__StartRobot_FeedbackMessage__get_type_description,
  &eye_in_hand_interfaces__action__StartRobot_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace eye_in_hand_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, eye_in_hand_interfaces, action, StartRobot_FeedbackMessage)() {
  return &::eye_in_hand_interfaces::action::rosidl_typesupport_c::StartRobot_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "eye_in_hand_interfaces/action/start_robot.h"
// already included above
// #include "eye_in_hand_interfaces/action/detail/start_robot__type_support.h"

static rosidl_action_type_support_t _eye_in_hand_interfaces__action__StartRobot__typesupport_c = {
  NULL, NULL, NULL, NULL, NULL,
  &eye_in_hand_interfaces__action__StartRobot__get_type_hash,
  &eye_in_hand_interfaces__action__StartRobot__get_type_description,
  &eye_in_hand_interfaces__action__StartRobot__get_type_description_sources,
};

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, eye_in_hand_interfaces, action, StartRobot)()
{
  // Thread-safe by always writing the same values to the static struct
  _eye_in_hand_interfaces__action__StartRobot__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, eye_in_hand_interfaces, action, StartRobot_SendGoal)();
  _eye_in_hand_interfaces__action__StartRobot__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, eye_in_hand_interfaces, action, StartRobot_GetResult)();
  _eye_in_hand_interfaces__action__StartRobot__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _eye_in_hand_interfaces__action__StartRobot__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, eye_in_hand_interfaces, action, StartRobot_FeedbackMessage)();
  _eye_in_hand_interfaces__action__StartRobot__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_eye_in_hand_interfaces__action__StartRobot__typesupport_c;
}

#ifdef __cplusplus
}
#endif
