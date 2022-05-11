
#include "Harl.h"

Harl::Harl(){
    _functionMap.insert( std::pair<std::string,Function>("debug",&Harl::_debug));
    _functionMap.insert( std::pair<std::string,Function>("info",&Harl::_info));
    _functionMap.insert( std::pair<std::string,Function>("warning",&Harl::_warning));
    _functionMap.insert( std::pair<std::string,Function>("error",&Harl::_error));
}

Harl::~Harl(){
}

void Harl::complain(std::string level){
    Function f = _functionMap.at(level);
    (this->*f)();
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