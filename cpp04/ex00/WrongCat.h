//
// Created by Егор on 14.05.2022.
//

#ifndef EX00_WRONGCAT_H
#define EX00_WRONGCAT_H
#include "WrongAnimal.h"

class WrongCat : public WrongAnimal {
public:
    WrongCat();
    WrongCat(const WrongCat&);
    virtual ~WrongCat();

    WrongCat& operator = (const WrongCat&);
    void makeSound() const;
};


#endif //EX00_WRONGCAT_H
