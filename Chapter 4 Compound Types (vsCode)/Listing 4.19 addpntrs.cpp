// Listing 4.19 addpntrs.cpp -- pointer addition
#include <iostream>

int main()
{
    double wages[3]{ 10000.0, 20000.0, 30000.0 };
    short stacks[3]{ 3, 2, 1 };

    // Here are two ways to get the address of an array
    double *ptr_w = wages;      // name of an array = address of first element
    short *ptr_s = &stacks[0];  // or use address operator with specify number of inxed you need address of

    // with array element
    std::cout << "ptr_w = " << ptr_w << ", *ptr_w = " << *ptr_w << '\n'; // print: ptr_w = 0x7fffffffd970, *ptr_w = 10000
    ptr_w += 1; // add one to a pointer to double adds 8 to the numeric value on systems with 8-byte double
    std::cout << "add one to ptr_w pointer:\n";
    std::cout << "ptr_w = " << ptr_w << ", *ptr_w = " << *ptr_w << '\n'; // print: ptr_w = 0x7fffffffd978, *ptr_w = 20000

    std::cout << std::endl; // next line

    std::cout << "ptr_s = " << ptr_s << ", *ptr_s = " << *ptr_s << '\n'; // ptr_s = 0x7fffffffd96a, *ptr_s = 3
    ptr_s += 1; // short is 2 bytes, adding 1 to the pointer increases its value by 2 (0x7fffffffd96a + 2 = 0x7fffffffd96c in hexadecimal)
    std::cout << "Add one to ptr_s pointer:\n";
    std::cout << "ptr_s = " << ptr_s << ", *ptr_s = " << *ptr_s << '\n'; // ptr_s = 0x7fffffffd96c, *ptr_s = 2

    std::cout << std::endl; // next line

    std::cout << "Access two elements with array notation\n";
    std::cout << "stacks[0] = " << stacks[0];
    std::cout << " , stacks[1] = " << stacks[1] << '\n';    // print: stacks[0] = 3 , stacks[1] = 2

    std::cout << std::endl; // next line

    std::cout << "Access two elements with pointer notation\n";
    std::cout << "*stacks = " << *stacks;
    std::cout << ", *(stack + 1) = " << *(stacks + 1) << '\n';  // print: *stacks = 3, *(stack + 1) = 2

    std::cout << std::endl; // next line

    std::cout << sizeof(wages) << " = size of wages array\n";   // print: 24 = size of wages array
    std::cout << sizeof(ptr_w) << " = size of ptr_w pointer\n"; // print: 8 = size of ptr_w pointer

    return 0;
}