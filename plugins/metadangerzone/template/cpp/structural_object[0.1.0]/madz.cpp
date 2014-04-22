#include ".madz/cpp/.wrap-cpp/madz.h"

#include "structural_object.hpp"

void MADZOUT::_init()
{

}


MADZOUT::_t::StructuralObject MADZOUT::_f::StructuralObject_create()
{
    StructuralObject* res = new StructuralObject();
    return (MADZOUT::_t::StructuralObject)res;
}

