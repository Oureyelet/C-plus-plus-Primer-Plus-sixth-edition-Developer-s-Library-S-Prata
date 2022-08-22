// Listing 3.14 typecast.cpp -- forcing type changes
#include <iostream>

int main()
{
    int auks, bats, coots;

    // The following statement adds the values as double
    // then converts the result to int
    auks = 19.99 + 11.99;

    // These statement add values as int
    bats = (int) 19.99 + (int) 11.99;       // old C syntax
    coots = int( 19.99 ) + int( 11.99 );    // new C++ syntax
    std::cout << "auks = " << auks << ", bats = " << bats;
    std::cout << ", coots = " << coots << '\n';

    char ch{ 'Z' };
    std::cout << "The code for " << ch << " is ";   // print as char
    std::cout << int(ch) << '\n';                   // print as int
    std::cout << "Yes, the code is ";
    std::cout << static_cast<int>(ch) << '\n';      // print as int by using static_cast


    return 0;
}