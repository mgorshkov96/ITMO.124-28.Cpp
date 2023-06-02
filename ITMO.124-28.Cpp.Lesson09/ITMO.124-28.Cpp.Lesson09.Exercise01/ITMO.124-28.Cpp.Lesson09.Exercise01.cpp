#include <iostream>
#include <string>
#include "Triangle.h"

int main()
{
    double a, b, c;
    double area;
    Triangle myTriangle;

    std::cout << "Enter sides of triangle\n";
    std::cout << "A = ";
    std::cin >> a;
    std::cout << "B = ";
    std::cin >> b;
    std::cout << "C = ";
    std::cin >> c;

    try
    {
        myTriangle = Triangle(a, b, c);
    }
    catch (Triangle::WrongSideOfTriangle& ex)
    {
        std::cout << "\nError: ";
        ex.printMessage();
        return 1;
    }

    area = myTriangle.getArea();
    std::cout << "\nArea of the triangle is " << area;

    return 0;
}