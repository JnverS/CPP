#include "Ice.h"

Ice::Ice() : AMateria("ice"){
}

Ice::Ice(const Ice& copy){
    this->_type = copy._type;
}
Ice::~Ice(){

}

Ice& Ice::operator = (const Ice& copy){
    if (this == &copy)
        return *this;
    this->_type = copy._type;
    return *this;
}

Ice* Ice::clone() const{
    Ice *ice = new Ice();
    ice->_type = this->_type;
    return ice;
}
void Ice::use(ICharacter &target){
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}