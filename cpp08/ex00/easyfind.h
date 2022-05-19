#ifndef EASYFIND_H
#define EASYFIND_H
#include <algorithm>
#include <vector>
#include <array>
#include <iostream>

template <typename T>
void easyfind(T vector, int i){
    if (std::find(vector.begin(), vector.end(), i) != vector.end())
        std::cout << "Value has been found!" << std::endl;
    else
        std::cout << "Value not found!" << std::endl;
}

#endif
