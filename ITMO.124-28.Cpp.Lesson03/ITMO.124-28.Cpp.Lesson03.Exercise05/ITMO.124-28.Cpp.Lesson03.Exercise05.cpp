#include <iostream>
#include <string>

std::string convertToBinary(int num);

int main()
{
    int number;
    std::string binNumber;

    std::cout << "Enter number: ";
    std::cin >> number;

    binNumber = convertToBinary(number);
    std::cout << binNumber;
    return 0;
}

std::string convertToBinary(int num)
{
    if (num < 2)
    {
        return std::to_string(num);
    }
    
    return convertToBinary(num / 2) + std::to_string(num % 2);
}