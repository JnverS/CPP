
#ifndef EX00_ZOMBIE_H
#define EX00_ZOMBIE_H

#include <iostream>
#include <string.h>

class Zombie {
public:
    Zombie();
    Zombie(std::string name);
    ~Zombie();
    void announce (void);
private:
    std::string _name;
};
Zombie* newZombie (std::string name);
void randomChump(std::string name);

#endif //EX00_ZOMBIE_H
