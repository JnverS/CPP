
#include "Intern.h"

Intern::Intern (void){

}
Intern::Intern (const Intern& copy){
    *this = copy;
}
Intern::~Intern (void){
}

Intern& Intern::operator=(const Intern& copy){
    if (this == &copy)
        return (*this);

    return (*this);
}

AForm*	 Intern::makeForm (std::string type, std::string name){
    AForm* forms[3] = {new PresidentialPardonForm(name), new RobotomyRequestForm(name), new ShrubberyCreationForm(name)};
    std::string names[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
    int i = 0;
    for (; i < 3;i++)
        if (names[i] == type)
            break;
    for (int j = 0; j < 3; j++)
        if (i != j)
            delete forms[j];
    if (i >= 3)
    {
        std::cerr << "Intern not found form " << type << std::endl;
        return NULL;
    }
    else
    {
        std::cerr << "Intern has created form " << type << std::endl;
        return forms[i];
    }
}