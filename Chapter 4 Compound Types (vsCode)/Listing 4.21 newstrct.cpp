// Listing 4.21 newstrct.cpp -- using new with structure
#include <iostream>

struct inflatable
{
    char name[20];
    float value;
    double price;
};


int main()
{
    inflatable *ptr = new inflatable;   // allot memory for structure
    std::cout << "Enter name of inflatable item: "

    return 0;
}