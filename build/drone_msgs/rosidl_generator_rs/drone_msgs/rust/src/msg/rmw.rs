#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "drone_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__drone_msgs__msg__DroneState() -> *const std::ffi::c_void;
}

#[link(name = "drone_msgs__rosidl_generator_c")]
extern "C" {
    fn drone_msgs__msg__DroneState__init(msg: *mut DroneState) -> bool;
    fn drone_msgs__msg__DroneState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DroneState>, size: usize) -> bool;
    fn drone_msgs__msg__DroneState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DroneState>);
    fn drone_msgs__msg__DroneState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DroneState>, out_seq: *mut rosidl_runtime_rs::Sequence<DroneState>) -> bool;
}

// Corresponds to drone_msgs__msg__DroneState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DroneState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub drone_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pose: geometry_msgs::msg::rmw::Pose,


    // This member is not documented.
    #[allow(missing_docs)]
    pub battery: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub moving: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_primitive_index: u32,

}



impl Default for DroneState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !drone_msgs__msg__DroneState__init(&mut msg as *mut _) {
        panic!("Call to drone_msgs__msg__DroneState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DroneState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { drone_msgs__msg__DroneState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { drone_msgs__msg__DroneState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { drone_msgs__msg__DroneState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DroneState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DroneState where Self: Sized {
  const TYPE_NAME: &'static str = "drone_msgs/msg/DroneState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__drone_msgs__msg__DroneState() }
  }
}


#[link(name = "drone_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__drone_msgs__msg__Primitive() -> *const std::ffi::c_void;
}

#[link(name = "drone_msgs__rosidl_generator_c")]
extern "C" {
    fn drone_msgs__msg__Primitive__init(msg: *mut Primitive) -> bool;
    fn drone_msgs__msg__Primitive__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Primitive>, size: usize) -> bool;
    fn drone_msgs__msg__Primitive__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Primitive>);
    fn drone_msgs__msg__Primitive__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Primitive>, out_seq: *mut rosidl_runtime_rs::Sequence<Primitive>) -> bool;
}

// Corresponds to drone_msgs__msg__Primitive
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Primitive {

    // This member is not documented.
    #[allow(missing_docs)]
    pub type_: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub step_distance: f64,

}

impl Primitive {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HOVER: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const N: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const NE: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const E: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SE: u8 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const S: u8 = 5;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SW: u8 = 6;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const W: u8 = 7;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const NW: u8 = 8;

}


impl Default for Primitive {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !drone_msgs__msg__Primitive__init(&mut msg as *mut _) {
        panic!("Call to drone_msgs__msg__Primitive__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Primitive {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { drone_msgs__msg__Primitive__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { drone_msgs__msg__Primitive__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { drone_msgs__msg__Primitive__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Primitive {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Primitive where Self: Sized {
  const TYPE_NAME: &'static str = "drone_msgs/msg/Primitive";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__drone_msgs__msg__Primitive() }
  }
}


#[link(name = "drone_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__drone_msgs__msg__Mission() -> *const std::ffi::c_void;
}

#[link(name = "drone_msgs__rosidl_generator_c")]
extern "C" {
    fn drone_msgs__msg__Mission__init(msg: *mut Mission) -> bool;
    fn drone_msgs__msg__Mission__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Mission>, size: usize) -> bool;
    fn drone_msgs__msg__Mission__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Mission>);
    fn drone_msgs__msg__Mission__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Mission>, out_seq: *mut rosidl_runtime_rs::Sequence<Mission>) -> bool;
}

// Corresponds to drone_msgs__msg__Mission
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Mission {

    // This member is not documented.
    #[allow(missing_docs)]
    pub drone_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub source: geometry_msgs::msg::rmw::Point,


    // This member is not documented.
    #[allow(missing_docs)]
    pub destination: geometry_msgs::msg::rmw::Point,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mission_id: u32,

}



impl Default for Mission {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !drone_msgs__msg__Mission__init(&mut msg as *mut _) {
        panic!("Call to drone_msgs__msg__Mission__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Mission {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { drone_msgs__msg__Mission__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { drone_msgs__msg__Mission__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { drone_msgs__msg__Mission__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Mission {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Mission where Self: Sized {
  const TYPE_NAME: &'static str = "drone_msgs/msg/Mission";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__drone_msgs__msg__Mission() }
  }
}


#[link(name = "drone_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__drone_msgs__msg__MissionPlan() -> *const std::ffi::c_void;
}

