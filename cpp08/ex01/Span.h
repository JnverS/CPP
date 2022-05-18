#ifndef EX01_SPAN_H
#define EX01_SPAN_H
#include <vector>
#include <iostream>
#include <algorithm>
#include <limits.h>
#include <stdint.h>

class Span {
private:
    uint32_t _n;
    std::vector<int> _vector;
public:
    typedef std::vector<int>::iterator Iterator;
    Span();
    Span(uint32_t);
    Span(const Span&);
    ~Span();

    Span& operator = (const Span&);

    void addNumber(int);
    int shortestSpan();
    int longestSpan();
    void	addRange (Iterator start, Iterator end);
};


#endif //EX01_SPAN_H
