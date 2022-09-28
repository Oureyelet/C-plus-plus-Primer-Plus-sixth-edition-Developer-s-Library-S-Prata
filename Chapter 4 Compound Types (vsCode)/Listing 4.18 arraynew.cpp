// Listing 4.18 arraynew.cpp -- using the new operator for arrays
#include <iostream>

int main()
{
    double *p3 = new double [3];    // space for 3 doubles
    p3[0] = 0.5;                    // initialize p3[0]
    p3[1] = 0.7;                    // initialize p3[1]
    p3[2] = 2.2;                    // initialize p3[2]

    std::cout << "p3[0] is: " << p3[0] << '\n';                                  // print 0.5
    std::cout << "p3[1] is: " << p3[1] << '\n';                                  // print 0.7
    std::cout << "Address of 'p3' before increment the pointer: " << p3 << '\n'; // print addres of p3 pointer
    p3 = p3 + 1;                                                                 // increment the pointer
    std::cout << "size of double: " << sizeof(double) << '\n';                   // print size of double: 8 bytes
    std::cout << "Address of 'p3' after increment the pointer: " << p3 << '\n';  // print addres of p3 pointer
    std::cout << "p3[0] is: " << p3[0] << '\n';                                  // print 0.7
    std::cout << "p3[1] is: " << p3[1] << '\n';                                  // print 2.2
    p3 = p3 - 1;                                                                 // point back to beginning
    delete [] p3;                                                                // free memory

    return 0;
}