#include <iostream>
#include "Array.h"
#include <cstdlib>
#include <ctime>

int main(int, char**)
{
    Array<int> empty(0);
    Array<int> numbers(10);
    int* tab = new int[10];
    srand(time(NULL));

    for (int i = 0; i < 10; i++)
    {
        const int value = rand();
        numbers[i] = value;
        tab[i] = value;
    }

    for (int i = 0; i < 10; i++)
    {
        std::cout	<< "Array[" << i << "] is " << numbers[i]
                     << ", Tab[" << i << "] is " << tab[i] << std::endl;
    }

    try
    {
        numbers[-23] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        numbers[10] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    delete [] tab;
    return 0;
}