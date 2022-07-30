/*
3.cpp -- Write a C++ program that uses three user-defined functions (counting main() as
one) and produces the following output:
Three blind mice
Three blind mice
See how they run
See how they run
*/

#include <iostream>

//Functions prototype:
void first();
void second();

int main()
{
    first();
    first();
    second();
    second();

    return 0;
}

void first()
{
    std::cout << "Three blind mice\n";
}

void second()
{
    std::cout << "See how they run\n";
}