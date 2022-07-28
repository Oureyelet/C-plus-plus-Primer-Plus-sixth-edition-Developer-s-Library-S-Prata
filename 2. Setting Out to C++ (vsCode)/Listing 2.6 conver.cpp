// conver.cpp -- conver stone to kilograms

#include <iostream>

double poundtokg(double); // function prototype

int main()
{
    double stone;

    std::cout << "Enter the weight in stone: ";
    std::cin >> stone;

    double kilograms = poundtokg(stone);

    std::cout << stone << " stone = " << kilograms << " kg.\n";

    std::cin.get();
    std::cin.get();
    return 0;
}

double poundtokg(double pounds)
{
    return pounds * 6.35029;
}

