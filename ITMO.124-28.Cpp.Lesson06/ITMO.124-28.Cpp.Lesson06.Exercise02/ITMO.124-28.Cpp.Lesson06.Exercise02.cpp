#include <iostream>
#include <fstream>

int main()
{
    const int n = 10;
    int arr[n] = { 1, 25, 6, 32, 43, 5, 96, 23, 4, 55 };
    int min = 0;
    int buf = 0;

    std::ofstream fout("arrays.txt", std::ios::app);

    if (!fout)
    {
        std::cerr << "Recording failed" << std::endl;
    }

    for (int i : arr)
    {
        fout << i << " ";
    }

    fout << "\n";

    for (int i = 0; i < n; i++)
    {
        min = i; 

        for (int j = i + 1; j < n; j++)
        {
            min = (arr[j] < arr[min]) ? j : min;
        }            
        
        if (i != min)
        {
            buf = arr[i];
            arr[i] = arr[min];
            arr[min] = buf;
        }
    }

    for (int i : arr)
    {
        fout << i << " ";
    }

    fout.close();

    return 0;
}