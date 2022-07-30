// getinfo.cpp -- input and output

#include <iostream>

int main()
{
    int carrots;

    std::cout << "How many carrots do you have?" << std::endl;
    std::cin >> carrots;                                         // C++ input
    std::cout << "Here are to more...";
    carrots = carrots + 2;
//the next line concatenates output
    std::cout << "Now you have " << carrots << " carrots." << std::endl;


    std::cin.get();
    std::cin.get();
    return 0;
}