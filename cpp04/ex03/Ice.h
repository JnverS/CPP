
#ifndef EX03_ICE_H
#define EX03_ICE_H
#include "AMateria.h"

class Ice :public AMateria{
public:
    Ice();
    Ice(const Ice&);
    ~Ice();

    Ice& operator = (const Ice&);

    virtual Ice* clone() const;
    virtual void use(ICharacter &target);
};


#endif //EX03_ICE_H
