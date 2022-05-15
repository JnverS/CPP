#include "Brain.h"

Brain::Brain(){
    std::cout << "Brain default constructor called!" << std::endl;
}
Brain::Brain(const Brain& copy){
    for (int i = 0; i < 100; i++)
    {
        _ideas[i] = copy._ideas[i];
    }
    std::cout << "Brain copy constructor called!" << std::endl;
}
Brain::~Brain(){
    std::cout << "Brain destructor called!" << std::endl;
}

Brain& Brain::operator = (const Brain& copy){
    if (this == &copy)
        return *this;
    for (int i = 0; i < 100; i++)
    {
        this->_ideas[i] = copy._ideas[i];
    }
    return *this;
}

std::string Brain::getIdea(int index) const{
    if (index >= 100)
        return ("wrong index");
    else
        return (this->_ideas[index]);
}
void Brain::setIdea(int index, const std::string str){
    if (index >= 100)
        return ;
    this->_ideas[index] = str;
}