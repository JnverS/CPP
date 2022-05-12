
#include "Harl.h"

Harl::Harl(){
}

Harl::~Harl(){
}

void Harl::complain(std::string level){
    std::string arrayMessage[4] = { "debug", "info", "warning", "error"};
    t_level arrayFunctions[4] = {{&Harl::_debug}, {&Harl::_info}, {&Harl::_warning}, {&Harl::_error}};

    for (int i = 0; i < 4; i++)
    {
        if (arrayMessage[i] == level)
        {
            (this->*(arrayFunctions[i].function))();
            return;
        }
    }
    std::cout << "Level not found" << std::endl;
}

void Harl::_debug(){
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::_info(){
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. \nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::_warning(){
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. \nI’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::_error(){
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}