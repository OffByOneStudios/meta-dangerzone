#include ".madz/cpp/.wrap-cpp/madz.h"

void p_destroy(MADZOUT::_t::StructuralObject _this);
uint32_t p_equals(MADZOUT::_t::StructuralObject _this, MADZOUT::_t::StructuralObject other);
char* p_to_string(MADZOUT::_t::StructuralObject _this);

class StructuralObject{

public:
    MADZOUT::_t::StructuralObjectStruct object;
    StructuralObject();
    ~StructuralObject();

    uint32_t equals(StructuralObject* other);
    char* to_string();
};