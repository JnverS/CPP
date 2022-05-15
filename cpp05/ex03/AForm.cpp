#include "AForm.h"

AForm::AForm() : _name((std::string)"NoName"), _gradeSign(1), _gradeExecute(1){
    _signed = false;
}
AForm::AForm(std::string const name, int const gradeSign, int const gradeExecute) :
    _name((std::string)name), _gradeSign(gradeSign), _gradeExecute(gradeExecute){
    _signed = false;
    if (_gradeSign <= 0 || _gradeExecute <= 0)
        throw AForm::GradeTooHighException();
    else if (_gradeSign > 150 || _gradeExecute > 150)
        throw AForm::GradeTooLowException();
}
AForm::AForm(const AForm& copy) : _gradeSign(1), _gradeExecute(1){
    std::string* stringPTR = (std::string*)&this->_name;
    int* execPTR = (int*)&this->_gradeExecute;
    int* signPTR = (int*)&this->_gradeSign;
    *stringPTR = copy._name;
    *execPTR = copy._gradeExecute;
    *signPTR = copy._gradeSign;
}
AForm::~AForm(){
}

AForm& AForm::operator=(const AForm& copy){
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

std::string AForm::getName() const{
    return this->_name;
}
bool AForm::getSigned() const{
    return this->_signed;
}
int AForm::getGradeSign() const{
    return this->_gradeSign;
}
int AForm::getGradeExecute() const{
    return this->_gradeExecute;
}

void AForm::beSigned(const Bureaucrat& bureaucrat){
    if (bureaucrat.getGrade() > this->_gradeSign)
        throw AForm::GradeTooLowException();
    else
        this->_signed = true;
}

std::ostream& operator << (std::ostream& out, const AForm& form){
    out << "Form name : " << form.getName() << ", is signed : " << form.getSigned()
        << ", grade sign " << form.getGradeSign() << ", grade execute " << form.getGradeExecute() << std::endl;
    return out;
}

const char* AForm::GradeTooHighException::what (void) const throw()
{
    return ("Grade too high!");
}

const char* AForm::GradeTooLowException::what (void) const throw()
{
    return ("Grade too low!");
}