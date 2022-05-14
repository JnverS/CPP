#include "ClapTrap.h"

ClapTrap::ClapTrap(void){
    _name = "NoName";
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name){
    _name = name;
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
    std::cout << "String constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy){
    _name = copy._name;
    _hitPoints = copy._hitPoints;
    _energyPoints = copy._energyPoints;
    _attackDamage = copy._attackDamage;
    std::cout << "Copy constructor called" << std::endl;
}
ClapTrap& ClapTrap::operator = (const ClapTrap& copy){
    this->_name = copy._name;
    _hitPoints = copy._hitPoints;
    _energyPoints = copy._energyPoints;
    _attackDamage = copy._attackDamage;
    return *this;
}
ClapTrap::~ClapTrap(){
    std::cout << "Destructor called"<< std::endl;
}

void ClapTrap::attack(const std::string& target){
    if (this->getEnergyPoints() < 1)
        std::cout << "ClapTrap " << this->getName() << " enough energy!" << std::endl;
    else if (this->getHitPoints() < 1)
        std::cout << "ClapTrap " << this->getName() << " is dead!" << std::endl;
    else
    {
        std::cout << "ClapTrap " << this->getName() << " attacks " << target;
        std::cout << ", causing " << getDamagePoints() << " points of damage!" << std::endl;
        _energyPoints--;
    }
}

void
ClapTrap::takeDamage (uint32_t damage)
{
    if (!damage)
        std::cout << "0 damage is useless!" << std::endl;
    else if (this->getHitPoints() <= 0)
        std::cout << "ClapTrap " << this->getName() << " cannot take damage because it is dead!" << std::endl;
    else
    {
        if (this->getHitPoints() - (int)damage <= 0)
            damage = this->getHitPoints();
        this->_hitPoints -= damage;
        if (!this->getHitPoints())
            std::cout << "ClapTrap " << this->getName() << " is dead!" << std::endl;
        else
            std::cout << "ClapTrap " << this->getName() << " lost " << damage << " hit points!" << std::endl;
    }
}

void
ClapTrap::beRepaired (uint32_t amount)
{
    if (!amount)
        std::cout << "Repairing 0 hit points is useless!" << std::endl;
    else if (!this->getEnergyPoints())
        std::cout << "ClapTrap " << this->getName() << " is out of energy!" << std::endl;
    else if (this->getHitPoints() <= 0)
        std::cout << "ClapTrap " << this->getName() << " cannot be repaired because it is dead!" << std::endl;
    else
    {
        this->_hitPoints += amount;
        std::cout << "ClapTrap " << this->getName() << " has been repaired of " << amount << " hit points!" << std::endl;
    }
}

std::string ClapTrap::getName(void) const{
    return _name;
}

int ClapTrap::getHitPoints(void) const{
    return _hitPoints;
}

int ClapTrap::getEnergyPoints(void) const{
    return _energyPoints;
}

int ClapTrap::getDamagePoints(void) const{
    return _attackDamage;
}

void ClapTrap::setName(std::string name){
    _name = name;
}

void ClapTrap::setHitPoints(int hp){
    _hitPoints = hp;
}

void ClapTrap::setEnergyPoints(int energy){
    _energyPoints = energy;
}

void ClapTrap::setDamagePoints(int damage){
    _attackDamage = damage;
}