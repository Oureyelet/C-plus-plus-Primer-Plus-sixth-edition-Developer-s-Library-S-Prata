// Listing 4.16 init_ptr.cpp -- initialize a pointer
#include <iostream>

int main()
{
    int higgens{ 5 };
    int *ptr{ &higgens };

    std::cout << "Value of higgens = " << higgens << '\n';
    std::cout << "Address of higgens = " << &higgens << '\n';

    std::cout << "Value of *ptr = " << *ptr << '\n';
    std::cout << "Value of ptr = " << ptr << '\n';

    return 0;
}