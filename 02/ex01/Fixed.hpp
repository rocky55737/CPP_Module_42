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
	Fixed& operator=(Fixed const& copy);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	Fixed(int num_init);
	Fixed(float num_init);
	float toFloat( void ) const;
	int toInt( void ) const;
};

std::ostream& operator<<(std::ostream& out_stream, const Fixed& fixed);

#endif