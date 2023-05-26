#include <iostream>

bool Input(int& x, int& y);

int main()
{
    int a, b;

    if (!Input(a, b))
    {
        std::cerr << "error";
        return 1;
    }

    int s = a + b;
    std::cout << s;

    return 0;
}

bool Input(int& x, int& y)
{
    std::cout << "Enter an even number: ";
    std::cin >> x;
    std::cout << "Enter an odd number: ";
    std::cin >> y;

    return (x % 2 == 0 && y % 2 != 0) * 1;
}