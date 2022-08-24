// Listing 3.14 typecast.cpp -- forcing type changes
#include <iostream>

int main()
{
    int auks, bats, coots;

    // The following statement adds the values as double
    // then converts the result to int
    auks = 19.99 + 11.99; // (auks = 19.99 + 11.99 = 31.98 = converts to double = 31)

    // These statement add values as int
    bats = (int) 19.99 + (int) 11.99;       // old C syntax (bats = 19.99 + 11.99 = 31.98 = converts to int = 19 + 11 = 30)
    coots = int( 19.99 ) + int( 11.99 );    // new C++ syntax (coots = 19.99 + 11.99 = 31.98 = converts to int = 19 + 11 = 30)
    std::cout << "auks = " << auks << ", bats = " << bats;
    std::cout << ", coots = " << coots << '\n';

    char ch{ 'Z' };
    std::cout << "The code for " << ch << " is ";   // print as char
    std::cout << int(ch) << '\n';                   // print as int
    std::cout << "Yes, the code is ";
    std::cout << static_cast<int>(ch) << '\n';      // print as int by using static_cast

    std::cout << "My: " << '\n';

    int x{};
    int y{};

    x = int(1.99) + int(1.99);
    y = 2.99 + 2.99;

    double z{ 2.99 + 2.99 };

    std::cout << "x = " << x << '\n';
    std::cout << "y = " << y << '\n';
    std::cout << "z = " << z << '\n';

    return 0;
}