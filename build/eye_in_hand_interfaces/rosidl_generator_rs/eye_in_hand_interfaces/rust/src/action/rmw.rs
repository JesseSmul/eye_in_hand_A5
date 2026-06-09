
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "eye_in_hand_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__eye_in_hand_interfaces__action__StartRobot_Goal() -> *const std::ffi::c_void;
}

#[link(name = "eye_in_hand_interfaces__rosidl_generator_c")]
extern "C" {
    fn eye_in_hand_interfaces__action__StartRobot_Goal__init(msg: *mut StartRobot_Goal) -> bool;
    fn eye_in_hand_interfaces__action__StartRobot_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<StartRobot_Goal>, size: usize) -> bool;
    fn eye_in_hand_interfaces__action__StartRobot_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<StartRobot_Goal>);
    fn eye_in_hand_interfaces__action__StartRobot_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<StartRobot_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<StartRobot_Goal>) -> bool;
}

// Corresponds to eye_in_hand_interfaces__action__StartRobot_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StartRobot_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub training_mode: bool,

}



impl Default for StartRobot_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !eye_in_hand_interfaces__action__StartRobot_Goal__init(&mut msg as *mut _) {
        panic!("Call to eye_in_hand_interfaces__action__StartRobot_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for StartRobot_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eye_in_hand_interfaces__action__StartRobot_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eye_in_hand_interfaces__action__StartRobot_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eye_in_hand_interfaces__action__StartRobot_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for StartRobot_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for StartRobot_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "eye_in_hand_interfaces/action/StartRobot_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__eye_in_hand_interfaces__action__StartRobot_Goal() }
  }
}


#[link(name = "eye_in_hand_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__eye_in_hand_interfaces__action__StartRobot_Result() -> *const std::ffi::c_void;
}

#[link(name = "eye_in_hand_interfaces__rosidl_generator_c")]
extern "C" {
    fn eye_in_hand_interfaces__action__StartRobot_Result__init(msg: *mut StartRobot_Result) -> bool;
    fn eye_in_hand_interfaces__action__StartRobot_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<StartRobot_Result>, size: usize) -> bool;
    fn eye_in_hand_interfaces__action__StartRobot_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<StartRobot_Result>);
    fn eye_in_hand_interfaces__action__StartRobot_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<StartRobot_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<StartRobot_Result>) -> bool;
}

// Corresponds to eye_in_hand_interfaces__action__StartRobot_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StartRobot_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for StartRobot_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !eye_in_hand_interfaces__action__StartRobot_Result__init(&mut msg as *mut _) {
        panic!("Call to eye_in_hand_interfaces__action__StartRobot_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for StartRobot_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eye_in_hand_interfaces__action__StartRobot_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eye_in_hand_interfaces__action__StartRobot_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eye_in_hand_interfaces__action__StartRobot_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for StartRobot_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for StartRobot_Result where Self: Sized {
  const TYPE_NAME: &'static str = "eye_in_hand_interfaces/action/StartRobot_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__eye_in_hand_interfaces__action__StartRobot_Result() }
  }
}


#[link(name = "eye_in_hand_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__eye_in_hand_interfaces__action__StartRobot_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "eye_in_hand_interfaces__rosidl_generator_c")]
extern "C" {
    fn eye_in_hand_interfaces__action__StartRobot_Feedback__init(msg: *mut StartRobot_Feedback) -> bool;
    fn eye_in_hand_interfaces__action__StartRobot_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<StartRobot_Feedback>, size: usize) -> bool;
    fn eye_in_hand_interfaces__action__StartRobot_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<StartRobot_Feedback>);
    fn eye_in_hand_interfaces__action__StartRobot_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<StartRobot_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<StartRobot_Feedback>) -> bool;
}

// Corresponds to eye_in_hand_interfaces__action__StartRobot_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StartRobot_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: rosidl_runtime_rs::String,

}