#[link(name = "drone_msgs__rosidl_generator_c")]
extern "C" {
    fn drone_msgs__msg__MissionPlan__init(msg: *mut MissionPlan) -> bool;
    fn drone_msgs__msg__MissionPlan__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MissionPlan>, size: usize) -> bool;
    fn drone_msgs__msg__MissionPlan__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MissionPlan>);
    fn drone_msgs__msg__MissionPlan__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MissionPlan>, out_seq: *mut rosidl_runtime_rs::Sequence<MissionPlan>) -> bool;
}

// Corresponds to drone_msgs__msg__MissionPlan
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MissionPlan {

    // This member is not documented.
    #[allow(missing_docs)]
    pub drone_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub primitives: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Primitive>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mission_id: u32,

}



impl Default for MissionPlan {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !drone_msgs__msg__MissionPlan__init(&mut msg as *mut _) {
        panic!("Call to drone_msgs__msg__MissionPlan__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MissionPlan {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { drone_msgs__msg__MissionPlan__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { drone_msgs__msg__MissionPlan__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { drone_msgs__msg__MissionPlan__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MissionPlan {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MissionPlan where Self: Sized {
  const TYPE_NAME: &'static str = "drone_msgs/msg/MissionPlan";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__drone_msgs__msg__MissionPlan() }
  }
}


#[link(name = "drone_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__drone_msgs__msg__PrimitiveStatus() -> *const std::ffi::c_void;
}

#[link(name = "drone_msgs__rosidl_generator_c")]
extern "C" {
    fn drone_msgs__msg__PrimitiveStatus__init(msg: *mut PrimitiveStatus) -> bool;
    fn drone_msgs__msg__PrimitiveStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PrimitiveStatus>, size: usize) -> bool;
    fn drone_msgs__msg__PrimitiveStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PrimitiveStatus>);
    fn drone_msgs__msg__PrimitiveStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PrimitiveStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<PrimitiveStatus>) -> bool;
}

// Corresponds to drone_msgs__msg__PrimitiveStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PrimitiveStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub drone_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mission_id: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_index: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub total_primitives: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mission_complete: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub battery_remaining: f64,

}



impl Default for PrimitiveStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !drone_msgs__msg__PrimitiveStatus__init(&mut msg as *mut _) {
        panic!("Call to drone_msgs__msg__PrimitiveStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PrimitiveStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { drone_msgs__msg__PrimitiveStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { drone_msgs__msg__PrimitiveStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { drone_msgs__msg__PrimitiveStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PrimitiveStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PrimitiveStatus where Self: Sized {
  const TYPE_NAME: &'static str = "drone_msgs/msg/PrimitiveStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__drone_msgs__msg__PrimitiveStatus() }
  }
}


#[link(name = "drone_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__drone_msgs__msg__Battery() -> *const std::ffi::c_void;
}

#[link(name = "drone_msgs__rosidl_generator_c")]
extern "C" {
    fn drone_msgs__msg__Battery__init(msg: *mut Battery) -> bool;
    fn drone_msgs__msg__Battery__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Battery>, size: usize) -> bool;
    fn drone_msgs__msg__Battery__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Battery>);
    fn drone_msgs__msg__Battery__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Battery>, out_seq: *mut rosidl_runtime_rs::Sequence<Battery>) -> bool;
}

// Corresponds to drone_msgs__msg__Battery
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Battery {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mission_id: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub drone_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub estimated_cost: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_battery: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mission_possible: bool,

}



impl Default for Battery {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !drone_msgs__msg__Battery__init(&mut msg as *mut _) {
        panic!("Call to drone_msgs__msg__Battery__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Battery {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { drone_msgs__msg__Battery__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { drone_msgs__msg__Battery__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { drone_msgs__msg__Battery__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Battery {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Battery where Self: Sized {
  const TYPE_NAME: &'static str = "drone_msgs/msg/Battery";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__drone_msgs__msg__Battery() }
  }
}


