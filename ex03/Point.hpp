#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	private:
		Fixed const x;
		Fixed const y;
	public:
		Point(void);
		Point(float const x, float const y);
		Point(const Point& obj);
		Point& operator=(const Point& obj);
		~Point(void);
		Fixed getX(void) const;
		Fixed getY(void) const;
};

#endif
