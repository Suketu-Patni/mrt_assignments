# generated from rosidl_generator_py/resource/_idl.py.em
# with input from drover4_info_interface:msg/DRover4Info.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DRover4Info(type):
    """Metaclass of message 'DRover4Info'."""

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
            module = import_type_support('drover4_info_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'drover4_info_interface.msg.DRover4Info')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__d_rover4_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__d_rover4_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__d_rover4_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__d_rover4_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__d_rover4_info

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DRover4Info(metaclass=Metaclass_DRover4Info):
    """Message class 'DRover4Info'."""

    __slots__ = [
        '_rover_id',
        '_battery_level',
        '_current_location',
        '_health_status',
    ]

    _fields_and_field_types = {
        'rover_id': 'int32',
        'battery_level': 'float',
        'current_location': 'geometry_msgs/Pose',
        'health_status': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.rover_id = kwargs.get('rover_id', int())
        self.battery_level = kwargs.get('battery_level', float())
        from geometry_msgs.msg import Pose
        self.current_location = kwargs.get('current_location', Pose())
        self.health_status = kwargs.get('health_status', str())

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
        if self.rover_id != other.rover_id:
            return False
        if self.battery_level != other.battery_level:
            return False
        if self.current_location != other.current_location:
            return False
        if self.health_status != other.health_status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def rover_id(self):
        """Message field 'rover_id'."""
        return self._rover_id

    @rover_id.setter
    def rover_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rover_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'rover_id' field must be an integer in [-2147483648, 2147483647]"
        self._rover_id = value

    @builtins.property
    def battery_level(self):
        """Message field 'battery_level'."""
        return self._battery_level

    @battery_level.setter
    def battery_level(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'battery_level' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'battery_level' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._battery_level = value

    @builtins.property
    def current_location(self):
        """Message field 'current_location'."""
        return self._current_location

    @current_location.setter
    def current_location(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'current_location' field must be a sub message of type 'Pose'"
        self._current_location = value

    @builtins.property
    def health_status(self):
        """Message field 'health_status'."""
        return self._health_status

    @health_status.setter
    def health_status(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'health_status' field must be of type 'str'"
        self._health_status = value
