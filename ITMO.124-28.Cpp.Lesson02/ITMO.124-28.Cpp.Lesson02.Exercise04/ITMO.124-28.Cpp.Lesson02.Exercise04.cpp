#include <iostream>
#include <string>
#include <random>

int TakeAShot(int shotNumber, int xCenter, int yCenter, double xInterference, double yInterference);

int main()
{
    constexpr int finalScore = 50;
    constexpr int leftBorder = -3;
    constexpr int rightBorder = 3;
    constexpr int bottomBorder = -3;
    constexpr int upperBorder = 3;
    double points = 0;
    int numberOfShots = 0;
    std::string level;
    int xCenter;
    int yCenter;
    double xInterference;
    double yInterference;
    
    std::cout << "Playing field size from " << leftBorder - 3 << " to " << rightBorder + 3 << " on the x - axis and ";
    std::cout << "from " << bottomBorder - 3 << " to " << upperBorder + 3 << " on the y - axis.\n";
    std::cout << "The target has a size of 6 by 6 and is located in a random place on the field.\n";   
    std::cout << "you need to score " << finalScore << " points. Enter coordinates(x, y) for the shot.\n";
    std::cout << "If you hit:\n";
    std::cout << "- the nearest third to the center - you will get 10 points;\n";
    std::cout << "- the middle third to the center - you will get 5 points;\n";
    std::cout << "- the farthest third to the center - you will get 1 point;\n";
    std::cout << "- in all other cases - you will get 0 points.\n";

    srand(time(NULL));
    xCenter = leftBorder + rand() % (rightBorder - leftBorder + 1);
    yCenter = bottomBorder + rand() % (upperBorder - bottomBorder + 1);
    xInterference = (double)(-10 + rand() % (10 + 10 + 1)) / 100;
    yInterference = (double)(-10 + rand() % (10 + 10 + 1)) / 100;               

    while (points < finalScore)
    {
        numberOfShots++;
        points += TakeAShot(numberOfShots, xCenter, yCenter, xInterference, yInterference);
        std::cout << "Your current result is " << points << ".\n";
    }

    if (numberOfShots < finalScore / 10 + 2)
    {
        level = "sniper";
    }
    else if (numberOfShots >= finalScore / 10 + 2 && numberOfShots < finalScore / 5)
    {
        level = "just a shooter";
    }
    else
    {
        level = "beginner";
    }

    std::cout << "\nYou scored " << finalScore << " points in " << numberOfShots << " shots. You are " << level << ".";
}

int TakeAShot(int shotNumber, int xOffset, int yOffset, double xInterference, double yInterference)
{
    double x;
    double y;
    double answer = 0;

    std::cout << "\nTake the " << shotNumber << " shot \n";
    std::cout << "x: ";
    std::cin >> x;
    std::cout << "y: ";
    std::cin >> y;

    x = x - xOffset + xInterference;
    y = y - yOffset + yInterference;

    if (x * x + y * y <= 9 && x * x + y * y > 4)
    {
        answer += 1;
    }
    else if (x * x + y * y <= 4 && x * x + y * y > 1)
    {
        answer += 5;
    }
    else if (x * x + y * y <= 1)
    {
        answer += 10;
    }
    else
    {
        answer += 0;
    }

    return answer;
}