#ifndef EX01_FORM_H
#define EX01_FORM_H
#include <iostream>
#include "Bureaucrat.h"
class Bureaucrat;

class AForm {
private:
    std::string const _name;
    bool _signed;
    int const _gradeSign;
    int const _gradeExecute;
public:
    AForm();
    AForm(std::string const, int const, int const);
    AForm(const AForm&);
    virtual ~AForm();

    AForm& operator=(const AForm&);

    std::string getName() const;
    bool getSigned() const;
    int getGradeSign() const;
    int getGradeExecute() const;

    void beSigned(const Bureaucrat&);
    virtual void exec(Bureaucrat const &) const = 0;

    class GradeTooHighException : public std::exception {
    public:
        virtual const char *what(void) const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        virtual const char *what(void) const throw();
    };
};

std::ostream& operator << (std::ostream&, const AForm&);

#endif //EX01_FORM_H
