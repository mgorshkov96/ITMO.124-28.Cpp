#include <iostream>

long rowSum(int n);

int main()
{
    int num;
    long sum;

    std::cout << "Enter number (n > 0): ";
    std::cin >> num;

    if (num > 0)
    {
        sum = rowSum(num);
    }
    else
    {
        std::cout << "Wrong number";
        return 0;
    }

    std::cout << sum;
    return 0;
}

long rowSum(int n)
{
    if (n == 0)
    {
        return 0;
    }  

    return n * 5 + rowSum(n - 1);
}