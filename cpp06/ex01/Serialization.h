#ifndef EX01_SERIALIZATION_H
#define EX01_SERIALIZATION_H
#include <iostream>

struct Data {
    std::string str;
    int index;
};
uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif //EX01_SERIALIZATION_H
