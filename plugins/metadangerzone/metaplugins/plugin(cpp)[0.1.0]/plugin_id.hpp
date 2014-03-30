#include ".madz/cpp/.wrap-cpp/madz.h"


typedef madz::metadangerzone::metaplugins::plugin::_t::PluginIdStruct mt_PluginIdStruct;


class PluginId
{
    mt_PluginIdStruct object;

public:
    PluginId(char* namespace_in, char* version, char* implementation)
    {
        object.internal = this;

        object.plugin_namespace = namespace_in;
        object.version = version;
        object.implementation = implementation;
    }
};