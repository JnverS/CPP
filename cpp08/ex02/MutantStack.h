#ifndef MY_GITCLONE_MUTANTSTACK_H
#define MY_GITCLONE_MUTANTSTACK_H

#include <iostream>
#include <stack>
#include <algorithm>
#include <list>
#include <vector>

template <class T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>{
protected:
    Container _container;
public:
    typedef typename Container::iterator 	iterator;

    MutantStack() {}
    MutantStack(const MutantStack<T> &copy) {
        this->_container = copy._container;
    }
    ~MutantStack() {}

    MutantStack& operator = (const MutantStack& copy){
//        if (this == &copy) return *this;
//        this->_container = copy._container;
//        return *this;
        _container = copy._container;
        return *this;
    }

    iterator begin(){
        return (this->_container.begin());
    }

    iterator end(){
        return (this->_container.end());
    }

    void push(T p)
    {
        _container.push_back(p);
    }

    void pop()
    {
        _container.pop_back();
    }

    T &top()
    {
        return (_container.back());
    }

    bool empty()
    {
        return (_container.empty());
    }

    size_t size()
    {
        return (_container.size());
    }

};

#endif //MY_GITCLONE_MUTANTSTACK_H
