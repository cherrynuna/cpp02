#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

std::ostream&	operator <<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}

bool	isTriangle(Point const a, Point const b, Point const c)
{
	// 직선 AB와 AC의 기울기가 같으면
	Fixed crossProduct = (b.getX() - a.getX()) * (c.getY() - a.getY()) -
						 (b.getY() - a.getY()) * (c.getX() - a.getX());

	return !(crossProduct == Fixed(0));
}

int	main(void)
{
	Point	a(0, 0);
	Point	b(0, 8);
	Point	c(8, 0);
	Point	p(2, 8);
	Point	p2(4, 7);

	if (!isTriangle(a, b, c))
	{
		std::cerr << "no triangle" << std::endl;
		return (1);
	}

	std::cout << "Point a.x = " << a.getX() << " a.y = " << a.getY() << std::endl;
	std::cout << "Point b.x = " << b.getX() << " b.y = " << b.getY() << std::endl;
	std::cout << "Point c.x = " << c.getX() << " c.y = " << c.getY() << std::endl;
	std::cout << "Point p.x = " << p.getX() << " p.y = " << p.getY() << std::endl;
	std::cout << "Point p2.x = " << p2.getX() << " p2.y = " << p2.getY() << std::endl;

	if (bsp(a, b, c, p))
		std::cout << "p is in the triangle" << std::endl;
	else
		std::cout << "p is out of the triangle" << std::endl;
	if (bsp(a, b, c, p2))
		std::cout << "p2 is in the triangle" << std::endl;
	else
		std::cout << "p2 is out of the triangle" << std::endl;
	return 0;
}
