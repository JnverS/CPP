
#include "Weapon.h"

const std::string& Weapon::getType(void){
    return _type;
}

void Weapon::setType(std::string type){
    _type = type;
}

Weapon::Weapon(std::string type) {
    _type = type;
}

Weapon::~Weapon() {
    return;
}

Weapon::Weapon() {
    return;
}