// Listing 4.21 newstrct.cpp -- using new with structure
#include <iostream>

struct inflatable
{
    char name[20];
    float valume;
    double price;
};


int main()
{
    inflatable *ptr = new inflatable;   // allot memory for structure
    std::cout << "Enter name of inflatable item: ";
    std::cin.get(ptr->name, 20);    // method 1 for member access
    std::cout << "Enter valume in cubic feet: ";
    std::cin >> (*ptr).valume;  // method 2 for member access
    std::cout << "Enter price: $";
    std::cin >> ptr->price;

    std::cout << "Name: " << (*ptr).name << '\n';   // method 2
    std::cout << "Valume: " << ptr->valume << '\n'; // method 1
    std::cout << "Price: " << ptr->price << '\n';   // method 1

    delete [] ptr;  //free memory used by structure

    return 0;
}