#include "Form.h"

Form::Form() : _name((std::string)"NoName"), _gradeSign(1), _gradeExecute(1){
    _signed = false;
}
Form::Form(std::string const name, int const gradeSign, int const gradeExecute) :
    _name((std::string)name), _gradeSign(gradeSign), _gradeExecute(gradeExecute){
    _signed = false;
    if (_gradeSign <= 0 || _gradeExecute <= 0)
        throw Form::GradeTooHighException();
    else if (_gradeSign > 150 || _gradeExecute > 150)
        throw Form::GradeTooLowException();
}
Form::Form(const Form& copy) : _gradeSign(1), _gradeExecute(1){
    std::string* stringPTR = (std::string*)&this->_name;
    int* execPTR = (int*)&this->_gradeExecute;
    int* signPTR = (int*)&this->_gradeSign;
    *stringPTR = copy._name;
    *execPTR = copy._gradeExecute;
    *signPTR = copy._gradeSign;
}
Form::~Form(){
}

Form& Form::operator=(const Form& copy){
    if (this == &copy)
        return *this;
    std::string* stringPTR = (std::string*)&this->_name;
    int* execPTR = (int*)&this->_gradeExecute;
    int* signPTR = (int*)&this->_gradeSign;
    *stringPTR = copy._name;
    *execPTR = copy._gradeExecute;
    *signPTR = copy._gradeSign;
    return *this;
}

std::string Form::getName() const{
    return this->_name;
}
bool Form::getSigned() const{
    return this->_signed;
}
int Form::getGradeSign() const{
    return this->_gradeSign;
}
int Form::getGradeExecute() const{
    return this->_gradeExecute;
}

void Form::beSigned(const Bureaucrat& bureaucrat){
    if (bureaucrat.getGrade() > this->_gradeSign)
        throw Form::GradeTooLowException();
    else
        this->_signed = true;
}

std::ostream& operator << (std::ostream& out, const Form& form){
    out << "Form name : " << form.getName() << ", is signed : " << form.getSigned()
        << ", grade sign " << form.getGradeSign() << ", grade execute " << form.getGradeExecute() << std::endl;
    return out;
}

const char* Form::GradeTooHighException::what (void) const throw()
{
    return ("Grade too high!");
}

const char* Form::GradeTooLowException::what (void) const throw()
{
    return ("Grade too low!");
}