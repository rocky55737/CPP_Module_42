#ifndef FIXED_HPP
# define FIXED_HPP

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
};

#endif