// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from eye_in_hand_interfaces:action/StartRobot.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "eye_in_hand_interfaces/action/start_robot.h"


#ifndef EYE_IN_HAND_INTERFACES__ACTION__DETAIL__START_ROBOT__STRUCT_H_
#define EYE_IN_HAND_INTERFACES__ACTION__DETAIL__START_ROBOT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/StartRobot in the package eye_in_hand_interfaces.
typedef struct eye_in_hand_interfaces__action__StartRobot_Goal
{
  bool training_mode;
} eye_in_hand_interfaces__action__StartRobot_Goal;

// Struct for a sequence of eye_in_hand_interfaces__action__StartRobot_Goal.
typedef struct eye_in_hand_interfaces__action__StartRobot_Goal__Sequence
{
  eye_in_hand_interfaces__action__StartRobot_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} eye_in_hand_interfaces__action__StartRobot_Goal__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/StartRobot in the package eye_in_hand_interfaces.
typedef struct eye_in_hand_interfaces__action__StartRobot_Result
{
  bool success;
  rosidl_runtime_c__String message;
} eye_in_hand_interfaces__action__StartRobot_Result;

// Struct for a sequence of eye_in_hand_interfaces__action__StartRobot_Result.
typedef struct eye_in_hand_interfaces__action__StartRobot_Result__Sequence
{
  eye_in_hand_interfaces__action__StartRobot_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} eye_in_hand_interfaces__action__StartRobot_Result__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'feedback'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/StartRobot in the package eye_in_hand_interfaces.
typedef struct eye_in_hand_interfaces__action__StartRobot_Feedback
{
  rosidl_runtime_c__String feedback;
} eye_in_hand_interfaces__action__StartRobot_Feedback;

// Struct for a sequence of eye_in_hand_interfaces__action__StartRobot_Feedback.
typedef struct eye_in_hand_interfaces__action__StartRobot_Feedback__Sequence
{
  eye_in_hand_interfaces__action__StartRobot_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} eye_in_hand_interfaces__action__StartRobot_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "eye_in_hand_interfaces/action/detail/start_robot__struct.h"

/// Struct defined in action/StartRobot in the package eye_in_hand_interfaces.
typedef struct eye_in_hand_interfaces__action__StartRobot_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  eye_in_hand_interfaces__action__StartRobot_Goal goal;
} eye_in_hand_interfaces__action__StartRobot_SendGoal_Request;

// Struct for a sequence of eye_in_hand_interfaces__action__StartRobot_SendGoal_Request.
typedef struct eye_in_hand_interfaces__action__StartRobot_SendGoal_Request__Sequence
{
  eye_in_hand_interfaces__action__StartRobot_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} eye_in_hand_interfaces__action__StartRobot_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/StartRobot in the package eye_in_hand_interfaces.
typedef struct eye_in_hand_interfaces__action__StartRobot_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} eye_in_hand_interfaces__action__StartRobot_SendGoal_Response;

// Struct for a sequence of eye_in_hand_interfaces__action__StartRobot_SendGoal_Response.
typedef struct eye_in_hand_interfaces__action__StartRobot_SendGoal_Response__Sequence
{
  eye_in_hand_interfaces__action__StartRobot_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} eye_in_hand_interfaces__action__StartRobot_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  eye_in_hand_interfaces__action__StartRobot_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  eye_in_hand_interfaces__action__StartRobot_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/StartRobot in the package eye_in_hand_interfaces.
typedef struct eye_in_hand_interfaces__action__StartRobot_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  eye_in_hand_interfaces__action__StartRobot_SendGoal_Request__Sequence request;
  eye_in_hand_interfaces__action__StartRobot_SendGoal_Response__Sequence response;
} eye_in_hand_interfaces__action__StartRobot_SendGoal_Event;

// Struct for a sequence of eye_in_hand_interfaces__action__StartRobot_SendGoal_Event.
typedef struct eye_in_hand_interfaces__action__StartRobot_SendGoal_Event__Sequence
{
  eye_in_hand_interfaces__action__StartRobot_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} eye_in_hand_interfaces__action__StartRobot_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/StartRobot in the package eye_in_hand_interfaces.
typedef struct eye_in_hand_interfaces__action__StartRobot_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} eye_in_hand_interfaces__action__StartRobot_GetResult_Request;

// Struct for a sequence of eye_in_hand_interfaces__action__StartRobot_GetResult_Request.
typedef struct eye_in_hand_interfaces__action__StartRobot_GetResult_Request__Sequence
{
  eye_in_hand_interfaces__action__StartRobot_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} eye_in_hand_interfaces__action__StartRobot_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "eye_in_hand_interfaces/action/detail/start_robot__struct.h"

/// Struct defined in action/StartRobot in the package eye_in_hand_interfaces.
typedef struct eye_in_hand_interfaces__action__StartRobot_GetResult_Response
{
  int8_t status;
  eye_in_hand_interfaces__action__StartRobot_Result result;
} eye_in_hand_interfaces__action__StartRobot_GetResult_Response;

// Struct for a sequence of eye_in_hand_interfaces__action__StartRobot_GetResult_Response.
typedef struct eye_in_hand_interfaces__action__StartRobot_GetResult_Response__Sequence
{
  eye_in_hand_interfaces__action__StartRobot_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} eye_in_hand_interfaces__action__StartRobot_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  eye_in_hand_interfaces__action__StartRobot_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  eye_in_hand_interfaces__action__StartRobot_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/StartRobot in the package eye_in_hand_interfaces.
typedef struct eye_in_hand_interfaces__action__StartRobot_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  eye_in_hand_interfaces__action__StartRobot_GetResult_Request__Sequence request;
  eye_in_hand_interfaces__action__StartRobot_GetResult_Response__Sequence response;
} eye_in_hand_interfaces__action__StartRobot_GetResult_Event;

// Struct for a sequence of eye_in_hand_interfaces__action__StartRobot_GetResult_Event.
typedef struct eye_in_hand_interfaces__action__StartRobot_GetResult_Event__Sequence
{
  eye_in_hand_interfaces__action__StartRobot_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} eye_in_hand_interfaces__action__StartRobot_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "eye_in_hand_interfaces/action/detail/start_robot__struct.h"

/// Struct defined in action/StartRobot in the package eye_in_hand_interfaces.
typedef struct eye_in_hand_interfaces__action__StartRobot_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  eye_in_hand_interfaces__action__StartRobot_Feedback feedback;
} eye_in_hand_interfaces__action__StartRobot_FeedbackMessage;

// Struct for a sequence of eye_in_hand_interfaces__action__StartRobot_FeedbackMessage.
typedef struct eye_in_hand_interfaces__action__StartRobot_FeedbackMessage__Sequence
{
  eye_in_hand_interfaces__action__StartRobot_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} eye_in_hand_interfaces__action__StartRobot_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EYE_IN_HAND_INTERFACES__ACTION__DETAIL__START_ROBOT__STRUCT_H_
