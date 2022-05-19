#include "Span.h"

Span::Span(): _n(0){}
Span::Span(uint32_t n) : _n(n){}
Span::Span(const Span& copy){*this = copy;}
Span::~Span(){}

Span& Span::operator = (const Span& copy){
    if (this == &copy)
        return *this;
    _n = copy._n;
    return *this;
}

void Span::addNumber(int num){
    if (_vector.size() < _n)
        _vector.push_back(num);
    else
        throw fullSpan();
}
int Span::shortestSpan(){
    if (_vector.size() <= 1)
        throw enoughElements();
    std::sort(_vector.begin(), _vector.end());

    int min_span = *std::max_element(_vector.begin(), _vector.end());

    for (std::size_t i = 0; i < _vector.size() - 1; i++)
            if (min_span > _vector[i + 1] - _vector[i])
               min_span = _vector[i + 1] - _vector[i];
    return min_span;
}

int Span::longestSpan(){
    if (_vector.size() <= 1)
        throw enoughElements();
    int min = *std::min_element(_vector.begin(), _vector.end());
    int max = *std::max_element(_vector.begin(), _vector.end());
    return (max-min);
}
void	Span::addNumber (std::vector<int>::iterator start, std::vector<int>::iterator end){
    std::vector<int> tmp;

    if (std::distance(start, end) + _vector.size() > _n)
        throw fullSpan();
    tmp.assign (start, end);
    _vector.insert (_vector.end(), tmp.begin(), tmp.end());
}
