// Listing 4.13 arrstruc.cpp -- an array of structures
#include <iostream>

struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int main()
{
    inflatable guests[2] =            // initializing an array of structs
    {
        {"Robin Hood", 0.4, 12.34}, // first structure in array
        {"Ninja", 7.2, 34.22}       // next structure in array
    };

    std::cout << "The guests " << guests[0].name << " and " << guests[1].name
              << "\nhave a combined volume of "
              << guests[0].volume + guests[1].volume << " cubic feet.\n"; 

    return 0;
}
