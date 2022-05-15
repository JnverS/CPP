
#ifndef EX00_BUREACRAT_H
#define EX00_BUREACRAT_H
#include <iostream>

class Bureaucrat {
private:
    std::string const _name;
    int _grade;
public:
    Bureaucrat();
    Bureaucrat(std::string, int);
    Bureaucrat(const Bureaucrat&);
    ~Bureaucrat();

    Bureaucrat& operator = (const Bureaucrat&);

    std::string getName() const;
    int getGrade() const;
    void incrementGrade();
    void decrementGrade();

    class GradeTooHighException : public std::exception {
    public:
        virtual const char *what(void) const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        virtual const char *what(void) const throw();
    };
};

std::ostream& operator << (std::ostream&, const Bureaucrat&);

#endif //EX00_BUREACRAT_H
