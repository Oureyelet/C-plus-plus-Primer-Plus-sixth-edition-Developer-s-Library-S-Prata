/*
4.cpp -- Write a program that asks the user to enter his or her age.The program then should
display the age in months:
Enter your age: 29
Your age in months is 384.
*/

#include <iostream>

//Function prototype:
int age_to_months(int);

int main()
{
    std::cout << "How old are you?\n";
    int age{};
    std::cin >> age;

    std::cout << "Did you know " << age_to_months(age) << " months is exactly " << age << " years.\n";
    std::cout << "How cool is that ?!\n";

    std::cin.get();
    std::cin.get();
    return 0;
}

int age_to_months(int n)
{
    return n *  12;
}