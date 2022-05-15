//
// Created by Егор on 14.05.2022.
//

#ifndef EX03_ICHARACTER_H
#define EX03_ICHARACTER_H
#include <iostream>
class AMateria;

class ICharacter {
public:
    virtual ~ICharacter() {}
    virtual std::string const & getName() const = 0;
    virtual void equip(AMateria* m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter& target) = 0;
};


#endif //EX03_ICHARACTER_H
