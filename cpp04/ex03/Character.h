//
// Created by Егор on 14.05.2022.
//

#ifndef EX03_CHARECTER_H
#define EX03_CHARECTER_H
#include <iostream>
#include "ICharacter.h"
#include "AMateria.h"

class Character : public ICharacter {
private:
    std::string _name;
    AMateria* _inventory[4];
public:
    Character();
    Character(const std::string);
    Character(const Character&);
    ~Character();

    Character& operator = (const Character&);

    virtual std::string const& getName() const;
    virtual void equip(AMateria* m);
    virtual void unequip(int idx);
    virtual void use(int idx, ICharacter& target);
};


#endif //EX03_CHARECTER_H
