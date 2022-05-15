//
// Created by Егор on 14.05.2022.
//

#ifndef EX03_MATERIASOURCE_H
#define EX03_MATERIASOURCE_H
#include <iostream>
#include "IMateriaSource.h"

class MateriaSource : public IMateriaSource{
private:
    AMateria* _inventory[4];
public:
    MateriaSource();
    MateriaSource(const MateriaSource&);
    virtual ~MateriaSource();

    MateriaSource& operator= (const MateriaSource&);

    virtual void learnMateria(AMateria*);
    virtual AMateria* createMateria(std::string const & type);
};


#endif //EX03_MATERIASOURCE_H
