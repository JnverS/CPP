#include <iostream>
#include "Bureaucrat.h"
#include "AForm.h"
#include "PresidentialPardonForm.h"
#include "RobotomyRequestForm.h"
#include "ShrubberyCreationForm.h"
#include "Intern.h"

int main() {

    Intern	someRandomIntern;
    AForm	*rrf;

    rrf = someRandomIntern.makeForm("presidential pardon", "Vasya");
    delete rrf;

    rrf = someRandomIntern.makeForm("robotomy request", "Vasya");
    delete rrf;

    rrf = someRandomIntern.makeForm("shrubbery creation", "Vasya");
    delete rrf;

    rrf = someRandomIntern.makeForm("bla bla", "Vasya");
    return 0;
}
