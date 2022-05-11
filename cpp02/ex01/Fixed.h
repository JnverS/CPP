#ifndef EX00_FIXED_H
#define EX00_FIXED_H

#include <iostream>
#include <cmath>

class Fixed {
private:
    int _fixedNumber;
    static const int _literal;
public:
    Fixed();
    Fixed(const Fixed& fix);
    Fixed(const int);
    Fixed(const float);
    ~Fixed();
Fixed& operator = (const Fixed&);

    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;
};
std::ostream& operator << (std::ostream&, const Fixed&);

#endif //EX00_FIXED_H
