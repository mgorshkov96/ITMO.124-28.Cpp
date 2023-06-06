#include <iostream>
#include "Time.h"

int main()
{
    int hours, minutes, seconds;

    std::cout << "Enter the first time" << std::endl;
    std::cout << "Hours: ";
    std::cin >> hours;
    std::cout << "Minutes: ";
    std::cin >> minutes;
    std::cout << "Seconds: ";
    std::cin >> seconds;
    Time time1(hours, minutes, seconds);
    time1.print();

    std::cout << "\nEnter the second time" << std::endl;
    std::cout << "Hours: ";
    std::cin >> hours;
    std::cout << "Minutes: ";
    std::cin >> minutes;
    std::cout << "Seconds: ";
    std::cin >> seconds;
    Time time2(hours, minutes, seconds);
    time2.print();

    std::cout << "\nSum of the first and second time: ";
    Time time3 = time1 + time2;
    time3.print();

    std::cout << "\nDifference between third and second time: ";
    Time time4 = time3 - time2;
    time4.print();

    std::cout << "\nSum of the 5,23 and fourth time: ";
    Time time5 = 5.23 + time4;
    time5.print();

    std::cout << "\nSum of the fourth time and 5,23: ";
    Time time6 = time4 + 5.23;
    time6.print();

    if (time1 > time2)
    {
        std::cout << "\nFirst time greater than second time" << std::endl;
    }
    else if (time1 < time2)
    {
        std::cout << "\nSecond time greater than first time" << std::endl;
    }
    else if (time1 == time2)
    {
        std::cout << "\nFirst time and second time are equal" << std::endl;
    }
    else
    {
        std::cerr << "Error" << std::endl;
    }

    return 0;
}