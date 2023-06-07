#include "Point.h"
#include <cmath>
#include <iostream>

Point::Point() : x(0), y(0)
{}

Point::Point(double xVal, double yVal) : x(xVal), y(yVal)
{}

double Point::distanceToCenter() const
{
	return sqrt(pow(0 - Point::x, 2) + pow(0 - Point::y, 2));
}

std::ostream& operator<< (std::ostream& out, const Point& point)
{
	out << "x = " << point.x << ", y = " << point.y << std::endl;
	return out;
}

bool Point::operator< (const Point& point) const
{
	return Point::distanceToCenter() < point.distanceToCenter();
}

bool Point::operator> (const Point& point) const
{
	return Point::distanceToCenter() > point.distanceToCenter();
}