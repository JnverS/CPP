#ifndef EX05_HARL_H
#define EX05_HARL_H

#include <iostream>
#include <map>

class Harl {

public:
    Harl();
    ~Harl();
    void complain(std::string level);
private:
    std::map<std::string,int> _logLevelMap;
    int _logLevel;
    void _debug();
    void _info();
    void _warning();
    void _error();
};

#endif //EX05_HARL_H
