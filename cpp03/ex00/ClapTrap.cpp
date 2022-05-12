#include "ClapTrap.h"


ClapTrap::ClapTrap(std::string name){
    _name = name;
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
    std::cout << _name << " created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy){
    _name = copy.name;
    _hitPoints = copy._hitPoints;
    _energyPoints = copy._energyPoints;
    _attackDamage = copy._attackDamage;
    std::cout << _name << " created" << std::endl;
}
ClapTrap::~ClapTrap(){
    std::cout << _name << " delete" << std::endl;
}

void ClapTrap::attack(const std::string& target){
    std::cout << "ClapTrap " << _name << " attacks " << target;
}
void ClapTrap::takeDamage(unsigned int amount){
    std::cout << " , causing " << amount << " points of damage!" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount){
    std::cout << "ClapTrap " << _name << " repaired " << amount << " points of damage!" << std::endl;
}