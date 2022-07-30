/*
5.cpp -- Write a program that has main() call a user-defined function that takes a Celsius
temperature value as an argument and then returns the equivalent Fahrenheit value.
The program should request the Celsius value as input from the user and display
the result, as shown in the following code:

    Please enter a Celsius value: 20
    20 degrees Celsius is 68 degrees Fahrenheit.
    For reference, here is the formula for making the conversion:
    Fahrenheit = 1.8 × degrees Celsius + 32.0
*/

#include <iostream>

//Function prototype:
template <typename T>
T cel_to_fah(T);

int main()
{
    double celsius{};
    
    std::cout << "Please enter a Celsius value: ";
    std::cin >> celsius;

    std::cout << celsius << " degrees Celsius is " << cel_to_fah(celsius) << " degrees Fahrenheit." << std::endl;

    std::cin.get();
    std::cin.get();
    return 0;
}

template <typename T>
T cel_to_fah(T n)
{
    return (n * 9/5) + 32;
}