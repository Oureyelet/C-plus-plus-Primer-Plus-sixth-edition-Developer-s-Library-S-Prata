/**
    Chapter 3 -- Programming Exercises:

    1)      Write a short program that asks for your height in integer inches and then converts
            your height to feet and inches. Have the program use the underscore character to
            indicate where to type the response.Also use a const symbolic constant to repre-
            sent the conversion factor.
*/
#include <iostream>

int main()
{
    const int one_ft_is_inches{ 12 };  // 1 ft = 12 inches
    int inches{};

    std::cout << "Enter you height in inches please_: ";
    std::cin >> inches; // 5 
    
    int feet{ inches / one_ft_is_inches };
    int inches_remainder{ inches % one_ft_is_inches }; // remainder in inches

    std::cout << inches << " inches is " << feet << " feet, and " << inches_remainder << " in.\n";

    std::cin.get();
    std::cin.get();
    return 0;
}