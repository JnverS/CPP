#include "Dog.h"

Dog::Dog() : Animal("Dog"){
    _brain = new Brain();
    std::cout << "Dog default constructor called!" << std::endl;
}
Dog::Dog(const Dog& dog) : Animal(dog){
    this->_type = dog._type;
    this->_brain = new Brain(*dog._brain);
    std::cout << "Dog copy constructor called!" << std::endl;
}
Dog::~Dog(){
    delete _brain;
    std::cout << "Dog destructor called!" << std::endl;
}

Dog& Dog::operator = (const Dog& copy){
    if (this == &copy)
        return *this;
    this->_type = copy._type;
    this->_brain = new Brain(*copy._brain);
    return *this;
}

void Dog::makeSound() const {
    std::cout << "Dog makes WOF WOF" << std::endl;
}

std::string Dog::getIdea(int index) const{
    if (index >= 100)
        return ("wrong index");
    else
        return (this->_brain->getIdea(index));
}
void Dog::setIdea(int index, const std::string str){
    if (index >= 100)
        return ;
    this->_brain->setIdea(index, str);
}