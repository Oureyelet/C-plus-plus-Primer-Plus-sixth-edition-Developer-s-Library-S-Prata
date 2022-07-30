// sqrt.cpp -- using the sqrt() function

#include <iostream>
#include <cmath> // or math.h -- for sqrt() function

int main()
{
    double area;

    std::cout << "Enter the floor area, in square metre, of your home: ";
    std::cin >> area;

    double side{ sqrt(area) };

    std::cout << "That's the equivalent of a square " << side
              << " meter to the side." << std::endl;
    std::cout << "How fascinating!\n";

    std::cin.get();
    std::cin.get();
    return 0;
}