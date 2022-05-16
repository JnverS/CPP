#include <iostream>
#include <Convertor.h>
#include <iomanip>

int main() {
    Convertor *a = new Convertor();
    a->convert("0");
    float f = 5.0f;
    int b = 10;
    std::cout<<std::fixed<<std::setprecision(1);
    std::cout<<f<<std::endl;
    std::cout<<b<<std::endl;
    delete a;
    return 0;
}
