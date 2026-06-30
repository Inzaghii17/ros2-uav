// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from drone_msgs:msg/Battery.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "drone_msgs/msg/detail/battery__struct.h"
#include "drone_msgs/msg/detail/battery__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool drone_msgs__msg__battery__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[32];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("drone_msgs.msg._battery.Battery", full_classname_dest, 31) == 0);
  }
  drone_msgs__msg__Battery * ros_message = _ros_message;
  {  // mission_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "mission_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mission_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // drone_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "drone_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->drone_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // estimated_cost
    PyObject * field = PyObject_GetAttrString(_pymsg, "estimated_cost");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->estimated_cost = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // current_battery
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_battery");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->current_battery = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // mission_possible
    PyObject * field = PyObject_GetAttrString(_pymsg, "mission_possible");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->mission_possible = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * drone_msgs__msg__battery__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Battery */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("drone_msgs.msg._battery");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Battery");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  drone_msgs__msg__Battery * ros_message = (drone_msgs__msg__Battery *)raw_ros_message;
  {  // mission_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mission_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mission_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // drone_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->drone_name.data,
      strlen(ros_message->drone_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "drone_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // estimated_cost
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->estimated_cost);
    {
      int rc = PyObject_SetAttrString(_pymessage, "estimated_cost", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_battery
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->current_battery);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_battery", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mission_possible
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->mission_possible ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mission_possible", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
