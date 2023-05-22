#include <iostream>
#include <array>
#include <string>

int main()
{
    long long number;
    int numbers[11];
    int mainNumbers[9];
    int checkNumber;
    int multMainNumbers = 0;
    
    std::cout << "Enter number\n";
    std::cin >> number;

    numbers[0] = number / 10000000000;
    numbers[1] = (number % 10000000000) / 1000000000;
    numbers[2] = (number % 1000000000) / 100000000;
    numbers[3] = (number % 100000000) / 10000000;
    numbers[4] = (number % 10000000) / 1000000;
    numbers[5] = (number % 1000000) / 100000;
    numbers[6] = (number % 100000) / 10000;
    numbers[7] = (number % 10000) / 1000;
    numbers[8] = (number % 1000) / 100;
    numbers[9] = (number % 100) / 10;
    numbers[10] = number % 10;
    
    for (int i = 0; i < 9; i++)
    {
        mainNumbers[i] = numbers[i];
    }

    std::string strCheckNumber = std::to_string(numbers[9]) + std::to_string(numbers[10]);
    checkNumber = std::stoi(strCheckNumber);

    for (int i = 0, j = std::size(mainNumbers); i < std::size(mainNumbers); i++, j--)
    {
        multMainNumbers = multMainNumbers + mainNumbers[i] * j;
    }

    if (multMainNumbers == 100 || multMainNumbers == 101)
    {
        multMainNumbers = 00;
    }
    else if (multMainNumbers > 101)
    {
        multMainNumbers = multMainNumbers % 101;

        if (multMainNumbers == 100)
        {
            multMainNumbers = 00;
        }
    }

    if (multMainNumbers == checkNumber)
    {
        std::cout << "True";
    }
    else 
    {
        std::cout << "False";
    }
}
