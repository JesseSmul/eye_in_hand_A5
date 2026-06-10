// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from eye_in_hand_interfaces:action/StartRobot.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "eye_in_hand_interfaces/action/start_robot.hpp"


#ifndef EYE_IN_HAND_INTERFACES__ACTION__DETAIL__START_ROBOT__BUILDER_HPP_
#define EYE_IN_HAND_INTERFACES__ACTION__DETAIL__START_ROBOT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "eye_in_hand_interfaces/action/detail/start_robot__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace eye_in_hand_interfaces
{

namespace action
{

namespace builder
{

class Init_StartRobot_Goal_training_mode
{
public:
  Init_StartRobot_Goal_training_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::eye_in_hand_interfaces::action::StartRobot_Goal training_mode(::eye_in_hand_interfaces::action::StartRobot_Goal::_training_mode_type arg)
  {
    msg_.training_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::eye_in_hand_interfaces::action::StartRobot_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::eye_in_hand_interfaces::action::StartRobot_Goal>()
{
  return eye_in_hand_interfaces::action::builder::Init_StartRobot_Goal_training_mode();
}

}  // namespace eye_in_hand_interfaces


namespace eye_in_hand_interfaces
{

namespace action
{

namespace builder
{

class Init_StartRobot_Result_message
{
public:
  explicit Init_StartRobot_Result_message(::eye_in_hand_interfaces::action::StartRobot_Result & msg)
  : msg_(msg)
  {}
  ::eye_in_hand_interfaces::action::StartRobot_Result message(::eye_in_hand_interfaces::action::StartRobot_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::eye_in_hand_interfaces::action::StartRobot_Result msg_;
};

class Init_StartRobot_Result_success
{
public:
  Init_StartRobot_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StartRobot_Result_message success(::eye_in_hand_interfaces::action::StartRobot_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_StartRobot_Result_message(msg_);
  }

private:
  ::eye_in_hand_interfaces::action::StartRobot_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::eye_in_hand_interfaces::action::StartRobot_Result>()
{
  return eye_in_hand_interfaces::action::builder::Init_StartRobot_Result_success();
}

}  // namespace eye_in_hand_interfaces


namespace eye_in_hand_interfaces
{

namespace action
{

namespace builder
{

class Init_StartRobot_Feedback_feedback
{
public:
  Init_StartRobot_Feedback_feedback()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::eye_in_hand_interfaces::action::StartRobot_Feedback feedback(::eye_in_hand_interfaces::action::StartRobot_Feedback::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::eye_in_hand_interfaces::action::StartRobot_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::eye_in_hand_interfaces::action::StartRobot_Feedback>()
{
  return eye_in_hand_interfaces::action::builder::Init_StartRobot_Feedback_feedback();
}

}  // namespace eye_in_hand_interfaces


namespace eye_in_hand_interfaces
{

namespace action
{

namespace builder
{

class Init_StartRobot_SendGoal_Request_goal
{
public:
  explicit Init_StartRobot_SendGoal_Request_goal(::eye_in_hand_interfaces::action::StartRobot_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::eye_in_hand_interfaces::action::StartRobot_SendGoal_Request goal(::eye_in_hand_interfaces::action::StartRobot_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::eye_in_hand_interfaces::action::StartRobot_SendGoal_Request msg_;
};

class Init_StartRobot_SendGoal_Request_goal_id
{
public:
  Init_StartRobot_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StartRobot_SendGoal_Request_goal goal_id(::eye_in_hand_interfaces::action::StartRobot_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_StartRobot_SendGoal_Request_goal(msg_);
  }

private:
  ::eye_in_hand_interfaces::action::StartRobot_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::eye_in_hand_interfaces::action::StartRobot_SendGoal_Request>()
{
  return eye_in_hand_interfaces::action::builder::Init_StartRobot_SendGoal_Request_goal_id();
}

}  // namespace eye_in_hand_interfaces


namespace eye_in_hand_interfaces
{

namespace action
{

namespace builder
{

class Init_StartRobot_SendGoal_Response_stamp
{
public:
  explicit Init_StartRobot_SendGoal_Response_stamp(::eye_in_hand_interfaces::action::StartRobot_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::eye_in_hand_interfaces::action::StartRobot_SendGoal_Response stamp(::eye_in_hand_interfaces::action::StartRobot_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::eye_in_hand_interfaces::action::StartRobot_SendGoal_Response msg_;
};

class Init_StartRobot_SendGoal_Response_accepted
{
public:
  Init_StartRobot_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StartRobot_SendGoal_Response_stamp accepted(::eye_in_hand_interfaces::action::StartRobot_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_StartRobot_SendGoal_Response_stamp(msg_);
  }

private:
  ::eye_in_hand_interfaces::action::StartRobot_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::eye_in_hand_interfaces::action::StartRobot_SendGoal_Response>()
{
  return eye_in_hand_interfaces::action::builder::Init_StartRobot_SendGoal_Response_accepted();
}

}  // namespace eye_in_hand_interfaces


namespace eye_in_hand_interfaces
{

namespace action
{

namespace builder
{

class Init_StartRobot_SendGoal_Event_response
{
public:
  explicit Init_StartRobot_SendGoal_Event_response(::eye_in_hand_interfaces::action::StartRobot_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::eye_in_hand_interfaces::action::StartRobot_SendGoal_Event response(::eye_in_hand_interfaces::action::StartRobot_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::eye_in_hand_interfaces::action::StartRobot_SendGoal_Event msg_;
};

class Init_StartRobot_SendGoal_Event_request
{
public:
  explicit Init_StartRobot_SendGoal_Event_request(::eye_in_hand_interfaces::action::StartRobot_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_StartRobot_SendGoal_Event_response request(::eye_in_hand_interfaces::action::StartRobot_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_StartRobot_SendGoal_Event_response(msg_);
  }

private:
  ::eye_in_hand_interfaces::action::StartRobot_SendGoal_Event msg_;
};

class Init_StartRobot_SendGoal_Event_info
{
public:
  Init_StartRobot_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StartRobot_SendGoal_Event_request info(::eye_in_hand_interfaces::action::StartRobot_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_StartRobot_SendGoal_Event_request(msg_);
  }

private:
  ::eye_in_hand_interfaces::action::StartRobot_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::eye_in_hand_interfaces::action::StartRobot_SendGoal_Event>()
{
  return eye_in_hand_interfaces::action::builder::Init_StartRobot_SendGoal_Event_info();
}

}  // namespace eye_in_hand_interfaces


namespace eye_in_hand_interfaces
{

namespace action
{

namespace builder
{

class Init_StartRobot_GetResult_Request_goal_id
{
public:
  Init_StartRobot_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::eye_in_hand_interfaces::action::StartRobot_GetResult_Request goal_id(::eye_in_hand_interfaces::action::StartRobot_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::eye_in_hand_interfaces::action::StartRobot_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::eye_in_hand_interfaces::action::StartRobot_GetResult_Request>()
{
  return eye_in_hand_interfaces::action::builder::Init_StartRobot_GetResult_Request_goal_id();
}

}  // namespace eye_in_hand_interfaces


namespace eye_in_hand_interfaces
{

namespace action
{

namespace builder
{

class Init_StartRobot_GetResult_Response_result
{
public:
  explicit Init_StartRobot_GetResult_Response_result(::eye_in_hand_interfaces::action::StartRobot_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::eye_in_hand_interfaces::action::StartRobot_GetResult_Response result(::eye_in_hand_interfaces::action::StartRobot_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::eye_in_hand_interfaces::action::StartRobot_GetResult_Response msg_;
};

class Init_StartRobot_GetResult_Response_status
{
public:
  Init_StartRobot_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StartRobot_GetResult_Response_result status(::eye_in_hand_interfaces::action::StartRobot_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_StartRobot_GetResult_Response_result(msg_);
  }

private:
  ::eye_in_hand_interfaces::action::StartRobot_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::eye_in_hand_interfaces::action::StartRobot_GetResult_Response>()
{
  return eye_in_hand_interfaces::action::builder::Init_StartRobot_GetResult_Response_status();
}

}  // namespace eye_in_hand_interfaces


namespace eye_in_hand_interfaces
{

namespace action
{

namespace builder
{

class Init_StartRobot_GetResult_Event_response
{
public:
  explicit Init_StartRobot_GetResult_Event_response(::eye_in_hand_interfaces::action::StartRobot_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::eye_in_hand_interfaces::action::StartRobot_GetResult_Event response(::eye_in_hand_interfaces::action::StartRobot_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::eye_in_hand_interfaces::action::StartRobot_GetResult_Event msg_;
};

class Init_StartRobot_GetResult_Event_request
{
public:
  explicit Init_StartRobot_GetResult_Event_request(::eye_in_hand_interfaces::action::StartRobot_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_StartRobot_GetResult_Event_response request(::eye_in_hand_interfaces::action::StartRobot_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_StartRobot_GetResult_Event_response(msg_);
  }

private:
  ::eye_in_hand_interfaces::action::StartRobot_GetResult_Event msg_;
};

class Init_StartRobot_GetResult_Event_info
{
public:
  Init_StartRobot_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StartRobot_GetResult_Event_request info(::eye_in_hand_interfaces::action::StartRobot_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_StartRobot_GetResult_Event_request(msg_);
  }

private:
  ::eye_in_hand_interfaces::action::StartRobot_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::eye_in_hand_interfaces::action::StartRobot_GetResult_Event>()
{
  return eye_in_hand_interfaces::action::builder::Init_StartRobot_GetResult_Event_info();
}

}  // namespace eye_in_hand_interfaces


namespace eye_in_hand_interfaces
{

namespace action
{

namespace builder
{

class Init_StartRobot_FeedbackMessage_feedback
{
public:
  explicit Init_StartRobot_FeedbackMessage_feedback(::eye_in_hand_interfaces::action::StartRobot_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::eye_in_hand_interfaces::action::StartRobot_FeedbackMessage feedback(::eye_in_hand_interfaces::action::StartRobot_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::eye_in_hand_interfaces::action::StartRobot_FeedbackMessage msg_;
};

class Init_StartRobot_FeedbackMessage_goal_id
{
public:
  Init_StartRobot_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StartRobot_FeedbackMessage_feedback goal_id(::eye_in_hand_interfaces::action::StartRobot_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_StartRobot_FeedbackMessage_feedback(msg_);
  }

private:
  ::eye_in_hand_interfaces::action::StartRobot_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::eye_in_hand_interfaces::action::StartRobot_FeedbackMessage>()
{
  return eye_in_hand_interfaces::action::builder::Init_StartRobot_FeedbackMessage_goal_id();
}

}  // namespace eye_in_hand_interfaces

#endif  // EYE_IN_HAND_INTERFACES__ACTION__DETAIL__START_ROBOT__BUILDER_HPP_
