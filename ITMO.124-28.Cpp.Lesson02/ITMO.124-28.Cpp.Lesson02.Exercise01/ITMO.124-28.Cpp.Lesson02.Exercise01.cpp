#include <iostream>

bool checkPrimeNumber(int number);

int main()
{   
    int checkingNumber;       
    /*int counter = 0;
    int counter2 = 0;
    int counter3 = 0;*/
    int primeNumber = 0;

    bool isPrime;
    

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

    /*for (int i = 1; i <= checkingNumber; i++) 
    {        
        if (checkingNumber % i == 0) 
        {
            counter++;
        }        
    }
    
    if (counter == 2) 
    {
        for (int i = 2; i <= checkingNumber; i++) 
        {
            counter2 = 0;
            for (int j = 1; j <= i; j++) 
            {               
                if (i % j == 0)
                {
                    counter2++;
                }               
            }
            if (counter2 == 2)
            {
                primeNumber++;
            }
        }

        for (int i = 1; i <= primeNumber; i++)
        {
            if (primeNumber % i == 0)
            {
                counter3++;
            }
        }

        if (counter3 == 2) 
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
    }*/

    
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