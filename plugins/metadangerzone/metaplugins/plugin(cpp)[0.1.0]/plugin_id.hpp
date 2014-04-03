#include ".madz/cpp/.wrap-cpp/madz.h"
#include <string.h>
#include <cstdlib>
typedef madz::metadangerzone::metaplugins::plugin::_t::PluginIdStruct mt_PluginIdStruct;


class PluginId
{
public:
    mt_PluginIdStruct object;

    PluginId(char* namespace_in, char* version, char* implementation)
    {
        object.internal = this;

        int p_len = strlen(namespace_in);
        int v_len = strlen(version);
        int i_len = strlen(implementation);

        
        object.plugin_namespace = new char[p_len];
        object.version = new char[v_len];
        object.implementation = new char[i_len];


        strncpy(object.plugin_namespace, namespace_in, p_len);
        strncpy(object.version, version, v_len);
        strncpy(object.implementation, implementation, i_len);
    }
    ~PluginId()
    {
        delete[] object.plugin_namespace;
        delete[] object.version;
        delete[] object.implementation;
    }
};