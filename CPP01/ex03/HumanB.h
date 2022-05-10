//
// Created by Егор on 10.05.2022.
//

#ifndef EX03_HUMANB_H
#define EX03_HUMANB_H

#include "Weapon.h"

class HumanB {
public:
    HumanB(std::string name);
    ~HumanB();
    void attack();
    void setWeapon(Weapon&);
private:
    std::string _name;
    Weapon* _weapon;
};


#endif //EX03_HUMANB_H
