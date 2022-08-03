// hexoct1.cpp -- shows hex and octal literals

#include <iostream>

int main()
{
    int chest = 42;     // decimal integer literal
    int waist = 0x42;    // hexadecimal integer literal
    int inseam = 042;   // octal integer literal

    std::cout << "Monsieur cuts a striking figure!\n";
    std::cout << "chest = " << chest << " (42 in decimal)\n";
    std::cout << "waist = " << waist << " (0x42 in dex)\n";
    std::cout << "inseam = " << inseam << " (042 in octal)\n";

    


    return 0;
}