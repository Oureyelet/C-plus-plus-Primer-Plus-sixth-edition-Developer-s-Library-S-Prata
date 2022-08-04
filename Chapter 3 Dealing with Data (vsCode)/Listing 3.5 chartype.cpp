// chartype.cpp -- The 'char' type

#include <iostream>

int main()
{
    char ch;    // declare a char variable

    std::cout << "Enter a character: \n";
    std::cin >> ch;
    std::cout << "Hola! ";
    std::cout << "Thank you for the " << ch << " character.\n";

    return 0;
}