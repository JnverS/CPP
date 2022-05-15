#ifndef EX01_FORM_H
#define EX01_FORM_H
#include <iostream>
#include "Bureaucrat.h"
class Bureaucrat;

class Form {
private:
    std::string const _name;
    bool _signed;
    int const _gradeSign;
    int const _gradeExecute;
public:
    Form();
    Form(std::string const, int const, int const);
    Form(const Form&);
    ~Form();

    Form& operator=(const Form&);

    std::string getName() const;
    bool getSigned() const;
    int getGradeSign() const;
    int getGradeExecute() const;

    void beSigned(const Bureaucrat&);

    class GradeTooHighException : public std::exception {
    public:
        virtual const char *what(void) const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        virtual const char *what(void) const throw();
    };
};

std::ostream& operator << (std::ostream&, const Form&);

#endif //EX01_FORM_H
