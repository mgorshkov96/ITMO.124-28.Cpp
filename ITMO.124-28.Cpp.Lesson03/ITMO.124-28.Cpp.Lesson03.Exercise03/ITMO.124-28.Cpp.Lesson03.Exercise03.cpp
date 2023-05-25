#include <iostream>
#include <cmath>

double getTriangleArea(int side);
double getTriangleArea(int firstSide, int secondSide, int thirdSide);

int main()
{
    int triangleType;
    double area;
    int side1;
    int side2;
    int side3;

    std::cout << "Select type of triangle (1 - equilateral, 2 - scalene): ";
    std::cin >> triangleType;

    if (triangleType == 1)
    {
        std::cout << "Enter side: ";
        std::cin >> side1;
        area = getTriangleArea(side1);
    }
    else if (triangleType == 2)
    {
        std::cout << "Enter three side:\n";
        std::cin >> side1 >> side2 >> side3;
        area = getTriangleArea(side1, side2, side3);
    }
    else
    {
        std::cout << "You entered wrong number of type";
        return 0;
    }

    std::cout << "Area of a triangle is " << area;

    return 0;
}

double getTriangleArea(int side)
{
    double answer;
    answer = (pow(3, 1.0 / 3) / 4) * side * side;
    return answer;
}

double getTriangleArea(int firstSide, int secondSide, int thirdSide)
{
    double answer;
    double semiPerim = (firstSide + secondSide + thirdSide) / 2;
    answer = sqrt(semiPerim * (semiPerim - firstSide) * (semiPerim - secondSide) * (semiPerim - thirdSide));
    return answer;
}