#include "Fixed.h"

const int Fixed::_literal = 8;

Fixed::Fixed(){
    _fixedNumber = 0;
}

Fixed::Fixed(const int intValue){
    _fixedNumber = intValue * (1 << _literal);
}

Fixed::Fixed(const float floatValue){
    _fixedNumber = (int)roundf(floatValue* (1 << _literal));
}

Fixed::Fixed(const Fixed& fix){
    _fixedNumber = fix.getRawBits();
}

Fixed::~Fixed(){
}

Fixed& Fixed::operator = (const Fixed& fix){
    if (this == &fix)
        return *this;
    _fixedNumber = fix.getRawBits();
    return *this;
}

int Fixed::operator > (const Fixed& fix){
    return this->getRawBits() > fix.getRawBits();
}
int Fixed::operator < (const Fixed& fix){
    return this->getRawBits() < fix.getRawBits();
}
int Fixed::operator >= (const Fixed& fix){
    return this->getRawBits() >= fix.getRawBits();
}
int Fixed::operator <= (const Fixed& fix){
    return this->getRawBits() <= fix.getRawBits();
}
int Fixed::operator == (const Fixed& fix){
    return this->getRawBits() == fix.getRawBits();
}
int Fixed::operator != (const Fixed& fix){
    return this->getRawBits() != fix.getRawBits();
}

Fixed Fixed::operator + (const Fixed& fix){
    Fixed res;
    res = this->toFloat() + fix.toFloat();
    return res;
}
Fixed Fixed::operator - (const Fixed& fix){
    Fixed res;
    res = this->toFloat() - fix.toFloat();
    return res;
}
Fixed Fixed::operator * (const Fixed& fix){
    Fixed res;
    res = this->toFloat() * fix.toFloat();
    return res;
}
Fixed Fixed::operator / (const Fixed& fix){
    Fixed res;
    res = this->toFloat() / fix.toFloat();
    return res;
}

Fixed Fixed::operator ++ (void){
    this->setRawBits(this->getRawBits() + 1);
    return *this;
}
Fixed Fixed::operator -- (void){
    this->setRawBits(this->getRawBits() - 1);
    return *this;
}
Fixed Fixed::operator ++ (__attribute__((unused)) int unused){
    Fixed a(*this);
    this->setRawBits(this->getRawBits() + 1);
    return a;
}
Fixed Fixed::operator -- (__attribute__((unused)) int unused){
    Fixed a(*this);
    this->setRawBits(this->getRawBits() - 1);
    return a;
}

std::ostream& operator << (std::ostream& out, const Fixed& fix){
    out << fix.toFloat();
    return out;
}

int Fixed::getRawBits(void) const{
    return _fixedNumber;
}

void Fixed::setRawBits(int const raw){
    _fixedNumber = raw;
}

int Fixed::toInt() const {
    return ((int)(this->_fixedNumber / (1 << _literal)));
}

float Fixed::toFloat() const {
    return ((float)this->_fixedNumber / (1 << _literal));
}

Fixed& Fixed::min(Fixed& fix1, Fixed& fix2){
    return ((fix1 < fix2) ? fix1 : fix2);
}
const Fixed& Fixed::min(const Fixed& fix1, const Fixed& fix2){
    if (fix1.getRawBits() < fix2.getRawBits())
        return fix1;
    else
        return fix2;
}
Fixed& Fixed::max(Fixed& fix1, Fixed& fix2){
    return ((fix1 > fix2) ? fix1 : fix2);
}
const Fixed& Fixed::max(const Fixed& fix1, const Fixed& fix2){
    if (fix1.getRawBits() > fix2.getRawBits())
        return fix1;
    else
        return fix2;
}