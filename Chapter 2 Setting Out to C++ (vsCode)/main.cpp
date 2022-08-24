// main.cpp -- S.Prata C++ Primer Plus 6th ed. Chapter 2 -- Setting Out to C++.

#include <iostream>     // input & output.
#include "example.h"    // header files.
#include <stdio.h>      // for printf in C.
#include <cmath>        // for sqrt() function.
#include <cstdlib>      // for rand() function.
#include <string>       // for find(), substr() functions
#include <sstream>      // for std::stringstream class

//Function prototypes:
int sqrt(int);              // prototype of a function with one arguments.
double pow(double, double); // prototype of a function with two arguments.
int rand(void);             // prototype of a function that take no arguments.
void bucks(double);         // prototype for function with no return value.

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
        
        //Using Library Functions:

    //Fnction Variations:
    double answer{ pow(5.0, 8.0) }; // function call with a list of arguments

    std::cout << "5 to the eight power is: " << answer << '\n';

    /*
    Bucks() function is for displed a number in dollars-and-cents format. For example, you could send argument of, say, 23.5,
    and it would display $23.50 on screen.
    */
    bucks(23.2); // function call, no return value - pure information call statement.

    //User-Defined Functions: please go see our 'Listing 2.5 ourfunc.cpp' file...

    //Function form:

    //Function Headers:
        //Review main()'s function header:
            //Keywords:

    //Using a User-Defined Function That Has a Return Value: see our 'Listing 2.6 conver.cpp' file please.
    
    //Placin the 'using' Directive in Multifunction Program:
        //Naming Conventions:

    //Summary:

    //Chapter Review:

    /*
        1. What are the modules of C++ programs called?
            - They are called functions.

        2. What does the following preprocessor directive do?
        #include <iostream>
            -By this line we are including <iostream> librry to our file.
       
        3. What does the following statement do?
        using namespace std;
            -After that statement we dont need to use 'std' namespace eveytime before calling object from std libry.

     
        4. What statement would you use to print the phrase “Hello, world” and then start a
        new line?
            - std::cout << "Hello World" << '\n';

        5. What statement would you use to create an integer variable with the name
        cheeses?
            -int cheeses{};
      
        6. What statement would you use to assign the value 32 to the variable cheeses?
            - cheeses = 32;

        7. What statement would you use to read a value from keyboard input into the vari-
        able cheeses?
            - std::cin >> cheeses;
      
        8. What statement would you use to print “We have X varieties of cheese,” where the
        current value of the cheeses variable replaces X?
            - std::cout << "We have " << cheeses << " varieties of cheese.\n";
      
        9. What do the following function prototypes tell you about the functions?
        int froop(double t); - prototype of function - type of this function is int, froop() function take one argument with double type.
        void rattle(int n); - prototype  for function with no return value - take one argument: type int.
        int prune(void); - prototype int function with no take argument
      
        10. When do you not have to use the keyword return when you define a function?
            - I dont need to use 'return' keyword everytime when i use void function.
            - However, you can use it if you don’t give a return value: return;
      
        11. Suppose your main() function has the following line:
        cout << “Please enter your PIN: “;
        And suppose the compiler complains that cout is an unknown identifier.What is
        the likely cause of this complaint, and what are three ways to fix the problem?
            - We need to use 'std::' namespace before 'cout' object.
            - Or using namespace std;
    */

    //Programming Exercises: (see 'Programing Exercises' secion in Chapter 2)
    





    std::cin.get();
    return 0;
}


/*
Bucks() function is for displed a number in dollars-and-cents format. For example, you could send argument of, say, 23.5,
and it would display $23.50 on screen.
*/
void bucks(double money)
{
    float i = money;
    std::string s;
    std::string t;
    std::stringstream out;
    out << i;
    s = out.str();

    t = s.substr(s.find(".")+1);
    // std::cout<<"number of decimal places: " << t.length();

    if(t.length() > 2)
        std::cout << "Are you sure is money value ? :)\n";
    if(t.length() == 2)
        std::cout << '$' << money << std::endl;
    if(t.length() == 1)
        std::cout << '$' << money << '0' <<std::endl;
}