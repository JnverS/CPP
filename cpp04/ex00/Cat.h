//
// Created by Егор on 14.05.2022.
//

#ifndef EX00_CAT_H
#define EX00_CAT_H
#include "Animal.h"

class Cat : public Animal {
public:
    Cat();
    Cat(const Cat&);
    virtual ~Cat();

    Cat& operator = (const Cat&);
    void makeSound() const;
};


#endif //EX00_CAT_H
