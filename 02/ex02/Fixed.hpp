#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
	int	num;
	static const int fractional_bit = 8;
public:
	Fixed();
	Fixed(const Fixed& copy);
	~Fixed();
	Fixed& operator=(const Fixed& copy);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	Fixed(int num_init);
	Fixed(float num_init);
	float toFloat( void ) const;
	int toInt( void ) const;
	bool operator>(const Fixed& copy) const;
	bool operator<(const Fixed& copy) const;
	bool operator>=(const Fixed& copy) const;
	bool operator<=(const Fixed& copy) const;
	bool operator==(const Fixed& copy) const;
	bool operator!=(const Fixed& copy) const;
	Fixed operator+(const Fixed& copy) const;
	Fixed operator-(const Fixed& copy) const;
	Fixed operator*(const Fixed& copy) const;
	Fixed operator/(const Fixed& copy) const;
	Fixed& operator++(void);
	Fixed& operator--(void);
	Fixed operator++(int);
	Fixed operator--(int);
	static const Fixed& min(const Fixed& copy1, const Fixed& copy2);
	static const Fixed& max(const Fixed& copy1, const Fixed& copy2);
	static Fixed& min(Fixed& copy1, Fixed& copy2);
	static Fixed& max(Fixed& copy1, Fixed& copy2);
};

std::ostream& operator<<(std::ostream& out_stream, const Fixed& fixed);

#endif