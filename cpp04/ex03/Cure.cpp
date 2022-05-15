#include "Cure.h"

Cure::Cure() : AMateria("cure"){
}

Cure::Cure(const Cure& copy){
    this->_type = copy._type;
}
Cure::~Cure(){

}

Cure& Cure::operator = (const Cure& copy){
    if (this == &copy)
        return *this;
    this->_type = copy._type;
    return *this;
}

Cure* Cure::clone() const{
    Cure *cure = new Cure();
    cure->_type = this->_type;
    return cure;
}
void Cure::use(ICharacter &target){
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}