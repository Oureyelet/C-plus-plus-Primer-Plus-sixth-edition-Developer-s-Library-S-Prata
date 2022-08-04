// main.cpp -- S.Prata C++ Primer Plus 6th ed. Chapter 3 -- Dealing with Data.

#include <iostream>
#include <climits> // for preprocesor INT_MAX or sizeof()
#include <typeinfo> // to get the type of variable

int main()
{
    //Simple Variables:

    int braincount;
    braincount = 5;
    
    std::cout << &braincount << '\n';//& symbol show you addres in memory where braincount value is keep.


    //Names for Variables:
        //Naming schemes:


    //Integer Types:


    //The 'short', 'int', 'long', and 'long long' Integer Types: Please go see 'Listing 3.1 limits.cpp' file
        //Bits and Bytes:
    
    short score;        // creates a type short integer variable
    int temperature;    // creates a type int integer variable
    long position;      // creates a type long integer variable

    //The 'sizeof' Operator and the <climits> Header File:
        //Symbolic Constant the Preprocessor Way:

    /*
        Table 3.1 Symbolic Constants from climits

        Symbolic Constant           Represents
        -------------------------------------------------------------
        CHAR_BIT                    Number of bits in a char
        CHAR_MAX                    Maximum char value
        CHAR_MIN                    Minimum char value
        SCHAR_MAX                   Maximum signed char value
        SCHAR_MIN                   Minimum signed char value
        UCHAR_MAX                   Maximum unsigned char value
        SHRT_MAX                    Maximum short value
        SHRT_MIN                    Minimum short value
        USHRT_MAX                   Maximum unsigned short value
        INT_MAX                     Maximum int value
        INT_MIN                     Minimum int value
        UINT_MAX                    Maximum unsigned int value
        LONG_MAX                    Maximum long value
        LONG_MIN                    Minimum long value
        ULONG_MAX                   Maximum unsigned long value
        LLONG_MAX                   Maximum long long value
        LLONG_MIN                   Minimum long long value
        ULLONG_MAX                  Maximum unsigned long long value
        -------------------------------------------------------------
    */


    //Initialization:
    
    int n_int = INT_MAX;                // set the 'n_int' to the largest possible type int value
    int uncle = 5;                      // initialize uncle to 5
    int aunts = uncle;                  // initialize aunts to 5 
    int chairs = aunts + uncle + 4;     // initialize chairs to 14

    int owls = 101;                     // traditional C initialization, sets owls to 101
    int wrents(432);                    // alternative C++ syntax, set wrens to 432

        //Caution:


    //Initialization with C++11:

    int hamburgers = { 24 };    // set hamburger to 24
    int emus{ 7 };              // set emus to 7
    int rheas = { 12 };         // set rheas to 12 
    int rocs = {};              // set rocs to 0
    int psychics{};             // a universal initializatin syntax (set psychics to 0)

    //----------------
    //Unsigned Types:   please go see 'Listing 3.2 exceed.cpp' file
    //----------------
    unsigned short change{};    // unsigned short type
    unsigned int rovert{};      // unsigned int type
    unsigned window{};          // also unsigned int
    unsigned long gone{};       // unsigned long type


    //-------------------------
    //Choosing an Integer Type:
    //-------------------------
    

    //-------------------------
    //Integer Literals: please go see 'Listing 3.3 hexoct1.cpp' and 'Listing 3.4 hexoct2.cpp' 
    //-------------------------


    //----------------------------------------
    //How C++ Decides What Type a Constant Is:
    //----------------------------------------

    std::cout << "Year = " << 1492 << '\n';
    std::cout << "This is store as long type = " << 22022L << '\n';
    std::cout << "This is store as unsigned long type = " << 22022UL << '\n';


    /*----------------------------------------------------
    The 'char' Type - Characters and Small Integers : 
    -(please go see our 'Listing 3.5 chartype.cpp' file)
    -(please go see our 'Listing 3.6 morechar.cpp' file)
    ----------------------------------------------------*/
    
    char smaller_than_short{ '7' };
    std::cout << "Is there something smaller than short (integer) ? - Yes, char: " 
              << smaller_than_short
              << '\n';

        //Program Notes:
        char ch;
        std::cout << "Enter our char ch please: ";
        std::cin >> ch;
        std::cout << ch << '\n';

        int i;
        std::cout << "Enter our integer 'i' please: ";
        std::cin >> i;
        std::cout << i << '\n';

    //--------------------------------------
    // A Member Function - std::cout.put():
    //--------------------------------------
    std::cout << std::endl;
    std::cout.put('$');


    //-----------------
    // 'char' Literals:
    //-----------------
    char alarm{ '\a' };
    std::cout << alarm << '\n';

    

    std::cin.get();
    std::cin.get();
    return 0;
}

