
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
    void setName(std::string name);
    std::string getName(void);
private:
    std::string _name;
};
Zombie* zombieHorde( int N, std::string name );

#endif //EX00_ZOMBIE_H
