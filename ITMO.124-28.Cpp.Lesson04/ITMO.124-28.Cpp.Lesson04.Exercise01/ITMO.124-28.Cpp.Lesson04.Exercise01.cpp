#include <iostream>
#include <cmath>

int MyRoot(double a, double b, double c, double& x1, double& x2);

int main()
{
    double root1;
    double root2;
    double firstCoef;
    double secondCoef;
    double thirdCoef;
    int flag;

    std::cout << "Enter the coefficients of the quadratic equation\n";
    std::cout << "a = ";
    std::cin >> firstCoef;
    std::cout << "b = ";
    std::cin >> secondCoef;
    std::cout << "c = ";
    std::cin >> thirdCoef;

    flag = MyRoot(firstCoef, secondCoef, thirdCoef, root1, root2);

    if (flag == -1)
    {
        std::cout << "No roots";
    }
    else if (flag == 0)
    {
        std::cout << "One root x1 = x2 = " << root1;
    }
    else if (flag == 1)
    {
        std::cout << "Roots x1 = " << root1 << ", x2 = " << root2;
    }
    else
    {
        std::cout << "Error";
    }

    return 0;
}

int MyRoot(double a, double b, double c, double& x1, double& x2)
{
    double disc;      

    disc = b * b - 4 * a * c;

    if (disc < 0)
    {
        return -1;
    }
    else if (disc == 0)
    {
        x1 = -b / (2 * a);        
        return 0;
    }
    else
    {
        x1 = (-b + std::sqrt(disc)) / (2 * a);
        x2 = (-b - std::sqrt(disc)) / (2 * a);
        return 1;
    }
}