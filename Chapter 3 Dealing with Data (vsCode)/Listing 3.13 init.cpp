// Listing 3.13 init.cpp -- type changes on initialization
#include <iostream>

int main()
{
    std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);

    float tree = 3;         // int convertd to float
    int guess( 3.9832 );    // double convertd to int

/*    
    int debt{ 7.E12 };      // result not defined in C++
                            // list initialization doesn't permit narrowing.
                            // this is why we need to use '=' instead of '{}'
*/

    int debt = 7.E12;       // result not defined in C++

    std::cout << "tree = " << tree << '\n';
    std::cout << "guess = " << guess << '\n';
    std::cout << "debt = " << debt << '\n';

    return 0;
}