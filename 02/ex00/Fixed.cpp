#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed() : num(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->num = copy.getRawBits();
	return (*this);
}

Fixed::Fixed(const Fixed& copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->num);
}

void Fixed::setRawBits(int const raw)
{
	this->num = raw;
}
