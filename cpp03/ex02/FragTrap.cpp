
#include "FragTrap.h"

FragTrap::FragTrap(){
    this->setName("Noname");
    this->setHitPoints(100);
    this->setEnergyPoints(100);
    this->setDamagePoints(30);
    std::cout << "FragTrap default constructor called!" << std::endl;
}
FragTrap::FragTrap(std::string name) : ClapTrap(name){
    this->setName(name);
    this->setHitPoints(100);
    this->setEnergyPoints(100);
    this->setDamagePoints(30);
    std::cout << "FragTrap string constructor called!" << std::endl;
}
FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy){
    this->setName(copy.getName());
    this->setHitPoints(copy.getHitPoints());
    this->setEnergyPoints(copy.getEnergyPoints());
    this->setDamagePoints(copy.getDamagePoints());
    std::cout << "FragTrap copy constructor called!" << std::endl;
}
FragTrap::~FragTrap(){
    std::cout << "FragTrap destructor called!" << std::endl;
}

FragTrap& FragTrap::operator = (const FragTrap& copy){
    this->setName(copy.getName());
    this->setHitPoints(copy.getHitPoints());
    this->setEnergyPoints(copy.getEnergyPoints());
    this->setDamagePoints(copy.getDamagePoints());
    return *this;
}

void FragTrap::highFivesGuys(void){
    std::cout << "FragTrap " << getName() << ", high five!" << std::endl;
}