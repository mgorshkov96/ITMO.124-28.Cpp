#include <iostream>

int main()
{   
    int year;
    bool answer;
    
    std::cout << "Enter year: ";
    std::cin >> year;

    // First variant
    std::cout << "Answer by first variant: ";
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {               
        std::cout << "Yes\n";            
    }
    else 
    {
        std::cout << "No\n";
    }

    //Second variant
    std::cout << "Answer by second variant: ";
    answer = 1 * (year % 4 == 0 && year % 100 != 0 || year % 400 == 0);
    std::cout << answer << std::endl;
    return 0;
}