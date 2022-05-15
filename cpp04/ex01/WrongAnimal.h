//
// Created by Егор on 14.05.2022.
//

#ifndef EX00_WRONGANIMAL_H
#define EX00_WRONGANIMAL_H
#include <iostream>

class WrongAnimal {
protected:
    std::string _type;
public:
    WrongAnimal();
    WrongAnimal(const std::string);
    WrongAnimal(const WrongAnimal&);
    virtual ~WrongAnimal();

    WrongAnimal& operator =(const WrongAnimal&);

    virtual void makeSound() const;
    std::string getType(void) const;
    void setType(std::string);
};


#endif //EX00_WRONGANIMAL_H
