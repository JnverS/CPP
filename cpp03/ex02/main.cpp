#include <iostream>
#include "ClapTrap.h"
#include "ScavTrap.h"
#include "FragTrap.h"

int main (void)
{
    ScavTrap		*scav = new ScavTrap("Smith");
    ClapTrap		*clap = new ClapTrap("Jhone");
    FragTrap		*frag = new FragTrap("Mike");

    frag->attack("Neo");
    clap->attack("Morpheus");
    frag->attack("Trinity");
    frag->highFivesGuys();
    delete clap;
    delete scav;
    delete frag;

    return (0);
}
