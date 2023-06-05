#include "Triangle.h"
#include <iostream>
#include <cmath>

Triangle::Triangle(Dot* a, Dot* b, const double& x, const double& y)
{
	Triangle::dotA = a;
	Triangle::dotB = b;
	Triangle::dotC = new Dot(x, y);
}

Triangle::~Triangle()
{
	delete Triangle::dotC;
}

void Triangle::printSides() const
{
	double side1 = Triangle::dotA->distanceTo(*Triangle::dotB);
	double side2 = Triangle::dotB->distanceTo(*Triangle::dotC);
	double side3 = Triangle::dotC->distanceTo(*Triangle::dotA);

	std::cout << "First side: " << side1 << std::endl;
	std::cout << "Second side: " << side2 << std::endl;
	std::cout << "Third side: " << side3 << std::endl;
}

double Triangle::getPerimeter() const
{
	return Triangle::dotA->distanceTo(*Triangle::dotB) + Triangle::dotB->distanceTo(*Triangle::dotC) +
		Triangle::dotC->distanceTo(*Triangle::dotA);
}

double Triangle::getArea() const
{
	double area;
	double semiPerim = Triangle::getPerimeter() / 2.0;
	double side1 = Triangle::dotA->distanceTo(*Triangle::dotB);
	double side2 = Triangle::dotB->distanceTo(*Triangle::dotC);
	double side3 = Triangle::dotC->distanceTo(*Triangle::dotA);	

	area = sqrt(semiPerim * (semiPerim - side1) * (semiPerim - side2) * (semiPerim - side3));
	return area;
}
