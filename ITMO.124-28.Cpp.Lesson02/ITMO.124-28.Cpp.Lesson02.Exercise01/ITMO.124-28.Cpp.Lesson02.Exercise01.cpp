#include <iostream>

bool checkPrimeNumber(int number);

int main()
{   
    int checkingNumber;       
    bool isPrime;
    int primeNumber = 0;      

    std::cout << "Enter number: ";
    std::cin >> checkingNumber;

    isPrime = checkPrimeNumber(checkingNumber);
    
    if (isPrime)
    {
        for (int i = 2; i <= checkingNumber; i++)
        {
            isPrime = checkPrimeNumber(i);

            if (isPrime)
            {
                primeNumber++;
            }
        }

        isPrime = checkPrimeNumber(primeNumber);

        if (isPrime)
        {
            std::cout << "Yes" << std::endl;
        }
        else
        {
            std::cout << "No" << std::endl;
        }
    }
    else
    {
        std::cout << "No" << std::endl;
    }     
}

bool checkPrimeNumber(int number)
{
    int counter = 0;

    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            counter++;
        }
    }

    if (counter == 2)
    {
        return true;
    }
    else
    {
        return false;
    }   
}