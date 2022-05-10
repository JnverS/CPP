//
// Created by Егор on 10.05.2022.
//

#ifndef EX03_WEAPON_H
#define EX03_WEAPON_H

#include <iostream>
#include <string.h>

class Weapon {
public:
    Weapon(std::string);
    Weapon();
    ~Weapon();
    const std::string& getType(void);
    void setType(std::string);
private:
    std::string _type;
};


#endif //EX03_WEAPON_H
