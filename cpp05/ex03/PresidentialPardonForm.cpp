#include "PresidentialPardonForm.h"

PresidentialPardonForm::PresidentialPardonForm (void) : AForm("noname", 25, 5){

}
PresidentialPardonForm::PresidentialPardonForm (const std::string name) : AForm(name, 25, 5){

}
PresidentialPardonForm::PresidentialPardonForm (const PresidentialPardonForm& copy){
    *this = copy;
}
PresidentialPardonForm::~PresidentialPardonForm (void){
}

PresidentialPardonForm& 	PresidentialPardonForm::operator=(const PresidentialPardonForm& copy){
    if (this == &copy)
        return (*this);

    this->AForm::operator=(copy);
    return (*this);
}

void	PresidentialPardonForm::exec(Bureaucrat const & executor) const{
    if (executor.getGrade() > this->getGradeExecute())
        throw AForm::GradeTooLowException();
    else
        std::cout << executor.getName() << " has been forgiven by President Zaphod Beeblebrox" << std::endl;
}