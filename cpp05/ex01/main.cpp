#include <iostream>
#include "Bureaucrat.h"
#include "Form.h"

int main() {

    try
    {
        Form form("Form1", 0, 1);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        Form			form("Form1", 1, 0);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        Form			form("Form1", 1, 151);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        Form			form("Form1", 151, 1);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        Bureaucrat		bureaucrat = Bureaucrat("Vasya", 1);
        Form			form("Form1", 150, 150);
        std::cout << form;
        bureaucrat.signForm(form);
        std::cout << form;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        Bureaucrat		bureaucrat = Bureaucrat("Vasya", 10);
        Form			form("Form1", 1, 1);

        std::cout << form;
        bureaucrat.signForm(form);
        std::cout << form;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
