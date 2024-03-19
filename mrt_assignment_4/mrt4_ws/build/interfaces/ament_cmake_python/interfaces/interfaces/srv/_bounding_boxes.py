# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interfaces:srv/BoundingBoxes.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BoundingBoxes_Request(type):
    """Metaclass of message 'BoundingBoxes_Request'."""

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
            module = import_type_support('interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interfaces.srv.BoundingBoxes_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__bounding_boxes__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__bounding_boxes__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__bounding_boxes__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__bounding_boxes__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__bounding_boxes__request

            from sensor_msgs.msg import Image
            if Image.__class__._TYPE_SUPPORT is None:
                Image.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BoundingBoxes_Request(metaclass=Metaclass_BoundingBoxes_Request):
    """Message class 'BoundingBoxes_Request'."""

    __slots__ = [
        '_img',
    ]

    _fields_and_field_types = {
        'img': 'sensor_msgs/Image',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'Image'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from sensor_msgs.msg import Image
        self.img = kwargs.get('img', Image())

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
        if self.img != other.img:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def img(self):
        """Message field 'img'."""
        return self._img

    @img.setter
    def img(self, value):
        if __debug__:
            from sensor_msgs.msg import Image
            assert \
                isinstance(value, Image), \
                "The 'img' field must be a sub message of type 'Image'"
        self._img = value


# Import statements for member types

# Member 'bounding_boxes'
# Member 'aruco_ids'
import array  # noqa: E402, I100

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_BoundingBoxes_Response(type):
    """Metaclass of message 'BoundingBoxes_Response'."""

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
            module = import_type_support('interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interfaces.srv.BoundingBoxes_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__bounding_boxes__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__bounding_boxes__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__bounding_boxes__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__bounding_boxes__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__bounding_boxes__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BoundingBoxes_Response(metaclass=Metaclass_BoundingBoxes_Response):
    """Message class 'BoundingBoxes_Response'."""

    __slots__ = [
        '_bounding_boxes',
        '_aruco_ids',
    ]

    _fields_and_field_types = {
        'bounding_boxes': 'sequence<int32>',
        'aruco_ids': 'sequence<int32>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.bounding_boxes = array.array('i', kwargs.get('bounding_boxes', []))
        self.aruco_ids = array.array('i', kwargs.get('aruco_ids', []))

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
        if self.bounding_boxes != other.bounding_boxes:
            return False
        if self.aruco_ids != other.aruco_ids:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def bounding_boxes(self):
        """Message field 'bounding_boxes'."""
        return self._bounding_boxes

    @bounding_boxes.setter
    def bounding_boxes(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'bounding_boxes' array.array() must have the type code of 'i'"
            self._bounding_boxes = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'bounding_boxes' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._bounding_boxes = array.array('i', value)

    @builtins.property
    def aruco_ids(self):
        """Message field 'aruco_ids'."""
        return self._aruco_ids

    @aruco_ids.setter
    def aruco_ids(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'aruco_ids' array.array() must have the type code of 'i'"
            self._aruco_ids = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'aruco_ids' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._aruco_ids = array.array('i', value)


class Metaclass_BoundingBoxes(type):
    """Metaclass of service 'BoundingBoxes'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interfaces.srv.BoundingBoxes')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__bounding_boxes

            from interfaces.srv import _bounding_boxes
            if _bounding_boxes.Metaclass_BoundingBoxes_Request._TYPE_SUPPORT is None:
                _bounding_boxes.Metaclass_BoundingBoxes_Request.__import_type_support__()
            if _bounding_boxes.Metaclass_BoundingBoxes_Response._TYPE_SUPPORT is None:
                _bounding_boxes.Metaclass_BoundingBoxes_Response.__import_type_support__()


class BoundingBoxes(metaclass=Metaclass_BoundingBoxes):
    from interfaces.srv._bounding_boxes import BoundingBoxes_Request as Request
    from interfaces.srv._bounding_boxes import BoundingBoxes_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
