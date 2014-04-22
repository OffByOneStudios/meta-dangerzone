#include ".madz/cpp/.wrap-cpp/madz.h"

#include "singleton.hpp"

SingletonObject* Singleton;
void MADZOUT::_init()
{
    Singleton = 0;
}


MADZOUT::_t::Singleton MADZOUT::_f::Singleton_create()
{
    if (Singleton == 0)
    {
        Singleton = new SingletonObject();
    }
    return (MADZOUT::_t::Singleton)Singleton;
}

void MADZOUT::_f::Singleton_destory(MADZOUT::_t::Singleton _this)
{
    SingletonObject* res = (SingletonObject*)_this;
    delete res;
    Singleton = 0;
}

char* MADZOUT::_f::Singleton_to_string(MADZOUT::_t::Singleton _this)
{
    SingletonObject* res = (SingletonObject*)_this;
    return res->to_string();
}