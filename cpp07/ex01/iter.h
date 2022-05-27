
#ifndef EX01_ITER_H
#define EX01_ITER_H

template <typename T>
void iter(T arr[], size_t len, void (*f)(T const &))
{
    for (size_t i = 0; i < len; i++)
        f(arr[i]);
}

template<typename T>
void print(T &str)
{
    std::cout << str << std::endl;
}
#endif //EX01_ITER_H
