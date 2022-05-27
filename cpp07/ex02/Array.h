#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
# include <exception>
# include <cctype>

template <typename T>
class Array{
private:
    T *_array;
    size_t _len;
public:
    Array();
    Array(size_t len);
    Array(const Array<T> &copy);
    virtual ~Array();

    Array& operator = (Array const &copy);

    T& operator[](size_t elem);
    size_t size(void) const;

    class WrongIndex : public std::exception{
    public:
        virtual const char * what (void) const throw();
    };
};
#include "Array.tpp"
#endif
