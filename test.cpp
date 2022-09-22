#include <iostream>

int main()
{
    int *x{ new int };

    std::cout << "How many index you wish to declare: ";
    std::cin >> *x;

    std::cout << "Ok. I will create array with " << *x << " elements.\n";

    int array[*x];

    std::cout << "Size of your array is: " << sizeof(array) / sizeof(int) << '\n';


    for(int x{ 1 }; x < (sizeof(array) / sizeof(int))-1; x++)
    {
        std::cout << "Enter your " << x << " int: ";
        std::cin >> array[x];
    }


    std::cout << "Here is your whole array: ";
    
    for(int x{ 0 }; x < (sizeof(array) / sizeof(int))-1; x++)
    {
        std::cout << array[x] << ' ';

    }
    
    std::cout << '\n';


    return 0;
}