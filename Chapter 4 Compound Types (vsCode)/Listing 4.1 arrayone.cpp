// Listing 4.1 arrayone.cpp -- small arrays of integers.
#include <iostream>

int main()
{
    int yams[3];    // creates array with three elements
    yams[0] = 7;    // assing value to first element
    yams[1] = 8;    // assing value to second element
    yams[2] = 6;    // assing value to third element

    int yam_costs[3] = { 20, 30, 5 };   // creates, initialize array

    //NOTE: If your C++ compiler or translator can't initialize
    //this array, use static int yam_costs[3] instead of
    //int yam_consts[3].

    std::cout << "Total yams = ";
    std::cout << yams[0] + yams[1] + yams[2] << '\n';
    


    return 0;
}