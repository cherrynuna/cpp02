#include "Point.hpp"


bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	bool ret = false;

	if ((a.getY() > point.getY()) != (b.getY() > point.getY()))
	{
		if (((a.getX() - b.getX()) * ((point.getY() - a.getY()) / (b.getY() - a.getY())) + b.getX()) > point.getX())
		{
			if (ret)
				ret = false;
			else
				ret = true;
		}
	}
	if ((a.getY() > point.getY()) != (c.getY() > point.getY()))
	{
		if (((a.getX() - c.getX()) * ((point.getY() - a.getY()) / (c.getY() - a.getY())) + c.getX()) > point.getX())
		{
			if (ret)
				ret = false;
			else
				ret = true;
		}
	}
	if ((b.getY() > point.getY()) != (c.getY() > point.getY()))
	{
		if (((b.getX() - c.getX()) * ((point.getY() - b.getY()) / (c.getY() - b.getY())) + c.getX()) > point.getX())
		{
			if (ret)
				ret = false;
			else
				ret = true;
		}
	}
	return (ret);
}
