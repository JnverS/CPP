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
typedef struct	s_level {
    void	(Harl::*function) (void);
} t_level;

#endif //EX05_HARL_H
