

#ifndef EX03_HUMANA_H
#define EX03_HUMANA_H

#include "Weapon.h"

class HumanA {
public:
    HumanA(std::string, Weapon&);
    ~HumanA();
    void attack();
private:
    std::string _name;
    Weapon* _weapon;
};


#endif //EX03_HUMANA_H
