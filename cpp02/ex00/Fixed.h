#ifndef EX00_FIXED_H
#define EX00_FIXED_H

#include <iostream>

class Fixed {
private:
    int _fixedNumber;
    static const int _literal;
public:
    Fixed();
    Fixed(const Fixed& fix);
    ~Fixed();
    Fixed& operator = (const Fixed&);
    int getRawBits(void) const;
    void setRawBits(int const raw);
};


#endif //EX00_FIXED_H
