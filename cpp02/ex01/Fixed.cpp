#include "Fixed.h"

const int Fixed::_literal = 8;

Fixed::Fixed(){
    std::cout << "Default constructor called" << std::endl;
    _fixedNumber = 0;
}

Fixed::Fixed(const int intValue){
    std::cout << "Int constructor called" << std::endl;
    _fixedNumber = intValue * (1 << _literal);
}

Fixed::Fixed(const float floatValue){
    std::cout << "Float constructor called" << std::endl;
    _fixedNumber = (int)roundf(floatValue* (1 << _literal));
}

Fixed::Fixed(const Fixed& fix){
    std::cout << "Copy constructor called" << std::endl;
    _fixedNumber = fix.getRawBits();
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator = (const Fixed& fix){
    std::cout << "Copy assignment operator called" << std::endl;
    if (this == &fix)
        return *this;
    _fixedNumber = fix.getRawBits();
    return *this;
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