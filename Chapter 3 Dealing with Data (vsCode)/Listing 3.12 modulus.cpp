// Listing 3.12 modulus.cpp -- uses % operator to convert lbs to stone
#include <iostream>

int main()
{
    const  int lbs_per_stn{ 14 };
    int lbs;

    std::cout << "Enter your weight in pounds: ";
    std::cin >> lbs;
    int stone{ lbs / lbs_per_stn };     // whole stone
    int pounds{ lbs % lbs_per_stn };    // reminder in pounds
    std::cout << lbs << " pounds are " << stone << " stone, " << pounds << " pound(s).\n";


    return 0;
}