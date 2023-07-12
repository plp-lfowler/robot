// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from my_cobot_interfaces:srv/SetJointAngles.idl
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
#include "my_cobot_interfaces/srv/detail/set_joint_angles__struct.h"
#include "my_cobot_interfaces/srv/detail/set_joint_angles__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool my_cobot_interfaces__srv__set_joint_angles__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[65];
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
    assert(strncmp("my_cobot_interfaces.srv._set_joint_angles.SetJointAngles_Request", full_classname_dest, 64) == 0);
  }
  my_cobot_interfaces__srv__SetJointAngles_Request * ros_message = _ros_message;
  {  // j1
    PyObject * field = PyObject_GetAttrString(_pymsg, "j1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->j1 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // j2
    PyObject * field = PyObject_GetAttrString(_pymsg, "j2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->j2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // j3
    PyObject * field = PyObject_GetAttrString(_pymsg, "j3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->j3 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // j4
    PyObject * field = PyObject_GetAttrString(_pymsg, "j4");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->j4 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // j5
    PyObject * field = PyObject_GetAttrString(_pymsg, "j5");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->j5 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // j6
    PyObject * field = PyObject_GetAttrString(_pymsg, "j6");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->j6 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * my_cobot_interfaces__srv__set_joint_angles__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SetJointAngles_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("my_cobot_interfaces.srv._set_joint_angles");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetJointAngles_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  my_cobot_interfaces__srv__SetJointAngles_Request * ros_message = (my_cobot_interfaces__srv__SetJointAngles_Request *)raw_ros_message;
  {  // j1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->j1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "j1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // j2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->j2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "j2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // j3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->j3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "j3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // j4
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->j4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "j4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // j5
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->j5);
    {
      int rc = PyObject_SetAttrString(_pymessage, "j5", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // j6
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->j6);
    {
      int rc = PyObject_SetAttrString(_pymessage, "j6", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "my_cobot_interfaces/srv/detail/set_joint_angles__struct.h"
// already included above
// #include "my_cobot_interfaces/srv/detail/set_joint_angles__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool my_cobot_interfaces__srv__set_joint_angles__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[66];
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
    assert(strncmp("my_cobot_interfaces.srv._set_joint_angles.SetJointAngles_Response", full_classname_dest, 65) == 0);
  }
  my_cobot_interfaces__srv__SetJointAngles_Response * ros_message = _ros_message;
  {  // success
    PyObject * field = PyObject_GetAttrString(_pymsg, "success");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->success = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * my_cobot_interfaces__srv__set_joint_angles__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SetJointAngles_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("my_cobot_interfaces.srv._set_joint_angles");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetJointAngles_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  my_cobot_interfaces__srv__SetJointAngles_Response * ros_message = (my_cobot_interfaces__srv__SetJointAngles_Response *)raw_ros_message;
  {  // success
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->success ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "success", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
