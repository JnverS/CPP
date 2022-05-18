#include "Array.h"

template <class T, unsigned n> Array<T, n>::Array(){

}
template <class T, unsigned n> Array<T, n>::Array(unsigned){}
template <class T, unsigned n> Array<T, n>::Array(const T& copy){}
template <class T, unsigned n> Array<T, n>::~Array(){}

Array& template <class T, unsigned n> Array<T, n>::operator = (const T& copy){}

unsigned template <class T, unsigned n> Array<T, n>::size(){}
