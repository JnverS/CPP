
#include "DiamondTrap.h"

DiamondTrap::DiamondTrap(){
    this->setName("NoName_clap_name");
    name = "NoName";
    this->setHitPoints(FragTrap::getHitPoints());
    this->setEnergyPoints(ScavTrap::getEnergyPoints());
    this->setDamagePoints(FragTrap::getDamagePoints());
}
DiamondTrap::DiamondTrap(std::string name){
    this->setName(name + "_clap_name");
    this->name = name;
    this->setHitPoints(FragTrap::getHitPoints());
    this->setEnergyPoints(ScavTrap::getEnergyPoints());
    this->setDamagePoints(FragTrap::getDamagePoints());
}
DiamondTrap::DiamondTrap(const DiamondTrap& copy){
    this->setName(copy.getName());
    this->name = copy.name;
    this->setHitPoints(copy.FragTrap::getHitPoints());
    this->setEnergyPoints(copy.ScavTrap::getEnergyPoints());
    this->setDamagePoints(copy.FragTrap::getDamagePoints());
}
DiamondTrap::~DiamondTrap(){

}

DiamondTrap& DiamondTrap::operator = (const DiamondTrap& copy){
    if (this == &copy)
            return *this;
    this->setName(copy.ClapTrap::getName());
    this->name = copy.name;
    this->setHitPoints(copy.FragTrap::getHitPoints());
    this->setEnergyPoints(copy.ScavTrap::getEnergyPoints());
    this->setDamagePoints(copy.FragTrap::getDamagePoints());
    return *this;
}

void DiamondTrap::attack(const std::string& target){
    this->ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(){
    std::cout << "Name : " << this->name << " ClapName : " << ClapTrap::getName() << std::endl;
}