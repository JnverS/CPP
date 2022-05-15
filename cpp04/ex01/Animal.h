
#ifndef EX00_ANIMAL_H
#define EX00_ANIMAL_H
#include <iostream>

class Animal {
protected:
    std::string _type;
public:
    Animal();
    Animal(const std::string type);
    Animal(const Animal& animal);
    virtual ~Animal();

    Animal& operator =(const Animal&);

    virtual void makeSound() const;
    std::string getType(void) const;
    void setType(std::string);
    virtual std::string getIdea(int) const = 0;
    virtual void setIdea(int, const std::string) = 0;
};


#endif //EX00_ANIMAL_H
