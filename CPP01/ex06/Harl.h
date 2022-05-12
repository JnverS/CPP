#ifndef EX05_HARL_H
#define EX05_HARL_H

#include <iostream>

class Harl {

public:
    Harl();
    ~Harl();
    void complain(std::string level);
private:
    void _debug();
    void _info();
    void _warning();
    void _error();
};

#endif //EX05_HARL_H
