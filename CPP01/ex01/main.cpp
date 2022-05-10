#include "Zombie.h"

int main() {
    Zombie *zombie = zombieHorde(5, "Foo");
    Zombie *zombie2 = zombieHorde(15, "Boo");

    for (int i = 0; i < 5; i++)
        zombie[i].announce();
    delete [] zombie;

    for (int i = 0; i < 15; i++)
        zombie2[i].announce();
    delete [] zombie2;
    return 0;
}
