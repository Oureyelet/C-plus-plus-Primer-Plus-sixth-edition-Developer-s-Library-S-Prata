// Listing 4.5 instr3.cpp -- reading more than one word  with get() & get()
#include <iostream>

int main()
{
    const int arSize = 125;
    char name[arSize];
    char dessert[arSize];

    std::cout << "Enter your name please:\n";
    std::cin.get(name, arSize).get();           // read string, newline
    std::cout << "Enter your favorite dessert:\n";
    std::cin.get(dessert, arSize).get();
    std::cout << "I have some delicious " << dessert << " for you " << name << ".\n";


    return 0;
}