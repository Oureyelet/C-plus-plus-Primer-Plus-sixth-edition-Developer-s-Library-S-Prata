// limits.cpp -- some integer limits, program also illustrates 'initialization', which is the use of 
// a declaration statement to assign a value to a variable


#include <iostream>
#include <climits>   // for sizeof()

int main()
{
    int n_int = INT_MAX;        // initialize n_int to max int value
    short n_short = SHRT_MAX;   // symbols defines in climits file
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    //sizeof operator yields size of type or of variable
    std::cout << "int is " << sizeof (int) << " bytes.\n";
    std::cout << "short is " << sizeof n_short << " bytes.\n";
    std::cout << "long is " << sizeof n_long << " bytes.\n";

    std::cout << "Maximum value: " << std::endl;
    std::cout << "int: " << n_int << '\n';
    std::cout << "short: " << n_short << '\n';
    std::cout << "long: " << n_long << '\n';

    std::cout << "Minimum int value = " << INT_MIN << '\n';
    std::cout << "Bits per byte = " << CHAR_BIT << '\n'; 

    std::cin.get();
    return 0;
}