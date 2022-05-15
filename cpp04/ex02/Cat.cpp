#include "Cat.h"

Cat::Cat() : Animal("Cat"){
    _brain = new Brain();
    std::cout << "Cat default constructor called!" << std::endl;
}
Cat::Cat(const Cat& copy) : Animal(copy){
    this->_type = copy._type;
    this->_brain = new Brain(*copy._brain);
    std::cout << "Cat copy constructor called!" << std::endl;
}
Cat::~Cat(){
    delete _brain;
    std::cout << "Cat destructor called!" << std::endl;
}

Cat& Cat::operator = (const Cat& copy){
    if (this == &copy)
        return *this;
    this->_type = copy._type;
    this->_brain = new Brain(*copy._brain);
    return *this;
}

void Cat::makeSound() const {
    std::cout << "Cat makes MEOW" << std::endl;
}

std::string Cat::getIdea(int index) const{
    if (index >= 100)
        return ("wrong index");
    else
        return (this->_brain->getIdea(index));
}
void Cat::setIdea(int index, const std::string str){
    if (index >= 100)
        return ;
    this->_brain->setIdea(index, str);
}