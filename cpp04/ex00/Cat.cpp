#include "Cat.h"

Cat::Cat() : Animal("Cat"){
    std::cout << "Cat default constructor called!" << std::endl;
}
Cat::Cat(const Cat& copy) : Animal(copy){
    this->_type = copy._type;
    std::cout << "Cat copy constructor called!" << std::endl;
}
Cat::~Cat(){
    std::cout << "Cat destructor called!" << std::endl;
}

Cat& Cat::operator = (const Cat& copy){
    if (this == &copy)
        return *this;
    this->_type = copy._type;
    return *this;
}

void Cat::makeSound() const {
    std::cout << "Cat makes MEOW" << std::endl;
}