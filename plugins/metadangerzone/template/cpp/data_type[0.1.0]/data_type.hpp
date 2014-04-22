#include ".madz/cpp/.wrap-cpp/madz.h"

#include "data_type.h"

void DataType::init(uint32_t value_in)
{
    value = value_in;
}
char* DataType::to_string()
{
    return (char*)"DataType";
}

uint32_t DataType::equals(DataType other)
{
    return (uint32_t)(value == other.value);
}