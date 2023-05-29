#include <iostream>
#include <cstring>

int main(int argc, char *argv[])
{
    //ITMO.124-28.Cpp.Lesson05.Exercise04.exe -a 5 5
    int firstVal;
    int secondVal;

    if (argc != 4)
    {
        std::cout << 0;
        return 0;
    }

    firstVal = atoi(argv[2]);
    secondVal = atoi(argv[3]);

    if (firstVal == 0 || secondVal == 0)
    {
        std::cout << 0;
        return 0;
    }

    if (strncmp(argv[1], "-a", 2) == 0)
    {
        std::cout << firstVal + secondVal;
        return firstVal + secondVal;
    }
    else if (strncmp(argv[1], "-m", 2) == 0)
    {
        std::cout << firstVal * secondVal;
        return firstVal * secondVal;
    }
    else
    {
        std::cout << 0;
        return 0;
    }
}