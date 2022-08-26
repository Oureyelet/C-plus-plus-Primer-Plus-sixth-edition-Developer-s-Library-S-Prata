/**
    Chapter 3 -- Programming Exercises:

    2)      Write a short program that asks for your height in feet and inches and your weight
            in pounds. (Use three variables to store the information.) 
            Have the program report
            your body mass index (BMI).
            To calculate the BMI, first convert your height in feet
            and inches to your height in inches (1 foot = 12 inches).
            Then convert your height
            in inches to your height in meters by multiplying by 0.0254.
            Then convert your
            weight in pounds into your mass in kilograms by dividing by 2.204. 
            Finally, compute
            your BMI by dividing your mass in kilograms by the square of your height in
            meters. Use symbolic constants to represent the various conversion factors.
*/
#include <iostream>

int main()
{
    int feet{};
    int inches{};
    int pounds{};

    std::cout << "Please enter your height in feet and inches.";
    std::cout << std::endl;
    std::cout << "                                              - feet_: ";
    std::cin >> feet;
    std::cout << std::endl;
    std::cout << "                                              - inches_: ";
    std::cin >> inches;
    std::cout << std::endl;
    std::cout << "Enter your weight in pounds_: ";
    std::cin >> pounds;
    
    const int ft_to_in{ 12 };               // 1 foot = 12 inches
    const double in_to_meters{ 0.0254 };    // 1 inches = 0.0254 meter
    const double kg_to_pounds{ 2.204 };     // 1 kg = 2.204 pounds

    int whole_inches{ (feet * ft_to_in) + inches };
    double meters{ whole_inches * in_to_meters };
    double kilograms{ pounds / kg_to_pounds };

    double bmi = (kilograms / (meters * meters));

    std::cout << "Your BMI is: " << bmi << '\n';
    
    std::cin.get();
    std::cin.get();
    return 0;
}