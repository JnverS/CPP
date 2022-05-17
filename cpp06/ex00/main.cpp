#include <iostream>
#include "Convertor.h"
#include <iomanip>

int main() {
    Convertor *a = new Convertor();
    std::cout<<std::fixed<<std::setprecision(1);
//    a->convert("0");
//    a->convert("42.0f");
//    a->convert("98.0");
//    a->convert("a");
    a->convert("123");
    delete a;
    return 0;
}
