#include <iostream>
#include "ClapTrap.h"

int main (void)
{
    ClapTrap		*clap = new ClapTrap("Smith");

    clap->attack("Neo");

    clap->attack("Trinity");
    clap->beRepaired(10);
    clap->takeDamage(1);
    delete clap;

    return (0);
}
