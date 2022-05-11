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
    typedef void(Harl::*Function)(void);
    std::map<std::string,Function> _functionMap;
    void _debug();
    void _info();
    void _warning();
    void _error();
};

#endif //EX05_HARL_H
