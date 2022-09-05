// Listing 4.2 strings.cpp -- storing strings in an array.
#include <iostream>
#include <cstring>  // for strlen() function

int main()
{
    const int size{ 15 };
    char name1[size];               // empty array
    char name2[size] = "C++owboy";  // initialized array

    // NOTE: some implementations may require the static keyword
    // to initialize the array name2

    std::cout << "Howdy! I'm " << name2;
    std::cout << "! What's is your name ?\n";
    std::cin >> name1;
    std::cout << "Well, " << name1 << ", your name has ";
    std::cout << strlen(name1) << " letter and is stored\n";
    std::cout << "in  an array of " << sizeof (name1) << " bytes.\n";
    std::cout << "Your initial is " << name1[0] << ".\n";
    name2[3] = '\0';    // set to null character
    std::cout << "Here are the first 3 characters on my name: ";
    std::cout << name2 << '.' << std::endl;

    return 0;
}