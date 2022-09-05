// Listing 4.3 instr1.cpp -- reading more than one string.
#include <iostream>

int main()
{
    const int arSize = 20;
    char name[arSize];
    char dessert[arSize];

    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Enter your favorite dessert: ";
    std::cin >> dessert;
    std::cout << "I have some delicious " << dessert;
    std::cout << " for you " << name << std::endl;

    return 0;
}