#include <iostream>
#include <iter.h>

int main() {
    int arr[6] = {0, 1, 2, 3, 4, 5};
    ::iter(arr, static_cast<size_t>(6), &print);

    std::string str[4] = {"null", "one", "two", "tree"};
    ::iter(str, static_cast<size_t>(4), &print);

    double darr[7] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7};
    ::iter(darr, static_cast<size_t>(7), &print);
    return 0;
}
