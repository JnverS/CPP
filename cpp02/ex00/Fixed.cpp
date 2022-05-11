#include "Fixed.h"

Fixed::Fixed(){
    std::cout << "Default constructor called" << std::endl;
    _fixedNumber = 0;
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

int Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called" << std::endl;
    return _fixedNumber;
}

void Fixed::setRawBits(int const raw){
    std::cout << "setRawBits member function called" << std::endl;
    _fixedNumber = raw;
}