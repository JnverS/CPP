#ifndef EX01_SCAVTRAP_H
#define EX01_SCAVTRAP_H
#include "ClapTrap.h"

class ScavTrap: virtual public ClapTrap{
public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap&);
    ~ScavTrap();

    ScavTrap& operator = (const ScavTrap&);

    void attack(const std::string& target);
    void guardGate();
};


#endif //EX01_SCAVTRAP_H
