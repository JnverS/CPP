#include <iostream>
#include "Classes.h"

int main() {
    for (int i = 0; i < 10; i++)
    {
        std::cout << "============ " << i << " =============" << std::endl;

        {
            Base* base = generate();
            identify (base);
            delete base;
        }
        {
            Base& base = *(generate());
            identify(base);
            delete &base;
        }
    }
    return 0;
}
