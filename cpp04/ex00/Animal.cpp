#include "Animal.h"

Animal::Animal(){
    this->_type = "NoType";
    std::cout << "Animal default constructor called!" << std::endl;
}
Animal::Animal(std::string type){
    this->_type = type;
    std::cout << "Animal string constructor called!" << std::endl;
}
Animal::Animal(const Animal& copy){
    this->_type = copy._type;
    std::cout << "Animal copy constructor called!" << std::endl;
}
Animal::~Animal(){
    std::cout << "Animal destructor called!" << std::endl;
}

Animal& Animal::operator = (const Animal& copy){
    if (this == &copy)
        return *this;
    this->_type = copy._type;
    return *this;
}

void Animal::makeSound() const{
        std::cout << "Makes some sounds" << std::endl;
}
std::string Animal::getType(void) const{
    return this->_type;
}
void Animal::setType(std::string type){
    this->_type = type;
}