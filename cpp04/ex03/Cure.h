//
// Created by Егор on 14.05.2022.
//

#ifndef EX03_CURE_H
#define EX03_CURE_H
#include "AMateria.h"

class Cure : public AMateria {
public:
    Cure();
    Cure(const Cure&);
    ~Cure();

    Cure& operator = (const Cure&);

    virtual Cure* clone() const;
    virtual void use(ICharacter &target);
};


#endif //EX03_CURE_H
