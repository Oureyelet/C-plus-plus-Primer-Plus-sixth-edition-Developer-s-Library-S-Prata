#include <iostream>

int main()
{
    const int arSize = 125;
    char name[arSize];
    char dessert[arSize];
    char addres[arSize];

    std::cout << "Enter name, dessert and addres: "; 
    std::cin.getline(name, arSize).getline(dessert, arSize).getline(addres, arSize);
    

    std::cout << "Your name is: " << name << " and your favorite dessert is " << dessert;
    std::cout << " and your addres is " << addres << '\n';

    return 0;
}