impl Default for StartRobot_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !eye_in_hand_interfaces__action__StartRobot_Feedback__init(&mut msg as *mut _) {
        panic!("Call to eye_in_hand_interfaces__action__StartRobot_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for StartRobot_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eye_in_hand_interfaces__action__StartRobot_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eye_in_hand_interfaces__action__StartRobot_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eye_in_hand_interfaces__action__StartRobot_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for StartRobot_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for StartRobot_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "eye_in_hand_interfaces/action/StartRobot_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__eye_in_hand_interfaces__action__StartRobot_Feedback() }
  }
}


#[link(name = "eye_in_hand_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__eye_in_hand_interfaces__action__StartRobot_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "eye_in_hand_interfaces__rosidl_generator_c")]
extern "C" {
    fn eye_in_hand_interfaces__action__StartRobot_FeedbackMessage__init(msg: *mut StartRobot_FeedbackMessage) -> bool;
    fn eye_in_hand_interfaces__action__StartRobot_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<StartRobot_FeedbackMessage>, size: usize) -> bool;
    fn eye_in_hand_interfaces__action__StartRobot_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<StartRobot_FeedbackMessage>);
    fn eye_in_hand_interfaces__action__StartRobot_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<StartRobot_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<StartRobot_FeedbackMessage>) -> bool;
}

// Corresponds to eye_in_hand_interfaces__action__StartRobot_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StartRobot_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::StartRobot_Feedback,

}



impl Default for StartRobot_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !eye_in_hand_interfaces__action__StartRobot_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to eye_in_hand_interfaces__action__StartRobot_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for StartRobot_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eye_in_hand_interfaces__action__StartRobot_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eye_in_hand_interfaces__action__StartRobot_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eye_in_hand_interfaces__action__StartRobot_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for StartRobot_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for StartRobot_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "eye_in_hand_interfaces/action/StartRobot_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__eye_in_hand_interfaces__action__StartRobot_FeedbackMessage() }
  }
}




#[link(name = "eye_in_hand_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__eye_in_hand_interfaces__action__StartRobot_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "eye_in_hand_interfaces__rosidl_generator_c")]
extern "C" {
    fn eye_in_hand_interfaces__action__StartRobot_SendGoal_Request__init(msg: *mut StartRobot_SendGoal_Request) -> bool;
    fn eye_in_hand_interfaces__action__StartRobot_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<StartRobot_SendGoal_Request>, size: usize) -> bool;
    fn eye_in_hand_interfaces__action__StartRobot_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<StartRobot_SendGoal_Request>);
    fn eye_in_hand_interfaces__action__StartRobot_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<StartRobot_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<StartRobot_SendGoal_Request>) -> bool;
}

// Corresponds to eye_in_hand_interfaces__action__StartRobot_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StartRobot_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::StartRobot_Goal,

}



impl Default for StartRobot_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !eye_in_hand_interfaces__action__StartRobot_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to eye_in_hand_interfaces__action__StartRobot_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for StartRobot_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eye_in_hand_interfaces__action__StartRobot_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eye_in_hand_interfaces__action__StartRobot_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eye_in_hand_interfaces__action__StartRobot_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for StartRobot_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for StartRobot_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "eye_in_hand_interfaces/action/StartRobot_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__eye_in_hand_interfaces__action__StartRobot_SendGoal_Request() }
  }
}


#[link(name = "eye_in_hand_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__eye_in_hand_interfaces__action__StartRobot_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "eye_in_hand_interfaces__rosidl_generator_c")]
extern "C" {
    fn eye_in_hand_interfaces__action__StartRobot_SendGoal_Response__init(msg: *mut StartRobot_SendGoal_Response) -> bool;
    fn eye_in_hand_interfaces__action__StartRobot_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<StartRobot_SendGoal_Response>, size: usize) -> bool;
    fn eye_in_hand_interfaces__action__StartRobot_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<StartRobot_SendGoal_Response>);
    fn eye_in_hand_interfaces__action__StartRobot_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<StartRobot_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<StartRobot_SendGoal_Response>) -> bool;
}

