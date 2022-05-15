
#ifndef EX00_ANIMAL_H
#define EX00_ANIMAL_H
#include <iostream>

class Animal {
protected:
    std::string _type;
public:
    Animal();
    Animal(const std::string type);
    Animal(const Animal&);
    virtual ~Animal();

    Animal& operator =(const Animal&);

    virtual void makeSound() const;
    std::string getType(void) const;
    void setType(std::string);
};


#endif //EX00_ANIMAL_H
