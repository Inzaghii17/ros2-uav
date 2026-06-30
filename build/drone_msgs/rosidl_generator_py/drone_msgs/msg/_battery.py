# generated from rosidl_generator_py/resource/_idl.py.em
# with input from drone_msgs:msg/Battery.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Battery(type):
    """Metaclass of message 'Battery'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('drone_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'drone_msgs.msg.Battery')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__battery
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__battery
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__battery
            cls._TYPE_SUPPORT = module.type_support_msg__msg__battery
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__battery

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Battery(metaclass=Metaclass_Battery):
    """Message class 'Battery'."""

    __slots__ = [
        '_mission_id',
        '_drone_name',
        '_estimated_cost',
        '_current_battery',
        '_mission_possible',
    ]

    _fields_and_field_types = {
        'mission_id': 'uint32',
        'drone_name': 'string',
        'estimated_cost': 'double',
        'current_battery': 'double',
        'mission_possible': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.mission_id = kwargs.get('mission_id', int())
        self.drone_name = kwargs.get('drone_name', str())
        self.estimated_cost = kwargs.get('estimated_cost', float())
        self.current_battery = kwargs.get('current_battery', float())
        self.mission_possible = kwargs.get('mission_possible', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.mission_id != other.mission_id:
            return False
        if self.drone_name != other.drone_name:
            return False
        if self.estimated_cost != other.estimated_cost:
            return False
        if self.current_battery != other.current_battery:
            return False
        if self.mission_possible != other.mission_possible:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def mission_id(self):
        """Message field 'mission_id'."""
        return self._mission_id

    @mission_id.setter
    def mission_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mission_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'mission_id' field must be an unsigned integer in [0, 4294967295]"
        self._mission_id = value

    @builtins.property
    def drone_name(self):
        """Message field 'drone_name'."""
        return self._drone_name

    @drone_name.setter
    def drone_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'drone_name' field must be of type 'str'"
        self._drone_name = value

    @builtins.property
    def estimated_cost(self):
        """Message field 'estimated_cost'."""
        return self._estimated_cost

    @estimated_cost.setter
    def estimated_cost(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'estimated_cost' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'estimated_cost' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._estimated_cost = value

    @builtins.property
    def current_battery(self):
        """Message field 'current_battery'."""
        return self._current_battery

    @current_battery.setter
    def current_battery(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current_battery' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'current_battery' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._current_battery = value

    @builtins.property
    def mission_possible(self):
        """Message field 'mission_possible'."""
        return self._mission_possible

    @mission_possible.setter
    def mission_possible(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'mission_possible' field must be of type 'bool'"
        self._mission_possible = value
