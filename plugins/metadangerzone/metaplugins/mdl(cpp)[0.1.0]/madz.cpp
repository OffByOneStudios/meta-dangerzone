#include ".madz/cpp/.wrap-cpp/madz.h"

#include "mdl.hpp"

void MADZOUT::_init()
{

}

MADZOUT::_t::Mdl MADZOUT::_f::Mdl_Create(char* source)
{
    Mdl* res = new Mdl(source);
    return &(res->object);
}

void MADZOUT::_f::Mdl_Destroy(MADZOUT::_t::Mdl _this)
{
    Mdl* res = (Mdl*)_this->internal;
    delete res;
}