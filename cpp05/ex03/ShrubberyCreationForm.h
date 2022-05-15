//
// Created by Егор on 15.05.2022.
//

#ifndef EX02_SHRUBBERYCREATIONFORM_H
#define EX02_SHRUBBERYCREATIONFORM_H
#include <iostream>
# include <fstream>
#include "AForm.h"

class ShrubberyCreationForm : public AForm {
public:
    ShrubberyCreationForm (void);
    ShrubberyCreationForm (const std::string);
    ShrubberyCreationForm (const ShrubberyCreationForm&);
    ~ShrubberyCreationForm (void);

    ShrubberyCreationForm& 	operator=(const ShrubberyCreationForm&);

    void	exec(Bureaucrat const & executor) const;
};

#endif //EX02_SHRUBBERYCREATIONFORM_H
