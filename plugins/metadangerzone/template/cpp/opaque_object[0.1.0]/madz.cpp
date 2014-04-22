#include ".madz/cpp/.wrap-cpp/madz.h"

#include "opaque_object.hpp"

void MADZOUT::_init()
{

}


MADZOUT::_t::OpaqueObject MADZOUT::_f::OpaqueObject_create()
{
    OpaqueObject* res = new OpaqueObject();
    return (MADZOUT::_t::OpaqueObject)res;
}

void MADZOUT::_f::OpaqueObject_destory(MADZOUT::_t::OpaqueObject _this)
{
    OpaqueObject* res = (OpaqueObject*)_this;
    delete res;
}

uint32_t MADZOUT::_f::OpaqueObject_equals(MADZOUT::_t::OpaqueObject _this, MADZOUT::_t::OpaqueObject other)
{
    OpaqueObject* lhs = (OpaqueObject*)_this;
    OpaqueObject* rhs = (OpaqueObject*)other;

    return lhs->equals(rhs);
}

char* MADZOUT::_f::OpaqueObject_to_string(MADZOUT::_t::OpaqueObject _this)
{
    OpaqueObject* res = (OpaqueObject*)_this;
    return res->to_string();
}