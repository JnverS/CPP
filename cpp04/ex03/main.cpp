#include <iostream>
#include "ICharacter.h"
#include "Character.h"
#include "AMateria.h"
#include "IMateriaSource.h"
#include "MateriaSource.h"
#include "Ice.h"
#include "Cure.h"

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    ICharacter* you = new Character("you");
    AMateria* tmp;

    tmp = src->createMateria("ice");
    me->equip(tmp);
    me->use(0, *you);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    me->use(2, *you);

    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);

    IMateriaSource* source = new MateriaSource();
    source->learnMateria(new Cure());
    source->learnMateria(new Ice());

    you->equip(source->createMateria("cure"));
    you->equip(source->createMateria("ice"));

    for (int i = 0;i < 4; i++)
        me->use(i, *you);

    delete bob;
    delete me;
    delete you;
    delete src;
    AMateria::clean();
    return 0;
}