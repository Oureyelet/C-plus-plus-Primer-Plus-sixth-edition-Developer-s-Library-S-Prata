// bondini.cpp -- using escape sequences

#include <iostream>

int main()
{
    std::cout << "\aOperation \"HyperHype\" is now activated!\n";
    std::cout << "Enter your agent code:______\b\b\b\b\b\b\b\b\b";
    long code;
    std::cin >> code;
    std::cout << "\aYou entered " << code << "...\n";
    std::cout << "\aCode veryfield! Proceed with Plan Z3!\n";

    return 0;
}