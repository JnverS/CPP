
#include "Harl.h"

Harl::Harl(){
    _logLevelMap.insert( std::pair<std::string,int>("DEBUG",0));
    _logLevelMap.insert( std::pair<std::string,int>("INFO",1));
    _logLevelMap.insert( std::pair<std::string,int>("WARNING",2));
    _logLevelMap.insert( std::pair<std::string,int>("ERROR",3));
}

Harl::~Harl(){
}

void Harl::complain(std::string level){
    if (_logLevelMap.count((level)))
        _logLevel = _logLevelMap.at(level);
    else
        _logLevel = -1;

    switch (_logLevel) {
        case 0:_debug();
        case 1:_info();
        case 2:_warning();
        case 3:_error();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
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