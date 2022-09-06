// Listing 4.4 instr2.cpp -- reading more than one string with getline()
#include <iostream>

int main()
{
    const int arSize = 20;
    char name[arSize];
    char dessert[arSize];

    std::cout << "Enter your name: ";
    std::cin.getline(name, arSize);
    std::cout << "Enter your favorite dessert: ";
    std::cin.getline(dessert, arSize);
    std::cout << "I have some delicious " << dessert;
    std::cout << " for you " << name << std::endl;

    return 0;
}