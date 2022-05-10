//
// Created by Егор on 10.05.2022.
//

#include "Zombie.h"

void Zombie::announce (void){
    std::cout << Zombie::_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name){
    _name = name;
    return;
}

Zombie::~Zombie(){
    std::cout << _name << " delete" << std::endl;
    return;
}