#include <iostream>
#include "Bureaucrat.h"
#include "AForm.h"
#include "PresidentialPardonForm.h"
#include "RobotomyRequestForm.h"
#include "ShrubberyCreationForm.h"

int main() {

    AForm			*form = NULL;
    Bureaucrat		bureaucrat1("Vasya", 1);
    Bureaucrat		bureaucrat2("Petya", 40);
    Bureaucrat		bureaucrat3("Igor", 150);

    try
    {
        form = new PresidentialPardonForm("28A");
        form->exec(bureaucrat1);
        delete form;
        form = NULL;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        form = new RobotomyRequestForm("28B");
        form->exec(bureaucrat2);
        delete form;
        form = NULL;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        form = new ShrubberyCreationForm("28C");
        form->exec(bureaucrat3);
        delete form;
        form = NULL;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    bureaucrat1.execForm(PresidentialPardonForm("45CD"));
    bureaucrat2.execForm(PresidentialPardonForm("45CD"));

    bureaucrat1.execForm(RobotomyRequestForm("74A"));
    bureaucrat2.execForm(RobotomyRequestForm("74A"));

    bureaucrat2.execForm(ShrubberyCreationForm("T4"));
    delete form;
    return 0;
}
