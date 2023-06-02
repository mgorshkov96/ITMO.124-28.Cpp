#include <iostream>
#include "Time.h"

int main()
{
    int hours;
    int minutes;
    int seconds;
    Time time3;

    std::cout << "Enter first time\n";
    std::cout << "Enter hours: ";
    std::cin >> hours;
    std::cout << "Enter minutes: ";
    std::cin >> minutes;
    std::cout << "Enter seconds: ";
    std::cin >> seconds;
    Time time1(hours, minutes, seconds);
    std::cout << "First time: ";
    time1.print();

    std::cout << "\nEnter second time\n";
    std::cout << "Enter hours: ";
    std::cin >> hours;
    std::cout << "Enter minutes: ";
    std::cin >> minutes;
    std::cout << "Enter seconds: ";
    std::cin >> seconds;
    Time time2(hours, minutes, seconds);
    std::cout << "Second time: ";
    time2.print();

    time3 = time1.addTime(time2);
    std::cout << "\nSum time: ";
    time3.print();

    return 0;
}