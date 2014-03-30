#include ".madz/cpp/.wrap-cpp/madz.h"

#include <vector>

// Structures
typedef madz::metadangerzone::metaplugins::plugin::_t::PluginStubStruct mt_PluginStubStruct;

// Pointers
typedef madz::metadangerzone::metaplugins::plugin::_t::Mdl mt_Mdl;
typedef madz::metadangerzone::metaplugins::plugin::_t::PluginStub mt_PluginStub;

void p_add_depends(mt_PluginStub _this, mt_PluginStub depend);
void p_remove_depends(mt_PluginStub _this, mt_PluginStub depend);
void p_add_imports(mt_PluginStub _this, mt_PluginStub import);
void p_remove_imports(mt_PluginStub _this, mt_PluginStub import);

class PluginStub{
    mt_PluginStubStruct object;
    std::vector<mt_PluginStub> depends;
    std::vector<mt_PluginStub> imports;
public:

    PluginStub(char *name, char* version, char* implementation, char* directory,
        char* language, mt_Mdl description, char* documentation)
    {
        //Bind properties
        object.id = MADZOUT::PluginId_create(name, version, implementation);
        object.directory = directory;
        object.language = language;
        object.description = description;
        object.documentation = documentation;
        object.imports = imports.data;
        object.depends = depends.data;

        depends.push_back(0);
        imports.push_back(0);
        // Bind methods.
        object.add_depends = p_add_depends;
        object.add_imports = p_add_imports;
        object.remove_depends = p_remove_depends;
        object.remove_imports = p_remove_imports;
    }

    void add_depends(mt_PluginStub depend)
    {
        if (depend == 0)
        {
            return;
        }
        depends.pop_back();
        depends.push_back(depend);
        depends.push_back(0);
    }

    void remove_depends(mt_PluginStub depend)
    {
        if (depend == 0)
        {
            return;
        }
        std::vector<mt_PluginStub>::iterator it;
        for (it = depends.begin(); it != depends.end(); it++)
        {
            if (*it == depend)
            {
                depends.erase(it);
                return;
            }
        }
    }

    void add_imports(mt_PluginStub import)
    {
        if (import == 0)
        {
            return;
        }
        imports.pop_back();
        imports.push_back(import);
        imports.push_back(0);
    }

    void remove_imports(mt_PluginStub import)
    {
        if (import == 0)
        {
            return;
        }
        std::vector<mt_PluginStub>::iterator it;
        for (it = imports.begin(); it != imports.end(); it++)
        {
            if (*it == import)
            {
                imports.erase(it);
                return;
            }
        }
    }
};

void p_add_depends(mt_PluginStub _this, mt_PluginStub depend)
{
    ((PluginStub*)(_this->internal))->add_depends(depend);
}

void p_remove_depends(mt_PluginStub _this, mt_PluginStub depend)
{
    ((PluginStub*)(_this->internal))->remove_depends(depend);
}

void p_add_imports(mt_PluginStub _this, mt_PluginStub import)
{
    ((PluginStub*)(_this->internal))->add_imports(import);
}

void p_remove_imports(mt_PluginStub _this, mt_PluginStub import)
{
    ((PluginStub*)(_this->internal))->remove_imports(import);
}