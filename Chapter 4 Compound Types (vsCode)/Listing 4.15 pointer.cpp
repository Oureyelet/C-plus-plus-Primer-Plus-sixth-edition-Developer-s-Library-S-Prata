// Listing 4.15 pointer.cpp -- our first pointer variable
#include <iostream>

int main()
{
    int updates{ 7 };       // declare a variable
    int *ptr_updates;       // declare pointer to an int

    ptr_updates = &updates; // assign address of int to pointer

    // express values two ways
        std::cout << "Values: update = " << updates;
        std::cout << ", *ptr_updates = " << *ptr_updates << '\n';

    // express address two ways
        std::cout << "Addresses: &pdates = " << &updates;
        std::cout << ", ptr_updates = " << ptr_updates << '\n';

    // use pointer to change value
        *ptr_updates = *ptr_updates + 1;
        std::cout << "Now updates = "

    return 0;
}