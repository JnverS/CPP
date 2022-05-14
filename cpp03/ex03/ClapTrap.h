//
// Created by Егор on 12.05.2022.
//

#ifndef EX00_CLAPTRAP_H
#define EX00_CLAPTRAP_H
#include <iostream>

class ClapTrap {
private:
    std::string _name;
    int _hitPoints;
    int _energyPoints;
    int _attackDamage;
public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap&);
    ~ClapTrap();

    ClapTrap& operator = (const ClapTrap&);

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    std::string getName() const;
    int getHitPoints() const;
    int getEnergyPoints() const;
    int getDamagePoints() const;

    void setName(std::string);
    void setHitPoints(int);
    void setEnergyPoints(int);
    void setDamagePoints(int);
};


#endif //EX00_CLAPTRAP_H
