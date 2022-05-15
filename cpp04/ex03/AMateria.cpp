#include "AMateria.h"

int AMateria::_index = 0;
AMateria* AMateria::_save[100];

AMateria::AMateria(){
    this->_type = "NoType";
    if (_index < 100)
        _save[_index] = this;
}
AMateria::AMateria(std::string const &type){
    this->_type = type;
    if (_index < 100)
        _save[_index] = this;
}
AMateria::AMateria(const AMateria& copy){
    this->_type = copy._type;
    if (_index < 100)
        _save[_index] = this;
}
AMateria::~AMateria(){
}

AMateria& AMateria::operator = (const AMateria& copy){
    if (this == &copy)
        return *this;
    this->_type = copy._type;
    return *this;
}

std::string const &AMateria::getType() const{
    return (this->_type);
}

void AMateria::use(ICharacter &target){
    (void)target;
}

void AMateria::clean (void){
    for (int i = 0;i < 100; i++)
        if (_save[i])
            delete _save[i];
}