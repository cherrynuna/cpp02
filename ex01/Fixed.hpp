#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int					value;
		static const int	bits;
	public:
		Fixed();
		Fixed(int num);
		Fixed(const float num);
		Fixed(const Fixed& fixed);
		Fixed&	operator=(const Fixed& fixed);
		~Fixed();

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;
};

#endif
