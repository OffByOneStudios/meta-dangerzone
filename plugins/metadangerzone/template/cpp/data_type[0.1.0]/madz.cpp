#include ".madz/cpp/.wrap-cpp/madz.h"

#include "data_type.hpp"

typedef MADZOUT::_t::DataType mt_DataType;

/*C++ Types can subclass from C structs, and be cast to C structs. However C 
Structs cannot be directly casted back into their C++ equivilent. This function
breaks the type system to do that operation. This cast is refered to as 
evil_cast due to legacy concerns.
*/
template<typename TA, typename TB>
union _evil
{
    TA a;
    TB b;
    _evil() { memset(this, 0, sizeof(_evil)); }
};

template<typename TA, typename TB>
TB evil_cast(TA a)
{
    _evil<TA, TB> evil;
    evil.a = a;
    return evil.b;
}

void MADZOUT::_init()
{

}

mt_DataType MADZOUT::_f::DataType_init(uint32_t value)
{
    DataType res = DataType();
    res.init(value);
    return (mt_DataType)res;
}

uint32_t MADZOUT::_f::DataType_equals(mt_DataType data, mt_DataType other)
{
    DataType lhs = evil_cast<mt_DataType, DataType>(data);
    DataType rhs = evil_cast<mt_DataType, DataType>(other);

    return lhs.equals(rhs);
}

char* MADZOUT::_f::DataType_to_string(mt_DataType data)
{
    DataType res = evil_cast<mt_DataType, DataType>(data);
    return res.to_string();
}

