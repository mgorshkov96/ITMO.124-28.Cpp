#include <iostream>

int* max_vect(int size, const int* firstArr, const int* secondArr);

int main()
{
    int myArray1[] = { 1,2,3,4,5,6,7,2 };
    int myArray2[] = { 7,6,5,4,3,2,1,3 };
    int arraySize = sizeof(myArray1) / sizeof(myArray1[0]); 
    int* maxValArr; 

    maxValArr = max_vect(arraySize, myArray1, myArray2); 
    
    for (int i = 0; i < arraySize; i++)
    {
        std::cout << maxValArr[i] << " ";
    }
        
    std::cout << std::endl;

    delete[]maxValArr; 
}

int* max_vect(int size, const int* firstArr, const int* secondArr)
{
    int* maxArr = new int[size];

    for (int i = 0; i < size; i++)
    {
        if (firstArr[i] > secondArr[i])
        {
            maxArr[i] = firstArr[i];
        }
        else
        {
            maxArr[i] = secondArr[i];
        }
    }

    return maxArr;
}