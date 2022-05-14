
#include "ScavTrap.h"

ScavTrap::ScavTrap(){
    this->setName("NoName");
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setDamagePoints(20);
    std::cout << "ScavTrap default constructor called" << std::endl;
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    this->setName(name);
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setDamagePoints(20);
    std::cout << "ScavTrap string constructor called" << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy){
    this->setName(copy.getName());
    this->setHitPoints(copy.getHitPoints());
    this->setEnergyPoints(copy.getEnergyPoints());
    this->setDamagePoints(copy.getDamagePoints());
    std::cout << "ScavTrap copy constructor called" << std::endl;
}
ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator = (const ScavTrap& copy){
    this->setName(copy.getName());
    this->setHitPoints(copy.getHitPoints());
    this->setEnergyPoints(copy.getEnergyPoints());
    this->setDamagePoints(copy.getDamagePoints());
    return *this;
}

void ScavTrap::attack(const std::string& target){
    if (this->getEnergyPoints() < 1)
        std::cout << "ScavTrap " << this->getName() << " enough energy!" << std::endl;
    else if (this->getHitPoints() < 1)
        std::cout << "ScavTrap " << this->getName() << " is dead!" << std::endl;
    else
    {
        std::cout << "ScavTrap " << this->getName() << " attacks " << target;
        std::cout << ", causing " << getDamagePoints() << " points of damage!" << std::endl;
        setEnergyPoints(getEnergyPoints() - 1);
    }
}

void ScavTrap::guardGate(){
    std::cout << this->getName() << " in Gate keeper mode!"<< std::endl;
}