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
    system("(speaker-test -t sine -f 1000)& pid=$!; sleep 1.0s; kill -9 $pid"); //beeps your terminal - alert sound.
                                                                                // on my computer '/a' not worked.

    /*
    ---------------------------------------------------------------------
    Table 3.2 C++ Escape Sequence Codes
    --------------------------------------------------------------------
    Newline NL (LF) \n 10 0xA
    Horizontal tab HT \t 9 0x9
    Vertical tab VT \v 11 0xB
    Backspace BS \b 8 0x8
    Carriage return CR \r 13 0xD
    Alert BEL \a 7 0x7
    Backslash \ \\ 92 0x5C
    Question mark ? \? 63 0x3F
    Single quote ’ \' 39 0x27
    Double quote ” \" 34 0x22
    ---------------------------------------------------------------------
    */

    // All three of the following move the screen cursor to the beginning of the next line:
    std::cout << std::endl; // using the std::endl manipulator
    std::cout << '\n';      // using a character constant
    std::cout << "\n";      // using a string

    // Here is same output:
    std::cout << std::endl << std::endl << "What next?" << std::endl << "Enter a number: " << std::endl;
    std::cout << "\n\nWhat next?\nEnter a number: \n"; 

    std::cout << '\032' << '\n'; // print 26 (ASCII code) -- nothing happen on my computer ? 


    //---------------------------
    // Universal Character Names:
    //---------------------------
    int k\u00F6rper; // the ISO 10646 code point for 'ö' is 00F6 so variable name is: körper
    std::cout << "Let them eat g\u00E2teau.\n"; // print "Let them eat gâteau." beacause ISO 10646 code point for 'â' is 00E2

        // Unicode and ISO 10646:

    
    //-----------------------------------
    // 'signed char' and 'unsigned char':
    //-----------------------------------
    char fodo;          // may be signed, may be unsigned
    unsigned char bar;  // definitely unsigned
    signed char snark;  // definitely signed


    //---------------------------------------------------------
    // For When You Need More - wchar_t (wide character type) :
    //---------------------------------------------------------
    wchar_t bob = L'P';                 // a wide-character constant
    std::wcout << L"tall" << std::endl; // outputing a wide-character string


    //-----------------------------------------
    // New C++11 Types - char16_t and char32_t:
    //-----------------------------------------
    char16_t ch1{ u'g' };           // basic character in 16-bit form
    // char32_t ch2 = U'/U0000222B';  // universal character name in 32-bit form
    

    //-----------------
    // The 'bool' Type:
    //-----------------
    bool is_ready{ true }; 

    int ans{ true };        // ans assigned 1
    int promise{ false };   // promise assigned 0

    bool start = -100;     // any nonzero value converts to true
    bool stop{ 0 };         // zero value converts to false


    //-----------------------
    // The 'const' Qualifier:
    //-----------------------
    const int months{ 12 }; // Months is symbolic constant fro 12


    //------------------------
    // Floating-Point Numbers:
    //------------------------

    
    //--------------------------------
    // Writing Floating-Point Numbers:
    //--------------------------------
    float a{ 12.34 };       // floating-point
    float b{ 939001.32 };   // floating-point
    float c{ 0.00023 };     // floating-point
    float d{ 8.0 };         // still floating-point

    std::cout << a << ' ' << b << ' ' << c << ' ' << d << '\n'; // print 12.34 939001 0.00023 8

    /*
    Note only:
    E Notation is looks like this: 3.45E6 (3.45 is multiplied by 1,000,000)
    The E6 means 10 to the 6th power (which is 1 followed by 6 zeros)
    Thus 3.45E6 means: 3,450,000
    Here is more examples:

    2.52e+8             // can use E or e, + is optional
    8.33E-4             // exponent can be negative
    7E5                 // same as 7.0E+05
    -18.32e13           // can have + or - sign in front
    1.69e12             // 2010 Brazilian public debt in reais
    5.98E24             // mass of earth in kilograms
    9.11e-31            // mass of an electron in kilograms
    
    8.33E-4 means 8.33 / 10 to the 4th power or 0.000833
    */


    //-------------------------------------------------------------------------------------------
    // Floating-Point Type (C++ has three floating-point types: float, double, and long double) :
    //-------------------------------------------------------------------------------------------
    //float.h header file...





    //-----------------------------------------------------------
    //check C++ version:
    if (__cplusplus == 201703L) std::cout << "C++17\n";
    else if (__cplusplus == 201402L) std::cout << "C++14\n";
    else if (__cplusplus == 201103L) std::cout << "C++11\n";
    else if (__cplusplus == 199711L) std::cout << "C++98\n";
    else std::cout << "pre-standard C++\n";
    //-----------------------------------------------------------

    std::cin.get();
    std::cin.get();
    return 0;
}

