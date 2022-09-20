// Listing 4.14 address.cpp -- using the & operator to find addresses
#include <iostream>

int main()
{
    int books{ 7 };
    double prize{ 4.5 };    // $ for example

    std::cout << "Number of books you have: " << books << '\n';
    std::cout << "Address of that value is stored here: " << &books << '\n';

    //NOTE: you may need to use unsigned (&books)
    // and  unsigned (&prize)

    std::cout << "Prize for one book: " << prize << '\n';
    std::cout << "Address of that prize is stored here: " << &prize << '\n';

    return 0;
}