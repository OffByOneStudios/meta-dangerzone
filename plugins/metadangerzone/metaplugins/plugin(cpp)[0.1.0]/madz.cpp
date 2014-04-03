#include ".madz/cpp/.wrap-cpp/madz.h"

#include <cstdio>

#include "mdl.hpp"
#include "plugin_id.hpp"
#include "plugin_stub.hpp"

void MADZOUT::_init()
{

}

void MADZOUT::_execute()
{
    printf("CPP Execute Hello World!\n");
}


MADZOUT::_t::PluginId MADZOUT::_f::PluginId_create(char* name_space, char* version, char* implementation)
{
    PluginId* res = new PluginId(name_space, version, implementation);
    return &(res->object);
}

void MADZOUT::_f::PluginId_destroy(MADZOUT::_t::PluginId _this)
{
    PluginId* res = (PluginId*)_this->internal;

    delete res;
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

MADZOUT::_t::PluginStub MADZOUT::_f::PluginStub_create(
    char* name, 
    char* version, 
    char* implementation, 
    char* directory,
    char* langauge, 
    MADZOUT::_t::Mdl description, 
    char* documentation)
{
    PluginStub* res = new PluginStub(name, version, implementation, directory, langauge, description, documentation);

    return &(res->object);
}

void MADZOUT::_f::PluginStub_destroy(MADZOUT::_t::PluginStub _this)
{
    PluginStub* res = (PluginStub*)_this->internal;
    delete res;
}

uint8_t MADZOUT::_f::PluginStub_commit(MADZOUT::_t::PluginStub _this)
{
    return 0;
}