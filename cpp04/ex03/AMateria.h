
#ifndef EX03_AMATERIA_H
#define EX03_AMATERIA_H
#include <iostream>
#include "ICharacter.h"

class AMateria {
protected:
    std::string _type;
    static int _index;
    static AMateria* _save[100];
public:
    AMateria();
    AMateria(std::string const &type);
    AMateria(const AMateria&);
    virtual ~AMateria();

    AMateria& operator = (const AMateria&);

    std::string const &getType() const;
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter &target);
    static void clean();
};


#endif //EX03_AMATERIA_H
