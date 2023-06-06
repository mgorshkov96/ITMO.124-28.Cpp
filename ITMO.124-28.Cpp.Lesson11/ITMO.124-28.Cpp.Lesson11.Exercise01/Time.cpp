#include "Time.h"
#include <iostream>

Time::Time()
{
    Time::hours = 0;
    Time::minutes = 0;
    Time::seconds = 0;
}

Time::Time(int hours, int minutes, int seconds)
{
    if (hours < 0 || minutes < 0 || seconds < 0)
    {
        throw TimeError();
    }

    Time::hours = hours;
    Time::minutes = minutes;
    Time::seconds = seconds;

    Time::check();
}

void Time::check()
{
    if (Time::seconds >= 100)
    {
        Time::minutes++;
        Time::seconds = Time::seconds - 100;
    }

    if (Time::minutes >= 60)
    {
        Time::hours++;
        Time::minutes = Time::minutes - 60;
    }
    
    if (Time::seconds < 0)
    {
        Time::seconds += 100;
        Time::minutes--;
    }

    if (Time::minutes < 0)
    {
        Time::minutes += 60;
        Time::hours--;
    }  
}

void Time::print()
{
    std::cout << Time::hours << ":" << Time::minutes << ":" << Time::seconds << std::endl;
}

int Time::convertToSec() const
{
    return Time::hours * 3600 + Time::minutes * 60 + Time::seconds;
}

Time Time::addTime(const Time& time2) const
{
    Time sumTime;
    sumTime.hours = (hours)+time2.hours;
    sumTime.minutes = (minutes)+time2.minutes;
    sumTime.seconds = (seconds)+time2.seconds;

    if (sumTime.hours < 0 || sumTime.minutes < 0 || sumTime.seconds < 0)
    {
        throw TimeError();
    }

    sumTime.check();
    return sumTime;
}

Time Time::operator+ (const Time& time2) const
{
    Time sumTime;
    sumTime.hours = (hours)+time2.hours;
    sumTime.minutes = (minutes)+time2.minutes;
    sumTime.seconds = (seconds)+time2.seconds;

    if (sumTime.hours < 0 || sumTime.minutes < 0 || sumTime.seconds < 0)
    {
        throw TimeError();
    }

    sumTime.check();
    return sumTime;
}

Time operator+ (double hours, const Time& time2)
{
    double hrs, min, sec;
    sec = std::modf(std::modf(hours, &hrs) * 60, &min) * 60;
    Time time1(static_cast<int>(hrs), static_cast<int>(min), static_cast<int>(sec));

    return time1 + time2;
}

Time operator+ (const Time& time1, double hours) 
{
    return hours + time1;
}

Time Time::operator- (const Time& time2) const
{
    Time difTime;
    difTime.hours = (hours)-time2.hours;
    difTime.minutes = (minutes)-time2.minutes;
    difTime.seconds = (seconds)-time2.seconds;
    difTime.check();

    if (difTime.hours < 0 || difTime.minutes < 0 || difTime.seconds < 0)
    {
        throw TimeError();
    }
    
    return difTime;
}

bool Time::operator> (const Time& time2) const
{
    return Time::convertToSec() > time2.convertToSec();
}

bool Time::operator< (const Time& time2) const
{
    return Time::convertToSec() < time2.convertToSec();
}

bool Time::operator== (const Time& time2) const
{
    return Time::convertToSec() == time2.convertToSec();
}