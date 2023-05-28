#include <iostream>

void fillArray(int size, int* arr);
void calcWithArray(int size, const int const* arr);
void sortArray(int size, int* arr);

int main()
{
    const int n = 10;
    int myArray[n];

    fillArray(n, myArray); 
    std::cout << "\n";

    calcWithArray(n, myArray);

    sortArray(n, myArray);
    std::cout << "\nArray after sorting:\n";
    for (int value : myArray)
    {
        std::cout << value << " ";
    }
    std::cout << "\n";

    return 0;
}

void fillArray(int size, int *arr)
{
    std::cout << "Enter array elements: \n";

    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }
}

void sortArray(int size, int* arr)
{   
    int min = 0;
    int buf = 0;

    for (int i = 0; i < size; i++)
    {
        min = i; 

        for (int j = i + 1; j < size; j++)
            min = (arr[j] < arr[min]) ? j : min;
        
        if (i != min)
        {
            buf = arr[i];
            arr[i] = arr[min];
            arr[min] = buf;
        }
    }
}

void calcWithArray(int size, const int const* arr)
{
    int sum = 0;
    double avg;
    int negativeSum = 0;
    int positiveSum = 0;
    int max = arr[0];
    int min = arr[0];
    int minIdx = 0;
    int maxIdx = 0;
    int evenSum = 0;
    int oddSum = 0;
    int multBetwMinAndMax = 1;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];

        if (arr[i] < 0)
        {
            negativeSum = negativeSum + arr[i];
        }
        else if (arr[i] > 0)
        {
            positiveSum = positiveSum + arr[i];
        }

        if (min > arr[i]) 
        {
            min = arr[i];
            minIdx = i;
        }

        if (max < arr[i])
        {
            max = arr[i];
            maxIdx = i;
        }

        if (arr[i] % 2 == 0)
        {
            evenSum += arr[i];
        }
        else
        {
            oddSum = oddSum + arr[i];
        }        
    }

    avg = (double)sum / size;

    int startIdx = (minIdx < maxIdx) * minIdx + (maxIdx < minIdx) * maxIdx;
    int endIdx = (maxIdx > minIdx) * maxIdx + (minIdx > maxIdx) * minIdx;

    for (int i = startIdx + 1; i < endIdx; i++)
    {
        multBetwMinAndMax = multBetwMinAndMax * arr[i];
    }

    std::cout << "Sum of array elements: " << sum << std::endl;
    std::cout << "Avg of array elements: " << avg << std::endl;
    std::cout << "Sum of negative array elements: " << negativeSum << std::endl;
    std::cout << "Sum of positive array elements: " << positiveSum << std::endl;
    std::cout << "Index of the smallest array element: " << minIdx << std::endl;
    std::cout << "Index of the largest array element: " << maxIdx << std::endl;
    std::cout << "Sum of even array elements: " << evenSum << std::endl;
    std::cout << "Sum of odd array elements: " << oddSum << std::endl;
    std::cout << "Multiply of array elements between smallest and largest values: " << multBetwMinAndMax << std::endl;
}