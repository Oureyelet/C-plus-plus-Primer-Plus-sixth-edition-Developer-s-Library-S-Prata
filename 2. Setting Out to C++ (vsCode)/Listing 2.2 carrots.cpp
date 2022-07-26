// carrots.cpp -- food processing program
//uses and display a variable

#include <iostream>

int main()
{
    int carros;                 // declare an integer variable

    carros = 25;                // assing a value to the variable
    std::cout << "I have ";
    std::cout << carros;        // display the value of the variable
    std::cout << " carrots.";
    std::cout << std::endl;
    
    carros = carros - 1;        // modify the variable

    std::cout << "Crunch, crunch. Now I have " << carros << " carrots\n";


    std::cin.get();
    return 0;
}