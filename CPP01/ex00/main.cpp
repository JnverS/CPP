#include <iostream>
#include "Zombie.h"

int main() {

    Zombie *zombie = newZombie("Foo");

    randomChump("Jhone");
    delete zombie;
    return 0;
}
