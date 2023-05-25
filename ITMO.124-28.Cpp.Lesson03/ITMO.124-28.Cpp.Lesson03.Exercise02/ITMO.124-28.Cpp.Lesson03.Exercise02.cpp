#include <iostream>

double getCubeRoot(double num);

int main()
{
    int number;
    double answer;

    std::cout << "Enter number: ";
    std::cin >> number;

    answer = pow(number, 1.0 / 3);
    std::cout << "Answer by pow: " << answer << std::endl;

    answer = getCubeRoot(number);
    std::cout << "Answer by iteration formula: " << answer << std::endl;

    return 0;
}

double getCubeRoot(double num)
{
    double res1;
    double res2 = num;

    do
    {
        res1 = res2;
        res2 = (num / (res1 * res2) + 2 * res1) / 3;
    } while ((res1 - res2) > 1e-10);

    return res2;
}