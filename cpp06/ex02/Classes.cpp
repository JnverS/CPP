
#include "Classes.h"

Base::~Base() {
}

A::A(){
    std::cout << "A default constructor called" << std::endl;
}
B::B(){
    std::cout << "B default constructor called" << std::endl;
}
C::C(){
    std::cout << "C default constructor called" << std::endl;
}

Base*
generate (void)
{
    int i = std::rand() % 3;

    if (i == 0)
        return (new A());
    else if (i == 1)
        return (new B());
    else
        return (new C());
}

void
identify (Base& p)
{

    try
    {
        A& a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << "A" << std::endl;
        return;
    } catch (std::bad_cast& e) {}

    try
    {
        B& b = dynamic_cast<B&>(p);
        (void)b;
        std::cout << "B" << std::endl;
        return;
    } catch (std::bad_cast& e) {}

    try
    {
        C& c = dynamic_cast<C&>(p);
        (void)c;
        std::cout << "C" << std::endl;
        return;
    } catch (std::bad_cast& e) {}
}

void
identify (Base* p)
{
    try
    {
        A* a = dynamic_cast<A*>(p);
        if (a)
        {
            std::cout << "A" << std::endl;
            return;
        }
    } catch (std::bad_cast& e) {}

    try
    {
        B* b = dynamic_cast<B*>(p);
        if (b)
        {
            std::cout << "B" << std::endl;
            return;
        }
    } catch (std::bad_cast& e) {}

    try
    {
        C* c = dynamic_cast<C*>(p);
        if (c)
        {
            std::cout << "C" << std::endl;
            return;
        }
    } catch (std::bad_cast& e) {}
}