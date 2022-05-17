#ifndef EX02_BASE_H
#define EX02_BASE_H
#include <iostream>

class Base {
public:
    virtual ~Base();
};
class A : public Base {
public:
    A();
};
class B : public Base {
public:
    B();
};
class C : public Base {
public:
    C();
};
Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif //EX02_BASE_H
