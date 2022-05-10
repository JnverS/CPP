//
// Created by Егор on 10.05.2022.
//

#include "HumanA.h"

HumanA::~HumanA() {
    return;
}

void HumanA::attack() {
    std::cout << _name << "  attacks with their " << _weapon->getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon& weapon) {
    _name = name;
    _weapon = &weapon;
    return ;
}

