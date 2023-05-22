#include <iostream>

int main()
{
    constexpr int tenCoin = 10;
    constexpr int fiveCoin = 5;
    constexpr int twoCoin = 2;
    constexpr int oneCoin = 1;
    int numberOfTenCoins;
    int numberOfFiveCoins;
    int numberOfTwoCoins;
    int numberOfOneCoins;
    int sum;

    std::cout << "Enter sum: ";
    std::cin >> sum;

    numberOfTenCoins = sum / tenCoin;
    numberOfFiveCoins = sum % tenCoin / fiveCoin;
    numberOfTwoCoins = (sum % tenCoin) % fiveCoin / twoCoin;
    numberOfOneCoins = ((sum % tenCoin) % fiveCoin) % twoCoin / oneCoin;

    std::cout << "Ten Coins\t" << "Five Coins\t" << "Two Coins\t" << "One Coins\n";
    std::cout << numberOfTenCoins << "\t\t" << numberOfFiveCoins << "\t\t" << numberOfTwoCoins << "\t\t" << numberOfOneCoins;
}