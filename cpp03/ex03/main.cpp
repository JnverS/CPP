#include <iostream>
#include "ClapTrap.h"
#include "ScavTrap.h"
#include "FragTrap.h"
#include "DiamondTrap.h"

int main (void)
{
    DiamondTrap		*diamond = new DiamondTrap("Sapphir");
    DiamondTrap		*diamond2 = new DiamondTrap();

    diamond->attack("Mike");
    diamond2->attack("Mike");
    diamond->takeDamage(99);
    diamond->beRepaired(10);
    diamond->takeDamage(11);
    diamond->whoAmI();
    diamond2->whoAmI();
    delete diamond;
    delete diamond2;

    return (0);
}
