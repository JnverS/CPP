#include "WrongCat.h"

WrongCat::WrongCat() : WrongAnimal("WrongCat"){
    std::cout << "WrongCat default constructor called!" << std::endl;
}
WrongCat::WrongCat(const WrongCat& copy) : WrongAnimal(copy){
    this->_type = copy._type;
    std::cout << "WrongCat copy constructor called!" << std::endl;
}
WrongCat::~WrongCat(){
    std::cout << "WrongCat destructor called!" << std::endl;
}

WrongCat& WrongCat::operator = (const WrongCat& copy){
    if (this == &copy)
        return *this;
    this->_type = copy._type;
    return *this;
}

void WrongCat::makeSound() const {
    std::cout << "Cat makes WOF WOF" << std::endl;
}