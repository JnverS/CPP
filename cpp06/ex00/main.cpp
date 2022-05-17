#include <iostream>
#include "Convertor.h"

int main(int argc, char *argv[]) {

    if (argc > 1) {
        Convertor *a = new Convertor();

        a->convert(argv[1]);
        delete a;
    }
    return 0;
}