// Corresponds to eye_in_hand_interfaces__action__StartRobot_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StartRobot_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for StartRobot_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !eye_in_hand_interfaces__action__StartRobot_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to eye_in_hand_interfaces__action__StartRobot_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for StartRobot_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eye_in_hand_interfaces__action__StartRobot_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eye_in_hand_interfaces__action__StartRobot_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eye_in_hand_interfaces__action__StartRobot_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for StartRobot_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for StartRobot_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "eye_in_hand_interfaces/action/StartRobot_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__eye_in_hand_interfaces__action__StartRobot_SendGoal_Response() }
  }
}


#[link(name = "eye_in_hand_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__eye_in_hand_interfaces__action__StartRobot_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "eye_in_hand_interfaces__rosidl_generator_c")]
extern "C" {
    fn eye_in_hand_interfaces__action__StartRobot_GetResult_Request__init(msg: *mut StartRobot_GetResult_Request) -> bool;
    fn eye_in_hand_interfaces__action__StartRobot_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<StartRobot_GetResult_Request>, size: usize) -> bool;
    fn eye_in_hand_interfaces__action__StartRobot_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<StartRobot_GetResult_Request>);
    fn eye_in_hand_interfaces__action__StartRobot_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<StartRobot_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<StartRobot_GetResult_Request>) -> bool;
}

// Corresponds to eye_in_hand_interfaces__action__StartRobot_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StartRobot_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for StartRobot_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !eye_in_hand_interfaces__action__StartRobot_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to eye_in_hand_interfaces__action__StartRobot_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for StartRobot_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eye_in_hand_interfaces__action__StartRobot_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eye_in_hand_interfaces__action__StartRobot_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eye_in_hand_interfaces__action__StartRobot_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for StartRobot_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for StartRobot_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "eye_in_hand_interfaces/action/StartRobot_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__eye_in_hand_interfaces__action__StartRobot_GetResult_Request() }
  }
}


#[link(name = "eye_in_hand_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__eye_in_hand_interfaces__action__StartRobot_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "eye_in_hand_interfaces__rosidl_generator_c")]
extern "C" {
    fn eye_in_hand_interfaces__action__StartRobot_GetResult_Response__init(msg: *mut StartRobot_GetResult_Response) -> bool;
    fn eye_in_hand_interfaces__action__StartRobot_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<StartRobot_GetResult_Response>, size: usize) -> bool;
    fn eye_in_hand_interfaces__action__StartRobot_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<StartRobot_GetResult_Response>);
    fn eye_in_hand_interfaces__action__StartRobot_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<StartRobot_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<StartRobot_GetResult_Response>) -> bool;
}

// Corresponds to eye_in_hand_interfaces__action__StartRobot_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StartRobot_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::StartRobot_Result,

}



impl Default for StartRobot_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !eye_in_hand_interfaces__action__StartRobot_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to eye_in_hand_interfaces__action__StartRobot_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for StartRobot_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eye_in_hand_interfaces__action__StartRobot_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eye_in_hand_interfaces__action__StartRobot_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eye_in_hand_interfaces__action__StartRobot_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for StartRobot_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for StartRobot_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "eye_in_hand_interfaces/action/StartRobot_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__eye_in_hand_interfaces__action__StartRobot_GetResult_Response() }
  }
}






#[link(name = "eye_in_hand_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__eye_in_hand_interfaces__action__StartRobot_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to eye_in_hand_interfaces__action__StartRobot_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct StartRobot_SendGoal;

impl rosidl_runtime_rs::Service for StartRobot_SendGoal {
    type Request = StartRobot_SendGoal_Request;
    type Response = StartRobot_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__eye_in_hand_interfaces__action__StartRobot_SendGoal() }
    }
}




#[link(name = "eye_in_hand_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__eye_in_hand_interfaces__action__StartRobot_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to eye_in_hand_interfaces__action__StartRobot_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct StartRobot_GetResult;

impl rosidl_runtime_rs::Service for StartRobot_GetResult {
    type Request = StartRobot_GetResult_Request;
    type Response = StartRobot_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__eye_in_hand_interfaces__action__StartRobot_GetResult() }
    }
}


