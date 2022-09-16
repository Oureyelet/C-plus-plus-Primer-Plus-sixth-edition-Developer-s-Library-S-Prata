// Listing 4.12 assgn_st.cpp -- assigning structures 
#include <iostream>

struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int main()
{
    inflatable bouquet = 
    {
        "sunflowers",
        0.29,
        23.44
    };

    inflatable choice;
    std::cout << "bouquet: " << bouquet.name << " for $ " << bouquet.price << std::endl;

    choice = bouquet;   // assignin one structure to another
    std::cout << "choice: " << choice.name << " for $ " << choice.price << std::endl;


    return 0;
}