#include <iostream>
#include "MutantStack.h"

int main()
{
    std::cout << "=========================" << std::endl;

    MutantStack<int> mystack;
    mystack.push(5);
    mystack.push(17);
    std::cout << "top: " << mystack.top() << std::endl;
    mystack.pop();
    std::cout << "size: " <<mystack.size() << std::endl;
    mystack.push(3);
    mystack.push(5);
    mystack.push(737);
    mystack.push(0);
    MutantStack<int>::iterator it = mystack.begin();
    MutantStack<int>::iterator ite = mystack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }

    std::cout << "=========================" << std::endl;

    std::stack<int> s(mystack);
    std::cout << "Stack is empty : " << s.empty() << std::endl;
    MutantStack<int> copystack(mystack);

    std::cout << "Mystack size: " << mystack.size() << std::endl;
    std::cout << "Dstack size: " << copystack.size() << std::endl;

    std::cout << "=========================" << std::endl;

    MutantStack<int> nstack;
    nstack = mystack;
    std::cout << "Mstack size: " << mystack.size() << std::endl;
    std::cout << "Nstack size: " << nstack.size() << std::endl;

    std::cout << "=========================" << std::endl;

    MutantStack<int, std::list<int> > lst;
    lst.push(5);
    lst.push(17);
    std::cout << "top : " << lst.top() << std::endl;
    std::cout << "size : " << lst.size() << std::endl;

    std::cout << "=========================" << std::endl;

    MutantStack<int, std::vector<int> > v;
    v.push(5);
    v.push(17);
    std::cout << "top : " << v.top() << std::endl;
    std::cout << "size : " << v.size() << std::endl;
    return 0;
}