
#ifndef EX00_WHATEVER_H
#define EX00_WHATEVER_H

template<typename T>
void swap(T& a, T& b){
    T tmp = a;
    a = b;
    b = tmp;
}
template<typename T>
T min(const T& a, const T& b){
    if (a < b){
        return a;
    }
    return b;
}
template<typename T>
T max(const T& a, const T& b){
    if (a > b){
        return a;
    }
    return b;
}
#endif //EX00_WHATEVER_H
