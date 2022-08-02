// exceed.cpp -- exceeding some integer limits & typical overflow behavior for integer (short)

#include <iostream>
#define ZERO 0      // make 'ZERO' symbol for 0 value
#include <climits>  // defines INT_MAX as largest int value

int main()

{
    short sam = SHRT_MAX;       // initialize a variable to max value
    unsigned short sue = sam;   // ok if variable 'sam' already defined

    std::cout << "Sam has " << sam << " dollars and Sue has " << sue;
    std::cout << " dollars deposited." << '\n'
              << "Add $1 to each account." << '\n';
    
    sam = sam + 1;
    sue = sue + 1;

    std::cout << "Sam has " << sam << " dollars and Sue has " << sue;
    std::cout << " dollars deposited. \nPoor Sam!\n";

    sam = ZERO;
    sue = ZERO;

    std::cout << "Sam has " << sam << " dollars and Sue has " << sue;
    std::cout << " dollars deposited.\n";
    std::cout << "Take $1 from each account. \nNow ";

    sam = sam - 1;
    sue = sue - 1;

    std::cout << "Sam has " << sam << " dollars ans Sue has " << sue
              << " dollars deposited.\n"
              << "Lucky Sue!" << std::endl;

    return 0;
}