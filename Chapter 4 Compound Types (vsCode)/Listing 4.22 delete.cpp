// Listing 4.22 delete.cpp -- using the delete operator
#include <iostream>
#include <cstring>

char *getname();    // function prototype

int main()
{
    char *name;         // create pointer but no storage

    name = getname();   // assign address of string to name
    std::cout << name << " at " << (int *) name << '\n';
    delete [] name;     // memory freed

    name = getname();   // reuse freed memory
    std::cout << name << " at " << (int *) name << '\n';
    delete [] name;

    return 0;
}

char *getname()
{
    char temp[80];
    std::cout << "Enter your name: ";
    std::cin >> temp;
    char *ptr = new char[strlen(temp) + 1];
    strcpy(ptr, temp);  // copy string into smaller space

    return ptr;
}