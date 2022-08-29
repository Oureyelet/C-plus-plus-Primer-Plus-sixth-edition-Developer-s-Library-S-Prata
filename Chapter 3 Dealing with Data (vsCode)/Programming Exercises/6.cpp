/**
    Chapter 3 -- Programming Exercises:

    6)  - Write a program that asks how many miles you have driven and how many gallons
        of gasoline you have used and 
        
        - then reports the miles per gallon your car has gotten.

        - Or, if you prefer, the program can request distance in kilometers and petrol in liters
        and then report the result European style, in liters per 100 kilometers.
*/
#include <iostream>

void reports_the_kilometers_per_liter_your_car_has_gotten()
{
    std::cout << "How many kilometers have you driven? : ";
    double kilometers{};
    std::cin >> kilometers;
    std::cout << "How many petrol in liters have you used? : ";
    double petrol{}; 
    std::cin >> petrol;

    /*
    1km - x
    450km - 230l
    */

    double per_km{ 1.0 * petrol / kilometers };

    std::cout << "Reports the kilometer per liter your car has gotten: " << per_km << '\n';
}

int main()
{
    reports_the_kilometers_per_liter_your_car_has_gotten();

    std::cin.get();
    std::cin.get();
    return 0;
}