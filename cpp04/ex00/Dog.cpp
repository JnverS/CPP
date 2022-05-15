#include "Dog.h"

Dog::Dog() : Animal("Dog"){
    std::cout << "Dog default constructor called!" << std::endl;
}
Dog::Dog(const Dog& copy) : Animal(copy){
    this->_type = copy._type;
    std::cout << "Dog copy constructor called!" << std::endl;
}
Dog::~Dog(){
    std::cout << "Dog destructor called!" << std::endl;
}

Dog& Dog::operator = (const Dog& copy){
    if (this == &copy)
        return *this;
    this->_type = copy._type;
    return *this;
}

void Dog::makeSound() const {
    std::cout << "Dog makes WOF WOF" << std::endl;
}