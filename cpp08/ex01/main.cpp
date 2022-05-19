#include <iostream>
#include "Span.h"

int main()
{
    std::cout << "===============" << std::endl;
    try{
        Span sp = Span(5);

        sp.addNumber(3);
        sp.addNumber(6);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "===============" << std::endl;
    try{
        Span sp = Span(1);

        sp.addNumber(3);
        sp.addNumber(17);

        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "===============" << std::endl;
    try{
        Span sp = Span(0);

        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "===============" << std::endl;
    try {
        Span sp2 = Span(10000);
        std::vector<int> arr;

        arr.assign(10000, 10);

        sp2.addNumber(arr.begin(), arr.end());
        std::cout << "size : " << sp2.size() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}