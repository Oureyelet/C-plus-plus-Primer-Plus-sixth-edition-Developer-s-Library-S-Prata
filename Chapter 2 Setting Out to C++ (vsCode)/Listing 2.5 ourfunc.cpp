// ourfunc.cpp -- defining your own function

#include <iostream>
void simon(int); // function prototype for simon()

int main()
{
    simon(3);       // call the simon() function
    
    std::cout << "Pick an integer: ";
    int count;
    std::cin >> count;

    simon(count);   // call it again

    std::cout << "Done!\n";

    std::cin.get();
    std::cin.get();
    return 0;
}

void simon(int n) // define the simon() function
{
    std::cout << "Simon says touch toes " << n << " times.\n";
}                 // void function don't need return statements