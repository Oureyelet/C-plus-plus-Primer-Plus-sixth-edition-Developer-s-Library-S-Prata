// hexoct2.cpp -- display values in hex and octal

#include <iostream>

int main()
{
    int chest = 42;     // decimal integer literal
    int waist = 42;    // hexadecimal integer literal
    int inseam = 42;   // octal integer literal

    std::cout << "Monsieur cuts a striking figure!" << std::endl;
    std::cout << "chest = " << chest << " (decimal for 42)\n";
    std::cout << std::hex; // manipulator for changing number base
    std::cout << "waist = " << waist << " (hexadecimal for 42)\n";
    std::cout << std::oct; // manipulator for changing number base
    std::cout << "inseam = " << inseam << " (octal for 42)" << std::endl;

    return 0;
}