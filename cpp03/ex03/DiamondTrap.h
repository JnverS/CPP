
#ifndef EX03_DIAMONDTRAP_H
#define EX03_DIAMONDTRAP_H
#include "ClapTrap.h"
#include "ScavTrap.h"
#include "FragTrap.h"

class DiamondTrap : public ScavTrap, public FragTrap{
private:
    std::string name;
public:
    DiamondTrap();
    DiamondTrap(std::string);
    DiamondTrap(const DiamondTrap&);
    ~DiamondTrap();

    DiamondTrap& operator = (const DiamondTrap&);

    void attack(const std::string& target);
    void whoAmI();
};


#endif //EX03_DIAMONDTRAP_H
