#include <iostream>
#include <tuple>

std::tuple<double, double, int> MyRoot(double a, double b, double c);

int main()
{
    double firstCoef;
    double secondCoef;
    double thirdCoef;
    std::tuple<double, double, int> myRoots;

    std::cout << "Enter the coefficients of the quadratic equation\n";
    std::cout << "a = ";
    std::cin >> firstCoef;
    std::cout << "b = ";
    std::cin >> secondCoef;
    std::cout << "c = ";
    std::cin >> thirdCoef;

    myRoots = MyRoot(firstCoef, secondCoef, thirdCoef);

    if (std::get<2>(myRoots) == -1)
    {
        std::cout << "No roots";
    }
    else if (std::get<2>(myRoots) == 0)
    {
        std::cout << "One root x1 = x2 = " << std::get<0>(myRoots);
    }
    else if (std::get<2>(myRoots) == 1)
    {
        std::cout << "Roots x1 = " << std::get<0>(myRoots) << ", x2 = " << std::get<1>(myRoots);
    }
    else
    {
        std::cout << "Error";
    }

    return 0;
}

std::tuple<double, double, int> MyRoot(double a, double b, double c)
{
    double disc;    
    std::tuple<double, double, int> roots;
    disc = b * b - 4 * a * c;

    if (disc < 0)
    {
        std::get<2>(roots) = -1;
    }
    else if (disc == 0)
    {
        std::get<2>(roots) = 0;
        std::get<0>(roots) = -b / (2 * a);
        std::get<1>(roots) = std::get<0>(roots);
    }
    else
    {
        std::get<2>(roots) = 1;
        std::get<0>(roots) = (-b + std::sqrt(disc)) / (2 * a);
        std::get<1>(roots) = (-b - std::sqrt(disc)) / (2 * a);
    }

    return roots;
}