// main.cpp -- S.Prata C++ Primer Plus 6th ed. Chapter 3 -- Dealing with Data.

#include <iostream>
#include <climits> // for preprocesor INT_MAX or sizeof()
#include <typeinfo> // to get the type of variable
#include <vector> // for std::vector

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
    // Please go see our 'Listing 3.8 floatnum.cpp' file:
        // Program Notes:
            // Reading Include Files:
    
    //--------------------------
    // Floating-Point Constants:
    //--------------------------
    double const_one{ 1.234f };         // a float constant 
    double const_two{ 2.45E20F };       // a float constant
    double const_three{ 2.34524E28 };   // 
    double const_four{ 2.2L };

    std::cout << "Here is what you looking for: " <<typeid(const_one).name() << '\n'; // even if this print 'd' which mean double
                                                                                      // that is stored like a float consant.


    //--------------------------------------------------------
    // Advantages and Disadvantages of Floating-Point Numbers: (Please see Listing 3.9 fltadd.cpp file)
    //--------------------------------------------------------
        //Classifying Data Types:


    //--------------------------
    // C++ Arithmetic Operators: (addition, substraction, multiplication, divistion, and taking the modulus)
    //--------------------------
    int wheels{ 4 + 3 }; //The values 4 and 2 are operands, the + symbol is the addition operator, and 4 + 2 is an
                         //expression whose value is 6.


    //------------------------------------------------------------
    // Order of Operation - Operator Precedence and Associativity: (Please see Listing 3.10 arith.cpp file)
    //------------------------------------------------------------
    int flyingpigs{ 3 + 4 * 5 }; // 35 or 23?
    float logs{ 120 / 4 * 5 }; // 150 or 6 ?
    int dues{ 20 * 5 + 24 * 6 }; // 


    //-----------------------------------------------------------------
    // Division Diversions: (Please see 'Listing 3.11 divide.cpp' file)
    //-----------------------------------------------------------------
        // A Glimpse Operator Overloading:

    
    //-------------------------------------------------------------------------
    // The Modulus Operator: (Please check our 'Listing 3.12 modulus.cpp' file)
    //-------------------------------------------------------------------------


    


    //------------------------------------------------------------------------------------------
    // Conversion Initialization and Assignment: (Please check our 'Listing 3.13 init.cpp' file)
    //------------------------------------------------------------------------------------------
    long so_long{};
    short thirty{};

    so_long = thirty; // assinging a short to a long


    //---------------------------------------------------
    // Initialization Conversion When {} Are Used (C+11):
    //---------------------------------------------------
    const int code{ 66 };
    int x{ 66 };

    // char c1{ 31325 };   // narrowing, not allowed.
    char c2 = { 66 };   // allowed beacude char can hold 66
    char c3{ code };    // ditto
    // char c4 = { x };    // not allowed, x is not constant
    x = 31325;
    char c5 = x;        // allowed by this form of initialization


    //----------------------------
    // Conversions in Expressions:
    //----------------------------
    short chickens = 20;            // line 1
    short ducks = 35;               // line 2
    short fowl = chickens + ducks;  // line 3


    //----------------------------------
    // Conversions in Passing Arguments:
    //----------------------------------


    //--------------------------------------------------------------
    // Type Cast: (Please check our 'Listing 3.14 typecast.cpp' file)
    //--------------------------------------------------------------
    short thorn;
    
    std::cout << "The intger code for 'Q': ";
    std::cout << int('Q') << '\n';  // display the intger code for 'Q'

    // static_cast<typeName>(value):
    long thorn_L{ static_cast<long>(thorn) };   // return a type long conversion of thorn


    //----------------------------
    // auto Declarations in C++11:
    //----------------------------
    auto n_2{ 100 };        // n is int
    auto x_2{ 1.5 };        // x is double
    auto y_2{ 1.3e12L };    // y is long double

    std::vector<double> scores;
    std::vector<double>::iterator pv = scores.begin();

    auto pv2 = scores.begin(); //C+11 allows you to write this instead:


    //---------
    // Summary:
    //---------


    //----------------
    // Chapter Review:
    //----------------
    /*
    1. Why does C++ have more than one integer type?
        - if we need fractional point number C++ give as that options

    2. Declare variables matching the following descriptions:

    a. A short integer with the value 80
        - short s80{ 80 };

    b. An unsigned int integer with the value 42,110
        - unsigned int un_int = 42.110;

    c. An integer with the value 3,000,000,000
        - int a = 3000000000;
        
    3. What safeguards does C++ provide to keep you from exceeding the limits of an
    integer type?
        - C++ provide no safeguard to exceeding the limits of an integer if you need something likke this use climits header.

    4. What is the distinction between 33L and 33?
        - 33L is long (integer), 33 is just integer

    5. Consider the two C++ statements that follow:
    char grade = 65;
    char grade = 'A';
    Are they equivalent?
        - No. first grade is int constant second grade is char constant but if we try display both will be same display 'A'.

    6. How could you use C++ to find out which character the code 88 represents?
    Come up with at least two ways.
        - std::cout << char(88);
        - or char a{ 88 };
        - std::cout << a;
        - or std::cout << static_cast<char>(88)

    7. Assigning a long value to a float can result in a rounding error.What about
    assigning long to double? long long to double?
        - is depend how big value are... ingeneral there is no problem at all.

    8. Evaluate the following expressions as C++ would:
    a. (8 * 9) + 2 = 74  
    b. 6 * 3 / 4 = (6 * 3) / 4 = 4 
    c. (3 / 4) * 6 = 0 
    d. (6.0 * 3) / 4 = 4.5
    e. 15 % 4 = 3

    9. Suppose x1 and x2 are two type double variables that you want to add as integers
    and assign to an integer variable. Construct a C++ statement for doing so.What if
    you want to add them as type double and then convert to int?
        - double x1{};
        - double x2{};
        - double z = x1 + x2;
        - int y{ static_cast<int>(z) };


    10. What is the variable type for each of the following declarations?
    a. auto cars = 15;
        - int
    b. auto iou = 150.37f;
        - float
    c. auto level = 'B';
        - char
    d. auto crat = U'/U00002155';
        - unsigned char32_t
    e. auto fract = 8.25f/2.5
        - double
    */

    //------------------------------------------------------------------------
    // Programming Exercises: (see 'Programing Exercises' secion in Chapter 3)
    //------------------------------------------------------------------------


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

