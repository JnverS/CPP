#include <iostream>
#include <string.h>

int main() {
    std::string str = "HI THIS IS BRAIN";
    std::string* ptr = &str;
    std::string& ref = str;

    std::cout << &str << std::endl << ptr << std::endl << &ref << std::endl;
    std::cout << str << std::endl << *ptr << std::endl << ref << std::endl;
    return 0;
}
