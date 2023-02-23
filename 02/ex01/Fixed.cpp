#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed() : num(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed& Fixed::operator=(Fixed const& copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->num = copy.getRawBits();
	return *this;
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
	return (this->num);
}

void Fixed::setRawBits(int const raw)
{
	this->num = raw;
}

Fixed::Fixed(int num_init) : num(num_init * 256)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float num_init) : num(roundf(num_init * 256))
{
	std::cout << "Float constructor called" << std::endl;
}

int Fixed::toInt() const
{
	return ((int)(this->num / 256));
}

float Fixed::toFloat() const
{
	return ((float)this->num / 256);
}

std::ostream& operator<<(std::ostream& out_stream, const Fixed& fixed)
{
	return (out_stream << fixed.toFloat());
}