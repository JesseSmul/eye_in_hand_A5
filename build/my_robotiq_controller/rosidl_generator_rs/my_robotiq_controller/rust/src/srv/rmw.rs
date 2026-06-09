#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "my_robotiq_controller__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_robotiq_controller__srv__SetForce_Request() -> *const std::ffi::c_void;
}

#[link(name = "my_robotiq_controller__rosidl_generator_c")]
extern "C" {
    fn my_robotiq_controller__srv__SetForce_Request__init(msg: *mut SetForce_Request) -> bool;
    fn my_robotiq_controller__srv__SetForce_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetForce_Request>, size: usize) -> bool;
    fn my_robotiq_controller__srv__SetForce_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetForce_Request>);
    fn my_robotiq_controller__srv__SetForce_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetForce_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetForce_Request>) -> bool;
}

// Corresponds to my_robotiq_controller__srv__SetForce_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetForce_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub force: u8,

}



impl Default for SetForce_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_robotiq_controller__srv__SetForce_Request__init(&mut msg as *mut _) {
        panic!("Call to my_robotiq_controller__srv__SetForce_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetForce_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_robotiq_controller__srv__SetForce_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_robotiq_controller__srv__SetForce_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_robotiq_controller__srv__SetForce_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetForce_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetForce_Request where Self: Sized {
  const TYPE_NAME: &'static str = "my_robotiq_controller/srv/SetForce_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_robotiq_controller__srv__SetForce_Request() }
  }
}


#[link(name = "my_robotiq_controller__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_robotiq_controller__srv__SetForce_Response() -> *const std::ffi::c_void;
}

#[link(name = "my_robotiq_controller__rosidl_generator_c")]
extern "C" {
    fn my_robotiq_controller__srv__SetForce_Response__init(msg: *mut SetForce_Response) -> bool;
    fn my_robotiq_controller__srv__SetForce_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetForce_Response>, size: usize) -> bool;
    fn my_robotiq_controller__srv__SetForce_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetForce_Response>);
    fn my_robotiq_controller__srv__SetForce_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetForce_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetForce_Response>) -> bool;
}

// Corresponds to my_robotiq_controller__srv__SetForce_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetForce_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for SetForce_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_robotiq_controller__srv__SetForce_Response__init(&mut msg as *mut _) {
        panic!("Call to my_robotiq_controller__srv__SetForce_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetForce_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_robotiq_controller__srv__SetForce_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_robotiq_controller__srv__SetForce_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_robotiq_controller__srv__SetForce_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetForce_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetForce_Response where Self: Sized {
  const TYPE_NAME: &'static str = "my_robotiq_controller/srv/SetForce_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_robotiq_controller__srv__SetForce_Response() }
  }
}


#[link(name = "my_robotiq_controller__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_robotiq_controller__srv__SetSpeed_Request() -> *const std::ffi::c_void;
}

#[link(name = "my_robotiq_controller__rosidl_generator_c")]
extern "C" {
    fn my_robotiq_controller__srv__SetSpeed_Request__init(msg: *mut SetSpeed_Request) -> bool;
    fn my_robotiq_controller__srv__SetSpeed_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetSpeed_Request>, size: usize) -> bool;
    fn my_robotiq_controller__srv__SetSpeed_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetSpeed_Request>);
    fn my_robotiq_controller__srv__SetSpeed_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetSpeed_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetSpeed_Request>) -> bool;
}

// Corresponds to my_robotiq_controller__srv__SetSpeed_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetSpeed_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub speed: u8,

}



impl Default for SetSpeed_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_robotiq_controller__srv__SetSpeed_Request__init(&mut msg as *mut _) {
        panic!("Call to my_robotiq_controller__srv__SetSpeed_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetSpeed_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_robotiq_controller__srv__SetSpeed_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_robotiq_controller__srv__SetSpeed_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_robotiq_controller__srv__SetSpeed_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetSpeed_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetSpeed_Request where Self: Sized {
  const TYPE_NAME: &'static str = "my_robotiq_controller/srv/SetSpeed_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_robotiq_controller__srv__SetSpeed_Request() }
  }
}


#[link(name = "my_robotiq_controller__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_robotiq_controller__srv__SetSpeed_Response() -> *const std::ffi::c_void;
}

#[link(name = "my_robotiq_controller__rosidl_generator_c")]
extern "C" {
    fn my_robotiq_controller__srv__SetSpeed_Response__init(msg: *mut SetSpeed_Response) -> bool;
    fn my_robotiq_controller__srv__SetSpeed_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetSpeed_Response>, size: usize) -> bool;
    fn my_robotiq_controller__srv__SetSpeed_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetSpeed_Response>);
    fn my_robotiq_controller__srv__SetSpeed_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetSpeed_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetSpeed_Response>) -> bool;
}

// Corresponds to my_robotiq_controller__srv__SetSpeed_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetSpeed_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for SetSpeed_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_robotiq_controller__srv__SetSpeed_Response__init(&mut msg as *mut _) {
        panic!("Call to my_robotiq_controller__srv__SetSpeed_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetSpeed_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_robotiq_controller__srv__SetSpeed_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_robotiq_controller__srv__SetSpeed_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_robotiq_controller__srv__SetSpeed_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetSpeed_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetSpeed_Response where Self: Sized {
  const TYPE_NAME: &'static str = "my_robotiq_controller/srv/SetSpeed_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_robotiq_controller__srv__SetSpeed_Response() }
  }
}






#[link(name = "my_robotiq_controller__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__my_robotiq_controller__srv__SetForce() -> *const std::ffi::c_void;
}

// Corresponds to my_robotiq_controller__srv__SetForce
#[allow(missing_docs, non_camel_case_types)]
pub struct SetForce;

impl rosidl_runtime_rs::Service for SetForce {
    type Request = SetForce_Request;
    type Response = SetForce_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__my_robotiq_controller__srv__SetForce() }
    }
}




#[link(name = "my_robotiq_controller__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__my_robotiq_controller__srv__SetSpeed() -> *const std::ffi::c_void;
}

// Corresponds to my_robotiq_controller__srv__SetSpeed
#[allow(missing_docs, non_camel_case_types)]
pub struct SetSpeed;

impl rosidl_runtime_rs::Service for SetSpeed {
    type Request = SetSpeed_Request;
    type Response = SetSpeed_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__my_robotiq_controller__srv__SetSpeed() }
    }
}


