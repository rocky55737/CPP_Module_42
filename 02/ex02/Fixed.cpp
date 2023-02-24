#include "Fixed.hpp"
# include <cmath>

Fixed::Fixed() : num(0)
{}

Fixed& Fixed::operator=(const Fixed& copy)
{
	this->num = copy.getRawBits();
	return *this;
}

Fixed::Fixed(const Fixed& copy)
{
	*this = copy;
}

Fixed::~Fixed()
{}

int Fixed::getRawBits(void) const
{
	return (this->num);
}

void Fixed::setRawBits(int const raw)
{
	this->num = raw;
}

Fixed::Fixed(int num_init) : num(num_init * 256)
{}

Fixed::Fixed(float num_init) : num(roundf(num_init * 256))
{}

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

bool Fixed::operator>(const Fixed& copy) const
{
	return (this->num > copy.num);
}

bool Fixed::operator<(const Fixed& copy) const
{
	return (this->num < copy.num);
}

bool Fixed::operator>=(const Fixed& copy) const
{
	return (this->num >= copy.num);
}

bool Fixed::operator<=(const Fixed& copy) const
{
	return (this->num <= copy.num);
}

bool Fixed::operator==(const Fixed& copy) const
{
	return (this->num == copy.num);
}

bool Fixed::operator!=(const Fixed& copy) const
{
	return (this->num != copy.num);
}

Fixed Fixed::operator+(const Fixed& copy) const
{
	Fixed temp(this->num + copy.num);
	return (temp);
}

Fixed Fixed::operator-(const Fixed& copy) const
{
	Fixed temp(this->num - copy.num);
	return (temp);
}

Fixed Fixed::operator*(const Fixed& copy) const
{
	Fixed temp((float)this->num / 256 * (float)copy.num / 256);
	return (temp);
}

Fixed Fixed::operator/(const Fixed& copy) const
{
	Fixed temp((float)this->num / (float)copy.num);
	return (temp);
}

Fixed Fixed::operator++(void)
{
	this->num++;
	return (*this);
}

Fixed Fixed::operator--(void)
{
	this->num--;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	this->num++;
	return (temp);
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	this->num--;
	return (temp);
}

const Fixed& Fixed::min(const Fixed& copy1, const Fixed& copy2)
{
	return (copy1 < copy2 ? copy1 : copy2);
}

const Fixed& Fixed::max(const Fixed& copy1, const Fixed& copy2)
{
	return (copy1 > copy2 ? copy1 : copy2);
}

Fixed& Fixed::min(Fixed& copy1, Fixed& copy2)
{
	return (copy1 < copy2 ? copy1 : copy2);
}

Fixed& Fixed::max(Fixed& copy1, Fixed& copy2)
{
	return (copy1 > copy2 ? copy1 : copy2);
}