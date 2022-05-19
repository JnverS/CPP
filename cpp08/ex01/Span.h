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
    Span();
    Span(uint32_t);
    Span(const Span&);
    ~Span();

    Span& operator = (const Span&);

    void addNumber(int);
    void addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end);
    int shortestSpan();
    int longestSpan();

    class enoughElements : public std::exception{
    public:
        virtual const char * what (void) const throw() {return "Enough elements";}
    };
    class fullSpan : public std::exception{
    public:
        virtual const char * what (void) const throw() {return "Span is full!";}
    };
    uint32_t size(){return _vector.size();}
};


#endif //EX01_SPAN_H
