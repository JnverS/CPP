
#ifndef EX02_PRESIDENTIALPARDONFORM_H
#define EX02_PRESIDENTIALPARDONFORM_H
#include <iostream>
#include "AForm.h"

class PresidentialPardonForm : public AForm {
public:
    PresidentialPardonForm (void);
    PresidentialPardonForm (const std::string);
    PresidentialPardonForm (const PresidentialPardonForm&);
    ~PresidentialPardonForm (void);

    PresidentialPardonForm& 	operator=(const PresidentialPardonForm&);

    void	exec(Bureaucrat const & executor) const;
};


#endif //EX02_PRESIDENTIALPARDONFORM_H
