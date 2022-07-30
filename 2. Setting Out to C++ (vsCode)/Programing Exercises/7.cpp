/*
7.cpp -- Write a program that asks the user to enter an hour value and a minute value.The
main() function should then pass these two values to a type void function that dis-
plays the two values in the format shown in the following sample run:
Enter the number of hours: 9
Enter the number of minutes: 28
Time: 9:28
*/

#include <iostream>

void display(int h, int m) 
{
    std::cout << "Time " << h << ':' << m << std::endl; 
}

int main()
{
    int hour{};
    int minute{};

    std::cout << "Enter the number of hours: ";
    std::cin >> hour;
    std::cout << "Enter the number of minutes: ";
    std::cin >> minute;

    display(hour, minute);

    std::cin.get();
    std::cin.get();
    return 0;
}