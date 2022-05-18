#ifndef CPP_MYGIT_ARRAY_H
#define CPP_MYGIT_ARRAY_H
#include "Array.tpp"

template <class T, unsigned n>
class Array{
private:
    T _array[n];
public:
    Array();
    Array(unsigned);
    Array(const T& copy);
    ~Array();

    Array& operator = (const T& copy);

    unsigned size();
};
#endif //CPP_MYGIT_ARRAY_H
