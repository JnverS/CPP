
#include "RobotomyRequestForm.h"

RobotomyRequestForm::RobotomyRequestForm (void) : AForm("noname", 72, 55){

}
RobotomyRequestForm::RobotomyRequestForm (const std::string name) : AForm(name, 72, 45){

}
RobotomyRequestForm::RobotomyRequestForm (const RobotomyRequestForm& copy){
    *this = copy;
}
RobotomyRequestForm::~RobotomyRequestForm (void){
}

RobotomyRequestForm& 	RobotomyRequestForm::operator=(const RobotomyRequestForm& copy){
    if (this == &copy)
        return (*this);

    this->AForm::operator=(copy);
    return (*this);
}

void	RobotomyRequestForm::exec(Bureaucrat const & executor) const {
    if (executor.getGrade() > this->getGradeExecute())
        throw AForm::GradeTooLowException();
    else {
        std::cout << "(drilling noises)" << std::endl;
        if (executor.getGrade() % 2 == 0)
            std::cout << executor.getName() << " has been robotomized successfully 50% of the time" << std::endl;
        else
            std::cout << executor.getName() << " robotomized failed" << std::endl;
    }
}