#include "MateriaSource.h"

MateriaSource::MateriaSource() {
    for (int i = 0;i < 4;i++)
        this->_inventory[i] = NULL;
}
MateriaSource::MateriaSource(const MateriaSource& copy){
    for (int i = 0;i < 4;i++)
        this->_inventory[i] = copy._inventory[i];
}
MateriaSource::~MateriaSource(){
}

MateriaSource& MateriaSource::operator=(const MateriaSource &copy) {
    if (this == &copy)
        return *this;
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = copy._inventory[i];
    return *this;
}

void MateriaSource::learnMateria(AMateria *m) {
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i] == NULL)
        {
            this->_inventory[i] = m;
            break;
        }
    }

}

AMateria* MateriaSource::createMateria(const std::string &type) {
    for (int i = 0; i < 4;i++)
    {
        if (_inventory[i] && _inventory[i]->getType() == type)
            return _inventory[i]->clone();
    }
    return 0;
}