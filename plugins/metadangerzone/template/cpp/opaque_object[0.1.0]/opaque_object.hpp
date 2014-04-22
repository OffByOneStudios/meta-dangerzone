#include ".madz/cpp/.wrap-cpp/madz.h"

#include "opaque_object.h"

OpaqueObject::OpaqueObject()
{

}
OpaqueObject::~OpaqueObject()
{

}

uint32_t OpaqueObject::equals(OpaqueObject* other)
{
    return (uint32_t)(this == other);
}
char* OpaqueObject::to_string()
{
    return (char*)"OpaqueObject";
}