#include ".madz/cpp/.wrap-cpp/madz.h"



class SingletonObject {

public:
    SingletonObject();
    ~SingletonObject();

    uint32_t equals(SingletonObject* other);
    char* to_string();
};