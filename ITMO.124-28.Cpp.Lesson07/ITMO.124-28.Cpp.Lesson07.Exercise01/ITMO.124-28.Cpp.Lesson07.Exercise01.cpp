#include <iostream>

struct Time
{
    int hours;
    int minutes;
    int seconds;

    int getSeconds()
    {
        return (hours * 60 + minutes) * 100 + seconds;
    }

    void printTime()
    {
        std::cout << "Time: " << getSeconds() << "sec" << std::endl;
    }
};

Time addTime(const Time &t1, const Time &t2)
{
    Time time;
    time.hours = t1.hours + t2.hours;
    time.minutes = t1.minutes + t2.minutes;
    time.seconds = t1.seconds + t2.seconds;

    if (time.seconds >= 100)
    {
        time.minutes++;
        time.seconds = time.seconds - 100;
    }

    if (time.minutes >= 60)
    {
        time.hours++;
        time.minutes = time.minutes - 60;
    }

    return time;
}

Time subtractTime(const Time& t1, const Time& t2)
{
    Time time;
    time.hours = t1.hours - t2.hours;
    time.minutes = t1.minutes - t2.minutes;
    time.seconds = t1.seconds - t2.seconds;

    if (time.seconds >= 100)
    {
        time.minutes++;
        time.seconds = time.seconds - 100;
    }

    if (time.minutes >= 60)
    {
        time.hours++;
        time.minutes = time.minutes - 60;
    }

    return time;
}

Time inputTime()
{
    Time t;
    std::cout << "\nEnter hours: ";
    std::cin >> t.hours;
    std::cout << "Enter minutes: ";
    std::cin >> t.minutes;
    std::cout << "Enter seconds:  ";
    std::cin >> t.seconds;    
    return t;
}

int main()
{
    Time myTime1 = inputTime();
    myTime1.printTime();

    Time myTime2 = inputTime();
    myTime2.printTime();

    std::cout << "\nAdd first time and second time\n";
    Time myTime3 = addTime(myTime1, myTime2);
    myTime3.printTime();

    std::cout << "\nSubtract second time from third time\n";
    Time myTime4 = subtractTime(myTime3, myTime2);
    myTime4.printTime();
}
