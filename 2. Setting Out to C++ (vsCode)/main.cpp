#include <iostream>     // input & output
#include "example.h"    // header files
#include <stdio.h>      // for printf in C
#include <cmath>        // for sqrt() function

//Function prototypes:
int sqrt(int);

int main()
{
    //Features of the main() Function:
        //Statements and Semicolons:
    
    //The Function header as an Interface:

    //Why main() by Any Other Name Is Not The Same:

    //C++ Comments:
        //C-style Comments:
        
        int x{ 7 }; /* C-style comment:                 //C-style comment dont have to be in same line 
         
        x = 7 */                                        //C-style comment dont have to be in same line

    //The C++ Preprocessor and the iostream File:

    //Header Filenames:
    hello_message(); // print "Hello World!" message

    //Namespaces
    using std::cout;
    using std::cin;
    using std::endl;

    cout << "what's now ?" << endl;

    //C++ Output with std::cout:

    //The Manipulator std::endl:
    std::cout << "The Good, the";   //
    std::cout << "bad, ";           //
    std::cout << "and the Ukulele"; //
    std::cout << std::endl;         // together print: "The Good, thebad, and the Ukulele"

    //The newline Character:
    std::cout << "What's next?\n"; // '\n' means start new line

    std::cout << '\n';      // start new line
    std::cout << std::endl; // start new line

    //C++ Source Code Formatting: you could reformat 'myfirst.cpp' as follow...
        using
    namespace
     std; std::cout
        <<
    "Come up and C++ me some time."
    ;                                   std::cout
    << std::
    endl; std::cout 
        << "You won't regret it!" <<
                                                std::endl;

    //Tokens and White Space in Source Code:
    int r { 7 }; //valid
    int y{7};    //valid
    int z{    7};//valid

    //C++ Source Code Style:

    //C++ Statement: please go and see our 'Listing 2.2 carrots.cpp' file...

    //Declaration Statement and Variable:
        //Why Must Variable Be Declared?:
    
    //Assignment Statement:
    
    std::cout << g_1 << '\n'; // we can use integer from header file :D i did not know that xD

    int steinway;
    int baldwin;
    int yamaha;

    yamaha = baldwin = steinway = 888;

    std::cout << yamaha << '\n';    // print 888
    std::cout << baldwin << '\n';   // print 888
    std::cout << steinway << '\n';  // print 888

    //A New Trick for std::cout
    printf("Printing a string: %s\n", "25"); //C's multipurpose output function prinf();
    printf("Printing an integer: %d\n", 25); //C's multipurpose output function prinf();
        //std::cout and printf()

    //More C++ Statement: please go see our 'Listing 2.3 getinfo.cpp' file...
        //Program Adjustments:

    //Using std::cin:

    //Concatenating with std::cout:
    std::cout << "Now we are spreading"
              << " the single"
              << " statement over"
              << " four lines\n";

    //std::cin and std::cout: A Touch of Class

    //Functions:

    //Using a Function That Has a Return Value: 
    double q;               // declare q as a type double variable
    q = sqrt(6.25);         // returns the value 2.5 and assigns it to q
    std::cout << q << '\n'; // print 2.5


    std::cin.get();
    return 0;
}