//
// Created by Егор on 14.05.2022.
//

#ifndef EX02_FRAGTRAP_H
#define EX02_FRAGTRAP_H
#include "ClapTrap.h"

class FragTrap : public ClapTrap{
public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(const FragTrap&);
    ~FragTrap();

    FragTrap& operator = (const FragTrap&);

    void highFivesGuys(void);
};


#endif //EX02_FRAGTRAP_H
