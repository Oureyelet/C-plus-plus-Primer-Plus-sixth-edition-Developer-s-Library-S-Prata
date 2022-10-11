#include <iostream>

int main()
{
    char str[] = "Yo Ty";

    std::cout << sizeof(str) << '\n';
    
    for(int count{ 0 }; count <= sizeof(str); ++count)
    {
        std::cout << str[6] << '\n';
    }
    std::cout << std::endl;

    return 0;
}