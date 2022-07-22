#include <iostream>

int main()
{
    std::cout << "Hello World my name is Sophie\n";

    int a{ 5 };

    for(int count{ 0 }; count < 50; count++)
    {
        std::cout << a << ' ';
        a++;
    }

    return 0;
}