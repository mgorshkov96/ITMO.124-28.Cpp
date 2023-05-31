#include <iostream>

struct Roots
{
    double root1;
    double root2;
};

Roots MyRoot(double a, double b, double c);

int main()
{
    double firstCoef;
    double secondCoef;
    double thirdCoef;
    Roots myRoots;

    std::cout << "Enter the coefficients of the quadratic equation\n";
    std::cout << "a = ";
    std::cin >> firstCoef;
    std::cout << "b = ";
    std::cin >> secondCoef;
    std::cout << "c = ";
    std::cin >> thirdCoef;
    
    myRoots = MyRoot(firstCoef, secondCoef, thirdCoef);

    std::cout << "Root1: " << myRoots.root1 << std::endl;
    std::cout << "Root2: " << myRoots.root2 << std::endl;

    return 0;
}

Roots MyRoot(double a, double b, double c)
{
    double disc;
    Roots roots;
    roots.root1 = 0;
    roots.root2 = 0;

    disc = b * b - 4 * a * c;

    if (disc < 0)
    {
        std::cout << "No roots" << std::endl;
    }    
    else if (disc == 0)
    {
        roots.root1 = -b / (2 * a);
        roots.root1 = roots.root2;        
    }
    else
    {
        roots.root1 = (-b + std::sqrt(disc)) / (2 * a);
        roots.root2 = (-b - std::sqrt(disc)) / (2 * a);        
    }

    return roots;
}