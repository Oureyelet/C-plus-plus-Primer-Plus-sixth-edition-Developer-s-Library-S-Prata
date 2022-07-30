/**
 * 2.cpp -- Write a C++ program that asks for a distance in furlongs and converts it to yards.
    (One furlong is 220 yards.)
*/

#include <iostream>

//Function prototype:
double fur_to_yards(double);

int main()
{
    std::cout << "Enter distance in furlongs: ";
    double furlongs{};
    std::cin >> furlongs;

    std::cout << furlongs << " furlongs is " << fur_to_yards(furlongs) << " yards.\n"; 

    std::cin.get();
    std::cin.get();
    return 0;
}

double fur_to_yards(double n)
{
    return n * 220;
}