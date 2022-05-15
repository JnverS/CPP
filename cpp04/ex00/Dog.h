//
// Created by Егор on 14.05.2022.
//

#ifndef EX00_DOG_H
#define EX00_DOG_H
#include "Animal.h"

class Dog : public Animal{
public:
    Dog();
    Dog(const Dog&);
    virtual ~Dog();

    Dog& operator = (const Dog&);
    virtual void makeSound(void) const;
};


#endif //EX00_DOG_H
