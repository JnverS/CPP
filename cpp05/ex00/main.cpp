#include <iostream>
#include "Bureaucrat.h"

int main() {

    try {
        Bureaucrat bureaucrat = Bureaucrat("Vasya", 102);
        std::cout << bureaucrat;
        bureaucrat.incrementGrade();
        std::cout << bureaucrat;
        bureaucrat.decrementGrade();
        std::cout << bureaucrat;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try {
        Bureaucrat bureaucrat = Bureaucrat("Vasya", 150);
        std::cout << bureaucrat;
        bureaucrat.decrementGrade();
        std::cout << bureaucrat;
        bureaucrat.incrementGrade();
        std::cout << bureaucrat;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try {
        Bureaucrat bureaucrat = Bureaucrat("Vasya", 0);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try {
        Bureaucrat bureaucrat = Bureaucrat("Vasya", 151);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
