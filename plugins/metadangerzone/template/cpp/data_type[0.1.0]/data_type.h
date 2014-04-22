#include ".madz/cpp/.wrap-cpp/madz.h"

class DataType:
    public MADZOUT::_t::DataType
{
public:
    
    void init(uint32_t value_in);
    uint32_t equals(DataType other);
    char* to_string();
};