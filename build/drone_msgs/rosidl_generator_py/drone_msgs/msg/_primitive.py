# generated from rosidl_generator_py/resource/_idl.py.em
# with input from drone_msgs:msg/Primitive.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Primitive(type):
    """Metaclass of message 'Primitive'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'HOVER': 0,
        'N': 1,
        'NE': 2,
        'E': 3,
        'SE': 4,
        'S': 5,
        'SW': 6,
        'W': 7,
        'NW': 8,
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
                'drone_msgs.msg.Primitive')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__primitive
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__primitive
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__primitive
            cls._TYPE_SUPPORT = module.type_support_msg__msg__primitive
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__primitive

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'HOVER': cls.__constants['HOVER'],
            'N': cls.__constants['N'],
            'NE': cls.__constants['NE'],
            'E': cls.__constants['E'],
            'SE': cls.__constants['SE'],
            'S': cls.__constants['S'],
            'SW': cls.__constants['SW'],
            'W': cls.__constants['W'],
            'NW': cls.__constants['NW'],
        }

    @property
    def HOVER(self):
        """Message constant 'HOVER'."""
        return Metaclass_Primitive.__constants['HOVER']

    @property
    def N(self):
        """Message constant 'N'."""
        return Metaclass_Primitive.__constants['N']

    @property
    def NE(self):
        """Message constant 'NE'."""
        return Metaclass_Primitive.__constants['NE']

    @property
    def E(self):
        """Message constant 'E'."""
        return Metaclass_Primitive.__constants['E']

    @property
    def SE(self):
        """Message constant 'SE'."""
        return Metaclass_Primitive.__constants['SE']

    @property
    def S(self):
        """Message constant 'S'."""
        return Metaclass_Primitive.__constants['S']

    @property
    def SW(self):
        """Message constant 'SW'."""
        return Metaclass_Primitive.__constants['SW']

    @property
    def W(self):
        """Message constant 'W'."""
        return Metaclass_Primitive.__constants['W']

    @property
    def NW(self):
        """Message constant 'NW'."""
        return Metaclass_Primitive.__constants['NW']


class Primitive(metaclass=Metaclass_Primitive):
    """
    Message class 'Primitive'.

    Constants:
      HOVER
      N
      NE
      E
      SE
      S
      SW
      W
      NW
    """

    __slots__ = [
        '_type',
        '_step_distance',
    ]

    _fields_and_field_types = {
        'type': 'uint8',
        'step_distance': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.type = kwargs.get('type', int())
        self.step_distance = kwargs.get('step_distance', float())

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
        if self.type != other.type:
            return False
        if self.step_distance != other.step_distance:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'type' field must be an unsigned integer in [0, 255]"
        self._type = value

    @builtins.property
    def step_distance(self):
        """Message field 'step_distance'."""
        return self._step_distance

    @step_distance.setter
    def step_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'step_distance' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'step_distance' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._step_distance = value
