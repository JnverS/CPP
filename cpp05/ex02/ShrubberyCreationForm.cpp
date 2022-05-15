
#include "ShrubberyCreationForm.h"

ShrubberyCreationForm::ShrubberyCreationForm (void) : AForm("noname", 145, 137){

}
ShrubberyCreationForm::ShrubberyCreationForm (const std::string name) : AForm(name, 145, 137){

}
ShrubberyCreationForm::ShrubberyCreationForm (const ShrubberyCreationForm& copy){
    *this = copy;
}
ShrubberyCreationForm::~ShrubberyCreationForm (void){
}

ShrubberyCreationForm& 	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& copy){
    if (this == &copy)
        return (*this);

    this->AForm::operator=(copy);
    return (*this);
}

void	ShrubberyCreationForm::exec(Bureaucrat const & executor) const {
    if (executor.getGrade() > this->getGradeExecute())
        throw AForm::GradeTooLowException();
    else {
        std::ofstream ofs;
        ofs.open(executor.getName() + "_shrubbery");
        if (ofs.fail())
        {
            std::cerr << "cannot create " << (executor.getName() + "_shrubbery") << "file" << std::endl;
            return ;
        }
        ofs <<
        "888"<< std::endl
        <<"888"<< std::endl
        <<"888"<< std::endl
        <<"888888888d888 .d88b.  .d88b.  "<< std::endl
        <<"888   888P\"  d8P  Y8bd8P  Y8b"<< std::endl
        <<"888   888    8888888888888888 "<< std::endl
        <<"Y88b. 888    Y8b.    Y8b.     "<< std::endl
        <<"\"Y888888     \"Y8888  \"Y8888"<< std::endl;
        ofs.close();
    }
}