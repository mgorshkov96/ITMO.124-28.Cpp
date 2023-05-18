#include <iostream>
#include <cmath>

int main()
{
    double x1;
    double y1;
    double x2;
    double y2;
    double x3;
    double y3;
    double x4;
    double y4;
    double x5;
    double y5;
    double square;

    std::cout << "Enter the coordinates of the first point (x, y)\n";
    std::cin >> x1;
    std::cin >> y1;

    std::cout << "Enter the coordinates of the second point (x, y)\n";
    std::cin >> x2;
    std::cin >> y2;

    std::cout << "Enter the coordinates of the third point (x, y)\n";
    std::cin >> x3;
    std::cin >> y3;

    std::cout << "Enter the coordinates of the fourth point (x, y)\n";
    std::cin >> x4;
    std::cin >> y4;

    std::cout << "Enter the coordinates of the fifth point (x, y)\n";
    std::cin >> x5;
    std::cin >> y5;

    square = abs(x1 * y2 + x2 * y3 + x3 * y4 + x4 * y5 + x5 * y1 - x2 * y1 - x3 * y2 - x4 * y3 - x5 * y4 - x1 * y5) / 2;

    std::cout << "\nThe area of the pentagon is " << square;
    return 0;
}
