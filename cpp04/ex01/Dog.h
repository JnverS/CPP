//
// Created by Егор on 14.05.2022.
//

#ifndef EX00_DOG_H
#define EX00_DOG_H
#include "Animal.h"
#include "Brain.h"

class Dog : public Animal{
private:
    Brain* _brain;
public:
    Dog();
    Dog(const Dog &dog);
    virtual ~Dog();

    Dog& operator = (const Dog&);
    virtual void makeSound(void) const;
    std::string getIdea(int) const;
    void setIdea(int, const std::string);
};


#endif //EX00_DOG_H
