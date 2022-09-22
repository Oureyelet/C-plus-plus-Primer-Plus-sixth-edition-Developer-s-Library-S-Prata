// Listing 4.17 use_new.cpp -- using the new operator
#include <iostream>

int main()
{
    int nights{ 1001 };
    int *ptr_int{ new int };    // allocate pace for an int
    *ptr_int = 1001;            // store a value there

    std::cout << "nights value = " << nights << ": location " << &nights << '\n';
    std::cout << "int value = " << *ptr_int << ": location " << ptr_int << '\n';

    //-------------------------------------------------------------------------------

    double *ptr_double{ new double };   // allocate space for a double
    *ptr_double = 10000001.0;          // store a double there
    
    std::cout << "double value = " << *ptr_double << ": location " << ptr_double<< '\n';
    std::cout << "location of pointer ptr_double = " << &ptr_double << '\n';

    //-------------------------------------------------------------------------------

    std::cout << "size of ptr_int = " << sizeof(ptr_int) << '\n';
    std::cout << "size of *ptr_int = " << sizeof(*ptr_int) << '\n';

    std::cout << "size of ptr_double = " << sizeof ptr_double << '\n';
    std::cout << "size of *ptr_double = " << sizeof *ptr_double << '\n';

    return 0;
}