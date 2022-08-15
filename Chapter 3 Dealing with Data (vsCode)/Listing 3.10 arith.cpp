// Listing 3.10 arith.cpp -- some C++ arithmetic
#include <iostream>

int main()
{
    float hats, heads;

    std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield); // fixed-point
    std::cout << "Enter a number: ";
    std::cin >> hats;
    std::cout << "Enter another number plese:";
    std::cin >> heads;

    std::cout << "hats = " << hats << "; heads = " << heads << std::endl;
    std::cout << "hats + heards = " << hats + heads << '\n';
    std::cout << "hats - heards = " << hats - heads << '\n';
    std::cout << "hats * heards = " << hats * heads << '\n';
    std::cout << "hats / heards = " << hats / heads << '\n';

    return 0;
}