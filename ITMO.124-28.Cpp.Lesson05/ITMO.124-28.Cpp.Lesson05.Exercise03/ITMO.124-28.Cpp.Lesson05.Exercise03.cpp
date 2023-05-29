#include <iostream>

bool checkValue(const int& size, int* arr, const int& value);

int main()
{
    int myArray[] = { 1,2,3,4,5,6,7,2 };
    int arraySize = 8;
    int checkingValue;
    bool isExist;

    do  
    {
        std::cout << "Enter value for checking: ";
        std::cin >> checkingValue;

        isExist = checkValue(arraySize, myArray, checkingValue);

        if (isExist)
        {
            std::cout << "This value is in an array!\n";

            for (int val : myArray)
            {
                std::cout << val << " ";
            }

            std::cout << std::endl << std::endl;
        }
        else
        {
            std::cout << "This value isn't in an array :(\n";
        }
    } while (isExist);    

    return 0;
}

bool checkValue(const int& size, int* arr, const int& value)
{
    int buf;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == value)
        {
            if (i != 0)
            {
                buf = arr[i];
                arr[i] = arr[i - 1];
                arr[i - 1] = buf;
            }
            
            return true;
        }
    }

    return false;
}