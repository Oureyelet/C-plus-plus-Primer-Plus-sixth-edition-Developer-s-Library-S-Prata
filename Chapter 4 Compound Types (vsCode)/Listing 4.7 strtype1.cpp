// Listing 4.7 strtype1.cpp -- using the C++ string class 
#include <iostream>
#include <string>   // make string class available

int main()
{
    char charr1[20];                // create an empty array
    char charr2[20] = "jaguar";     // create an initialized array
    std::string str1;               // create an empty string object
    std::string str2 = "panther";   // create an initialized string

    std::cout << "Enter a kind of feline: ";
    std::cin >> charr1;
    //std::cin.getline(charr1, 20); // if you want to read full line
    std::cout << "Enter another kind of feline: ";
    std::cin >> str1;  // use std::cin for input
    std::cout << "Here are some felines:\n";
    std::cout << charr1 << ' ' << charr2 << ' '
              << str1   << ' ' << str2   << '\n';
    std::cout << "The third letter in "  << charr2 << " is "
              << charr2[2]
              << '\n';
    std::cout << "The third letter in "  << str2 << " is "
              << str2[2]    // use array notation
              << '\n';

    return 0;
}