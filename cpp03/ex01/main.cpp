#include <iostream>
#include "ClapTrap.h"
#include "ScavTrap.h"

int main (void)
{
    ScavTrap		*scav = new ScavTrap("Smith");
    ClapTrap		*clap = new ClapTrap("Jhone");
    ScavTrap		*scav2 = new ScavTrap();

    scav->attack("Neo");
    clap->attack("Morpheus");
    scav2->attack("Trinity");
    scav->beRepaired(10);
    scav2->takeDamage(5);
    scav->guardGate();
    delete clap;
    delete scav;
    delete scav2;

    return (0);
}
