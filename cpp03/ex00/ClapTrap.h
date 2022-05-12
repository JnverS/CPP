//
// Created by Егор on 12.05.2022.
//

#ifndef EX00_CLAPTRAP_H
#define EX00_CLAPTRAP_H


class ClapTrap {
private:
    std::string _name;
    int _hitPoints;
    int _energyPoints;
    int _attackDamage;
public:
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap&);
    ~ClapTrap();

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};


#endif //EX00_CLAPTRAP_H
