#include <iostream>
#include "Dot.h"
#include "Triangle.h"

int main()
{
    double firstDotX;
    double firstDotY;
    double secondDotX;
    double secondDotY;
    double thirdDotX;
    double thirdDotY;

    std::cout << "Enter coordinates of the first dot:\n";
    std::cout << "x = ";
    std::cin >> firstDotX;
    std::cout << "y = ";
    std::cin >> firstDotY;

    std::cout << "\nEnter coordinates of the second dot:\n";
    std::cout << "x = ";
    std::cin >> secondDotX;
    std::cout << "y = ";
    std::cin >> secondDotY;

    std::cout << "\nEnter coordinates of the third dot:\n";
    std::cout << "x = ";
    std::cin >> thirdDotX;
    std::cout << "y = ";
    std::cin >> thirdDotY;

    Dot* firstDot = new Dot(firstDotX, firstDotY);
    Dot* secondDot = new Dot(secondDotX, secondDotY);
    Triangle* myTriangle = new Triangle(firstDot, secondDot, thirdDotX, thirdDotY);

    std::cout << "\nSides of triangle\n";
    myTriangle->printSides();   
    std::cout << "Perimeter: " << myTriangle->getPerimeter() << std::endl;
    std::cout << "Area: " << myTriangle->getArea() << std::endl;
    delete myTriangle;

    std::cout << "\nPoints A and B are still alive" << std::endl;
    std::cout << "Side AB: " << firstDot->distanceTo(*secondDot) << std::endl;

    delete firstDot;
    delete secondDot;

    return 0;
}