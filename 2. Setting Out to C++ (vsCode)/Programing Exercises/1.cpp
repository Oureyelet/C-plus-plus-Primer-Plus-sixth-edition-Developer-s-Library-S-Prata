/**
 * 1.cpp -- Write a C++ program that displays your name and address (or if you value your
    privacy, a fictitious name and address).
*/

#include <iostream>
#include <string>

int main(void)
{
    std::string full_name{ "Mateusz Adam Kacperski" };
    std::string address{ "Chantry Waters, Waterside Way, Wakefield" };

    std::cout << "Your ditails: \n";
    std::cout << "full name: " << full_name << std::endl;
    std::cout << "address: " << address << '\n';

    std::cin.get();
    return 0;
}