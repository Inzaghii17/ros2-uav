#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to drone_msgs__msg__DroneState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DroneState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub drone_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pose: geometry_msgs::msg::Pose,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DroneState::default())
  }
}

impl rosidl_runtime_rs::Message for DroneState {
  type RmwMsg = super::msg::rmw::DroneState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        drone_name: msg.drone_name.as_str().into(),
        pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Owned(msg.pose)).into_owned(),
        battery: msg.battery,
        moving: msg.moving,
        current_primitive_index: msg.current_primitive_index,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        drone_name: msg.drone_name.as_str().into(),
        pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Borrowed(&msg.pose)).into_owned(),
      battery: msg.battery,
      moving: msg.moving,
      current_primitive_index: msg.current_primitive_index,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      drone_name: msg.drone_name.to_string(),
      pose: geometry_msgs::msg::Pose::from_rmw_message(msg.pose),
      battery: msg.battery,
      moving: msg.moving,
      current_primitive_index: msg.current_primitive_index,
    }
  }
}


// Corresponds to drone_msgs__msg__Primitive

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Primitive::default())
  }
}

impl rosidl_runtime_rs::Message for Primitive {
  type RmwMsg = super::msg::rmw::Primitive;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        type_: msg.type_,
        step_distance: msg.step_distance,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      type_: msg.type_,
      step_distance: msg.step_distance,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      type_: msg.type_,
      step_distance: msg.step_distance,
    }
  }
}


// Corresponds to drone_msgs__msg__Mission

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Mission {

    // This member is not documented.
    #[allow(missing_docs)]
    pub drone_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub source: geometry_msgs::msg::Point,


    // This member is not documented.
    #[allow(missing_docs)]
    pub destination: geometry_msgs::msg::Point,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mission_id: u32,

}



impl Default for Mission {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Mission::default())
  }
}

impl rosidl_runtime_rs::Message for Mission {
  type RmwMsg = super::msg::rmw::Mission;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        drone_name: msg.drone_name.as_str().into(),
        source: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(msg.source)).into_owned(),
        destination: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(msg.destination)).into_owned(),
        mission_id: msg.mission_id,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        drone_name: msg.drone_name.as_str().into(),
        source: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(&msg.source)).into_owned(),
        destination: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(&msg.destination)).into_owned(),
      mission_id: msg.mission_id,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      drone_name: msg.drone_name.to_string(),
      source: geometry_msgs::msg::Point::from_rmw_message(msg.source),
      destination: geometry_msgs::msg::Point::from_rmw_message(msg.destination),
      mission_id: msg.mission_id,
    }
  }
}


// Corresponds to drone_msgs__msg__MissionPlan

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MissionPlan {

    // This member is not documented.
    #[allow(missing_docs)]
    pub drone_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub primitives: Vec<super::msg::Primitive>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mission_id: u32,

}



impl Default for MissionPlan {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MissionPlan::default())
  }
}

impl rosidl_runtime_rs::Message for MissionPlan {
  type RmwMsg = super::msg::rmw::MissionPlan;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        drone_name: msg.drone_name.as_str().into(),
        primitives: msg.primitives
          .into_iter()
          .map(|elem| super::msg::Primitive::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        mission_id: msg.mission_id,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        drone_name: msg.drone_name.as_str().into(),
        primitives: msg.primitives
          .iter()
          .map(|elem| super::msg::Primitive::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      mission_id: msg.mission_id,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      drone_name: msg.drone_name.to_string(),
      primitives: msg.primitives
          .into_iter()
          .map(super::msg::Primitive::from_rmw_message)
          .collect(),
      mission_id: msg.mission_id,
    }
  }
}


// Corresponds to drone_msgs__msg__PrimitiveStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PrimitiveStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub drone_name: std::string::String,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::PrimitiveStatus::default())
  }
}

impl rosidl_runtime_rs::Message for PrimitiveStatus {
  type RmwMsg = super::msg::rmw::PrimitiveStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        drone_name: msg.drone_name.as_str().into(),
        mission_id: msg.mission_id,
        current_index: msg.current_index,
        total_primitives: msg.total_primitives,
        mission_complete: msg.mission_complete,
        battery_remaining: msg.battery_remaining,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        drone_name: msg.drone_name.as_str().into(),
      mission_id: msg.mission_id,
      current_index: msg.current_index,
      total_primitives: msg.total_primitives,
      mission_complete: msg.mission_complete,
      battery_remaining: msg.battery_remaining,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      drone_name: msg.drone_name.to_string(),
      mission_id: msg.mission_id,
      current_index: msg.current_index,
      total_primitives: msg.total_primitives,
      mission_complete: msg.mission_complete,
      battery_remaining: msg.battery_remaining,
    }
  }
}


// Corresponds to drone_msgs__msg__Battery

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Battery {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mission_id: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub drone_name: std::string::String,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Battery::default())
  }
}

impl rosidl_runtime_rs::Message for Battery {
  type RmwMsg = super::msg::rmw::Battery;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mission_id: msg.mission_id,
        drone_name: msg.drone_name.as_str().into(),
        estimated_cost: msg.estimated_cost,
        current_battery: msg.current_battery,
        mission_possible: msg.mission_possible,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      mission_id: msg.mission_id,
        drone_name: msg.drone_name.as_str().into(),
      estimated_cost: msg.estimated_cost,
      current_battery: msg.current_battery,
      mission_possible: msg.mission_possible,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      mission_id: msg.mission_id,
      drone_name: msg.drone_name.to_string(),
      estimated_cost: msg.estimated_cost,
      current_battery: msg.current_battery,
      mission_possible: msg.mission_possible,
    }
  }
}


