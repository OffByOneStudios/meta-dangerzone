#include ".madz/cpp/.wrap-cpp/madz.h"

typedef MADZOUT::_t::MdlStruct mt_mdlStruct;

typedef MADZOUT::_t::Mdl mt_Mdl;
// Forward Private Declarations
char* p_code(mt_Mdl _this);

class Mdl{
    char * _code;
    bool _valid;
public:
    mt_mdlStruct object;

    Mdl(char* code)
    {
        _code = code;
        object.internal = this;
        object.code = p_code;
        _valid = validate();
    }

    char* code()
    {
        return _code;
    }
private:
    bool validate()
    {
        return true;
    }
};

char* p_code(mt_Mdl _this)
{
    return ((Mdl*)(_this->internal))->code();
}
