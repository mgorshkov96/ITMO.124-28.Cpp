#include <iostream>
#include <string>
#include <regex>

int main()
{
    std::string inputString;
    int mainNumbers[9];
    int checkNumber;
    std::string strCheckNumber;
    int multMainNumbers = 0;    
    int counter;
    bool isInt;   

    std::cout << "Enter number: ";
    getline(std::cin, inputString);

    std::regex space("\\s");
    std::regex hyphen("-");
    inputString = std::regex_replace(inputString, space, "");
    inputString = std::regex_replace(inputString, hyphen, "");    

    isInt = std::regex_match(inputString, std::regex("[[:digit:]]+"));

    if (!isInt || inputString.length() != 11)
    {
        std::cout << "False";
        return 0;
    }    

    counter = 0;    

    for (char c : inputString)
    {
        if (counter <= 8)
        {
            mainNumbers[counter] = c - '0';
            counter++;
        }
        else
        {
            strCheckNumber += c;
        }
    }

    checkNumber = std::stoi(strCheckNumber);        

    for (int i = 1; i < std::size(mainNumbers) - 1; i++)
    {
        if (mainNumbers[i - 1] == mainNumbers[i] && mainNumbers[i] == mainNumbers[i + 1])
        {
            std::cout << "False";
            return 0;
        }
    }

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

    return 0;
}