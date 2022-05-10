
#include "Zombie.h"

void Zombie::announce (void){
    std::cout << Zombie::_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name){
    _name = name;
}

std::string Zombie::getName(){
    return _name;
}

Zombie::Zombie(std::string name){
    _name = name;
    return;
}

Zombie::~Zombie(){
    std::cout << _name << " delete" << std::endl;
    return;
}

Zombie::Zombie(void) {
    return;
}
