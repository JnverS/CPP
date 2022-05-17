#include <iostream>
#include "Serialization.h"

int main() {
    Data data;
    data.str = "struct is non-empty";
    data.index = 10;
    std::cout << "data address : "  << &data << ", string : "  << data.str << std::endl;
    uintptr_t ptr = serialize((Data *)&data);
    std::cout << "result serialization : " << ptr << std::endl;
    std::cout << "result deserialization : " << deserialize(ptr) << ", string : "  << deserialize(ptr)->str << std::endl;
    return 0;
}
