//
// Created by Егор on 15.05.2022.
//

#ifndef EX03_INTERN_H
#define EX03_INTERN_H
#include <iostream>
#include "AForm.h"
#include "PresidentialPardonForm.h"
#include "RobotomyRequestForm.h"
#include "ShrubberyCreationForm.h"

class Intern {
public:
    Intern (void);
    Intern (const Intern&);
    virtual ~Intern (void);

    Intern& operator=(const Intern&);

    AForm*	 makeForm (std::string, std::string);
};


#endif //EX03_INTERN_H
