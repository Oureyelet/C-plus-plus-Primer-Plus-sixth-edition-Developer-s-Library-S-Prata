/*
6.cpp -- Write a program that has main() call a user-defined function that takes a distance
in light years as an argument and then returns the distance in astronomical units.
The program should request the light year value as input from the user and display
the result, as shown in the following code:
Enter the number of light years: 4.2
4.2 light years = 265608 astronomical units.

An astronomical unit is the average distance from the earth to the sun (about
150,000,000 km or 93,000,000 miles), and a light year is the distance light travels in
a year (about 10 trillion kilometers or 6 trillion miles). (The nearest star after the
sun is about 4.2 light years away.) Use type double (as in Listing 2.4) and this con-
version factor:
1 light year = 63,240 astronomical units
*/

#include <iostream>
#include <string>

//function prototype
double lYears_to_aUnits(double);

int main()
{
    double light_years{};
    std::string plural{ " light years" }; // just for case if use entered only 1
    std::string singular{ " light year" }; // just for case if use entered more then 1

    std::cout << "Enter the number of light year/s: ";
    std::cin >> light_years;

    if(light_years > 1)
        std::cout << light_years << plural << " = " << lYears_to_aUnits(light_years) << " astronomical units.\n";
    else
        std::cout << light_years << singular << " = " << lYears_to_aUnits(light_years) << " astronomical units.\n";

    return 0;
}

double lYears_to_aUnits(double n)
{
    return n * 63240;
}