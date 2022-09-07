// Listing 4.6 numstr.cpp -- following number input with line input
#include <iostream>

int main()
{
    std::cout << "What year was your house built?\n";
    int year;
    (std::cin >> year).get();
    // or instead of above: std::cin.get();
    std::cout << "What is its street address?\n";
    char address[80];
    std::cin.getline(address, 80);
    std::cout << "Year build: " << year << std::endl;
    std::cout << "Address: " << address << std::endl;
    std::cout << "Done!\n";

    return 0;
}