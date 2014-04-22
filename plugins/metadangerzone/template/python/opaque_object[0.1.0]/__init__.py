import madz

def string_to_madz_string(foo):
    return madz.ctypes.cast(madz.ctypes.c_char_p(foo.encode("utf-8")), madz.ctypes.POINTER(madz.ctypes.c_ubyte))

class OpaqueObject(object):
    """Base class for composable noise functions"""
    
    to_string_name = string_to_madz_string("OpaqueObject")
    # Store pyobjects in set on class so they are not garbage collected.
    collection_registry = set()

    def __init__(self):
        self.collection_registry.add(self)
        
    def pack_as_madz(self):
        return madz.ctypes.c_void_p(id(self))
        
    @classmethod
    def unpack_from_madz(cls, pointer):
        if (pointer):
            return madz.ctypes.cast(pointer, madz.ctypes.py_object).value
        else:
            return None

    def to_string(self):
        return OpaqueObject.to_string_name

def OpaqueObject_create():
    res = OpaqueObject()
    return res.pack_as_madz()

def OpaqueObject_destory(this):
    res = OpaqueObject.unpack_from_madz(this)
    OpaqueObject.collection_registry.discard(res)


def OpaqueObject_equals(this, other):
   lhs = OpaqueObject.unpack_from_madz(this)
   rhs = OpaqueObject.unpack_from_madz(other)
   
   res = 1 if lhs == rhs else 0

   return res

def OpaqueObject_to_string(this):
    res = OpaqueObject.unpack_from_madz(this)
    return res.to_string()