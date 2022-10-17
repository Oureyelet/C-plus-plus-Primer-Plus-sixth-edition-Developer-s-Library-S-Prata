#include <iostream>
#include <cstring> // for strcpy() function

void helloworld();

int main()
{
    helloworld();

    std::cout << hello << '\n';

    return 0;
}

void helloworld()
{
    static char hello[]{ "Hello World" };

    std::cout << hello << '\n';
}