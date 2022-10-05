#include <iostream>

int main()
{
    char flower[10]{ "rose" };
    std::cout << flower << "s are red\n";

    char *ptr_to_flower = flower;

    std::cout << ptr_to_flower << '\n';

    return 0;
}