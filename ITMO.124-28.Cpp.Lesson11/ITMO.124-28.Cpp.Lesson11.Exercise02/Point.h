#pragma once
#include <iostream>

class Point
{
public:
	Point();
	Point(double, double);
	double distanceToCenter() const;
	friend std::ostream& operator<< (std::ostream&, const Point&);
	bool operator< (const Point&) const;
	bool operator> (const Point&) const;
private:
	double x;
	double y;
};

