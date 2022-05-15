#include "WrongAnimal.h"

WrongAnimal::WrongAnimal(){
    this->_type = "NoType";
    std::cout << "WrongAnimal default constructor called!" << std::endl;
}
WrongAnimal::WrongAnimal(std::string type){
    this->_type = type;
    std::cout << "WrongAnimal string constructor called!" << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal& copy){
    this->_type = copy._type;
    std::cout << "WrongAnimal copy constructor called!" << std::endl;
}
WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal destructor called!" << std::endl;
}

WrongAnimal& WrongAnimal::operator = (const WrongAnimal& copy){
    if (this == &copy)
        return *this;
    this->_type = copy._type;
    return *this;
}

void WrongAnimal::makeSound() const{
        std::cout << "Silence... " << std::endl;
}
std::string WrongAnimal::getType(void) const{
    return this->_type;
}
void WrongAnimal::setType(std::string type){
    this->_type = type;
}