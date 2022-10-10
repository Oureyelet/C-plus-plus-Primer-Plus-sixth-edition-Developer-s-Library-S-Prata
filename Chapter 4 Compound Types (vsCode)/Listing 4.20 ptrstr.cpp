// Listing 4.20 ptrstr.cpp -- using pointers to string
#include <iostream>
#include <cstring>  // declare strlen() - returns the length of string , strcpy() - copies a tring from one location to another.

int main()
{
    char animal[20] = "bear";   // C-style string animal holds bear
    const char* bird = "wren";  // bird holds address of string
    char* ps;                   // uninitialized pointer to char

    std::cout << animal << " and "; // display bear
    std::cout << bird << '\n';      // display wren

    std::cout << "Enter a kind of animal: ";
    std::cin >> animal; // ok if input < 20 chars

    ps = animal;                 // set 'ps' to point to string
    std::cout << ps << "!\n";    //ok, same as using animal
    std::cout << "Before using strcopy():\n";
    std::cout << animal << " at " << (int *)animal << std::endl;
    std::cout << ps << " at " << (int *)ps << std::endl;

    ps = new char[strlen(animal) + 1];  // get new storage
    strcpy(ps, animal);                 // copy string to new storage

    std::cout << "After using strcopy():\n";
    std::cout << animal << " at " << (int *)animal << std::endl;
    std::cout << ps << " at " << (int *)ps << std::endl;

    delete [] ps;

    return 0;
}