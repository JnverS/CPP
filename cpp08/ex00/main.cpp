#include <iostream>
#include "easyfind.h"

int main() {
    std::cout << "======================="<< std::endl;
    std::vector<int> vector;

    vector.push_back(0);
    vector.push_back(1);
    vector.push_back(2);
    vector.push_back(3);
    vector.push_back(4);
    vector.push_back(5);
    vector.push_back(6);

    easyfind(vector, 5);
    easyfind(vector, 11);
    easyfind(vector, 0);

    std::cout << "======================="<< std::endl;
    std::array<int, 5> array;

    for (int i=0; i < 5; i++)
        array[i] = i;

    easyfind(array, 5);
    easyfind(array, 11);
    easyfind(array, 0);
    return 0;
}
