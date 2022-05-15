#include "Bureaucrat.h"

Bureaucrat::Bureaucrat() : _name((std::string)"NoName"){
    this->_grade = 150;
    std::cout << "Bureaucrat default constructor called!" << std::endl;
}
Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name){
    if (grade <= 0)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_grade = grade;
}
Bureaucrat::Bureaucrat(const Bureaucrat& copy){
    std::string* stringPTR = (std::string*)&this->_name;
    *stringPTR = copy._name;
    this->_grade = copy._grade;
    std::cout << "Bureaucrat copy constructor called!" << std::endl;
}
Bureaucrat::~Bureaucrat(){
    std::cout << "Bureaucrat destructor called!" << std::endl;
}

Bureaucrat& Bureaucrat::operator = (const Bureaucrat& copy){
    if (this == &copy)
        return *this;
    std::string* stringPTR = (std::string*)&this->_name;
    *stringPTR = copy._name;
    this->_grade = copy._grade;
    return *this;
}

std::ostream& operator << (std::ostream& out, const Bureaucrat& copy){
    out << copy.getName() << ", bureaucrat grade " << copy.getGrade() << std::endl;
    return out;
}

std::string Bureaucrat::getName() const{
    return _name;
}
int Bureaucrat::getGrade() const{
    return _grade;
}
void Bureaucrat::incrementGrade(){
    if (getGrade() - 1 <= 0)
        throw Bureaucrat::GradeTooHighException();
    else
        this->_grade -= 1;
}
void Bureaucrat::decrementGrade(){
    if (getGrade() + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_grade += 1;
}

const char* Bureaucrat::GradeTooHighException::what (void) const throw()
{
    return ("Grade too high!");
}

const char* Bureaucrat::GradeTooLowException::what (void) const throw()
{
    return ("Grade too low!");
}