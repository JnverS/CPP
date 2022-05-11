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
    int operator > (const Fixed&);
    int operator < (const Fixed&);
    int operator >= (const Fixed&);
    int operator <= (const Fixed&);
    int operator == (const Fixed&);
    int operator != (const Fixed&);
    Fixed operator + (const Fixed&);
    Fixed operator - (const Fixed&);
    Fixed operator * (const Fixed&);
    Fixed operator / (const Fixed&);
    Fixed operator ++ (int);
    Fixed operator -- (int);
    Fixed operator ++ (void);
    Fixed operator -- (void);

    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;
    Fixed& min(Fixed&, Fixed&);
    static const Fixed& min(const Fixed&, const Fixed&);
    Fixed& max(Fixed&, Fixed&);
    static const Fixed& max(const Fixed&, const Fixed&);
};
std::ostream& operator << (std::ostream&, const Fixed&);

#endif //EX00_FIXED_H
