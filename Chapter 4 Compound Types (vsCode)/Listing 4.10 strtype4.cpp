// Listing 4.10 strtype4.cpp -- line input
#include <iostream>
#include <string>   // make string class available
#include <cstring>  // C-style string library

int main()
{
    char charr[20];
    std::string str;

    std::cout << "Length of string in 'charr' before input: ";
    std::cout << strlen(charr) << '\n';
    std::cout << "Length of string in 'str' before input: ";
    std::cout << str.length() << '\n';  // or you can use str.size() instead
    std::cout << "Enter a line of text: ";
    std::cin.getline(charr, 20);        // indicate maximum length
    std::cout << "You entered: " << charr << '\n';
    std::cout << "Enter another line of text: ";
    getline(std::cin, str);             // std::cin now an argument; no length specifirer
    std::cout << "You entered: " << str << '\n';
    std::cout << "Length of string in 'charr' after input: ";
    std::cout << strlen(charr) << '\n';
    std::cout << "Length of string in 'str' after input: ";
    std::cout << str.length() << '\n';

    return 0;
}