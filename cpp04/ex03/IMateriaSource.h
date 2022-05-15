//
// Created by Егор on 14.05.2022.
//

#ifndef EX03_IMATERIASOURCE_H
#define EX03_IMATERIASOURCE_H
#include "AMateria.h"
#include <iostream>

class IMateriaSource {
public:
    virtual ~IMateriaSource() {};
    virtual void learnMateria(AMateria*) = 0;
    virtual AMateria* createMateria(std::string const &type) = 0;

};

#endif //EX03_IMATERIASOURCE_H
