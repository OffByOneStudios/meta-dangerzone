#include ".madz/cpp/.wrap-cpp/madz.h"

#include "structural_object.h"

StructuralObject::StructuralObject()
{
    this->object.internal = this;
    this->object.destroy = p_destroy;
}
StructuralObject::~StructuralObject()
{

}

uint32_t StructuralObject::equals(StructuralObject* other)
{
    return (uint32_t)(this == other);
}

char* StructuralObject::to_string()
{
    return (char*)"OpaqueObject";
}

void p_destroy(MADZOUT::_t::StructuralObject _this)
{
    delete (StructuralObject*)_this->internal;
}
uint32_t p_equals(MADZOUT::_t::StructuralObject _this, MADZOUT::_t::StructuralObject other)
{
    StructuralObject* lhs = (StructuralObject*)_this->internal;
    StructuralObject* rhs = (StructuralObject*)other->internal;

    return lhs->equals(rhs);
}

char* p_to_string(MADZOUT::_t::StructuralObject _this)
{
    StructuralObject* obj = (StructuralObject*)_this->internal;
    return obj->to_string();
}