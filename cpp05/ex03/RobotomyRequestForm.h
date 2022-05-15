//
// Created by Егор on 15.05.2022.
//

#ifndef EX02_ROBOTOMYREQUESTFORM_H
#define EX02_ROBOTOMYREQUESTFORM_H
#include <iostream>
#include "AForm.h"

class RobotomyRequestForm : public AForm {
public:
    RobotomyRequestForm (void);
    RobotomyRequestForm (const std::string);
    RobotomyRequestForm (const RobotomyRequestForm&);
    ~RobotomyRequestForm (void);

    RobotomyRequestForm& 	operator=(const RobotomyRequestForm&);

    void	exec(Bureaucrat const & executor) const;
};

#endif //EX02_ROBOTOMYREQUESTFORM_H
