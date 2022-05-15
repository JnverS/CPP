//
// Created by Егор on 14.05.2022.
//

#ifndef EX00_CAT_H
#define EX00_CAT_H
#include "Animal.h"
#include "Brain.h"

class Cat : public Animal {
private:
    Brain* _brain;
public:
    Cat();
    Cat(const Cat& copy);
    virtual ~Cat();

    Cat& operator = (const Cat&);
    void makeSound() const;
    std::string getIdea(int) const;
    void setIdea(int, const std::string);
};


#endif //EX00_CAT_H
