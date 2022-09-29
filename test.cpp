#include <iostream>

int main()
{
    int array_1[5]{ 1, 2, 3, 4, 5 };
    int *ptr = array_1;

    std::cout << array_1 << '\n';
    std::cout << &array_1[0] << '\n';
    std::cout << ptr << '\n';


    return 0;
}