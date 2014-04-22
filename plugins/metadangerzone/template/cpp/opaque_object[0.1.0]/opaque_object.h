#include ".madz/cpp/.wrap-cpp/madz.h"



class OpaqueObject{

public:
    OpaqueObject();
    ~OpaqueObject();

    uint32_t equals(OpaqueObject* other);
    char* to_string();
};