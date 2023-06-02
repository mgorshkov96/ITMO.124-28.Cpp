#pragma once
#include <string>
#include <iostream>

class Triangle
{
public:
	Triangle();
	Triangle(double a, double b, double c);
	double getArea();
	class WrongSideOfTriangle
	{
	public:
		Triangle::WrongSideOfTriangle() : message("One side is greater than sum of the other two sides") {}
		void printMessage() const { std::cout << message << std::endl; }
	private:
		std::string message;
	};
private:
	double sideA;
	double sideB;
	double sideC;
};

