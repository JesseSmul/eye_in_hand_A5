// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_robotiq_controller:srv/SetSpeed.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_robotiq_controller/srv/set_speed.hpp"


#ifndef MY_ROBOTIQ_CONTROLLER__SRV__DETAIL__SET_SPEED__BUILDER_HPP_
#define MY_ROBOTIQ_CONTROLLER__SRV__DETAIL__SET_SPEED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_robotiq_controller/srv/detail/set_speed__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_robotiq_controller
{

namespace srv
{

namespace builder
{

class Init_SetSpeed_Request_speed
{
public:
  Init_SetSpeed_Request_speed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_robotiq_controller::srv::SetSpeed_Request speed(::my_robotiq_controller::srv::SetSpeed_Request::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robotiq_controller::srv::SetSpeed_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robotiq_controller::srv::SetSpeed_Request>()
{
  return my_robotiq_controller::srv::builder::Init_SetSpeed_Request_speed();
}

}  // namespace my_robotiq_controller


namespace my_robotiq_controller
{

namespace srv
{

namespace builder
{

class Init_SetSpeed_Response_message
{
public:
  explicit Init_SetSpeed_Response_message(::my_robotiq_controller::srv::SetSpeed_Response & msg)
  : msg_(msg)
  {}
  ::my_robotiq_controller::srv::SetSpeed_Response message(::my_robotiq_controller::srv::SetSpeed_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robotiq_controller::srv::SetSpeed_Response msg_;
};

class Init_SetSpeed_Response_success
{
public:
  Init_SetSpeed_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetSpeed_Response_message success(::my_robotiq_controller::srv::SetSpeed_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetSpeed_Response_message(msg_);
  }

private:
  ::my_robotiq_controller::srv::SetSpeed_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robotiq_controller::srv::SetSpeed_Response>()
{
  return my_robotiq_controller::srv::builder::Init_SetSpeed_Response_success();
}

}  // namespace my_robotiq_controller


namespace my_robotiq_controller
{

namespace srv
{

namespace builder
{

class Init_SetSpeed_Event_response
{
public:
  explicit Init_SetSpeed_Event_response(::my_robotiq_controller::srv::SetSpeed_Event & msg)
  : msg_(msg)
  {}
  ::my_robotiq_controller::srv::SetSpeed_Event response(::my_robotiq_controller::srv::SetSpeed_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robotiq_controller::srv::SetSpeed_Event msg_;
};

class Init_SetSpeed_Event_request
{
public:
  explicit Init_SetSpeed_Event_request(::my_robotiq_controller::srv::SetSpeed_Event & msg)
  : msg_(msg)
  {}
  Init_SetSpeed_Event_response request(::my_robotiq_controller::srv::SetSpeed_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetSpeed_Event_response(msg_);
  }

private:
  ::my_robotiq_controller::srv::SetSpeed_Event msg_;
};

class Init_SetSpeed_Event_info
{
public:
  Init_SetSpeed_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetSpeed_Event_request info(::my_robotiq_controller::srv::SetSpeed_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetSpeed_Event_request(msg_);
  }

private:
  ::my_robotiq_controller::srv::SetSpeed_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robotiq_controller::srv::SetSpeed_Event>()
{
  return my_robotiq_controller::srv::builder::Init_SetSpeed_Event_info();
}

}  // namespace my_robotiq_controller

#endif  // MY_ROBOTIQ_CONTROLLER__SRV__DETAIL__SET_SPEED__BUILDER_HPP_
