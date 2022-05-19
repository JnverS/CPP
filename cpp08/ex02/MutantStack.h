#ifndef MY_GITCLONE_MUTANTSTACK_H
#define MY_GITCLONE_MUTANTSTACK_H

#include <iostream>

template <class Type, class Container = deque<int>>
class MutantStack{
public:
    MutantStack();
    MutantStack(const MutantStack&);
    ~MutantStack();

    MutantStack& operator = (const MutantStack&);


};

#endif //MY_GITCLONE_MUTANTSTACK_H
