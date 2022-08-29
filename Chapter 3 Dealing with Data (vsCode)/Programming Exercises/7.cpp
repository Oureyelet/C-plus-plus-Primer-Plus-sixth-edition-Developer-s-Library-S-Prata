/**
    Chapter 3 -- Programming Exercises:

    7)  Write a program that asks you to enter an automobile gasoline consumption figure
        in the European style (liters per 100 kilometers)
        and converts to the U.S. style of miles per gallon. 
        Note that in addition to using different units of measurement, the
        U.S. approach (distance / fuel) is the inverse of the European approach (fuel / dis-
        tance). Note that 100 kilometers is 62.14 miles, and 1 gallon is 3.875 liters.
        Thus, 19 miles per gallon is about 12.4 l/100 km, and 27 miles per gallon is about 8.7 l/100 km.
*/
#include <iostream>

int main()
{
    //Formula from google:
    //235.215/(100 US mpg) = 2.352 L/100 km
    //235.215/(1 L/100 km) = 235.215 US mpg

    std::cout << "Enter an automobile gasoline consumption figure (liters per 100 kilometers): ";
    double eu_consumption{};
    std::cin >> eu_consumption;
    double us_consumption{ 235.215 / eu_consumption };
    std::cout << "Here is converts to the U.S. style of miles per gallon: " << us_consumption << '\n';

    std::cin.get();
    std::cin.get();
    return 0;
}