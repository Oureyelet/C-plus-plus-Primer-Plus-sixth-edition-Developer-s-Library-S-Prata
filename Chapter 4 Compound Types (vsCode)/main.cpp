// main.cpp -- S.Prata C++ Primer Plus 6th ed. Chapter 4 -- Compound Types.

#include <iostream>
#include <string>   // for string object
#include <cstring>  // for C-style library   

int main()
{
    //---------------------
    // Introduction Arrays: 
    //---------------------
    short months[12];   // Creates array of 12 short
        
        // The Array as Compound Type:
        float loans[20];

        // The Importance of Valid Subscript Values: please see "Listing 4.1 arrayone.cpp" file
    
    // Program Notes:

    // Initialization Rules for Arrays:
    int card[4] = { 3, 6, 8, 10 };      // okay
    int hands[4];                       // okay
    float hotelTips[5] = { 5.0, 2.5 };  // initializes only the first two elements of hotelTips.
    long totals[500] = { 0 };           // initialize the first element to zero and then let the compiler initialize the remaining elements to zero
    short things[] = { 1, 4, 6, 8 };    // The compiler makes things an array of four elements.

        // Letting the Compiler Do It:
        long things2[] = { 1, 5, 7, 8, 9};
        int num_elements = sizeof (things2) / sizeof (long);
        std::cout << num_elements << '\n';

    
    //----------------------------
    // C++11 Array Initialization: 
    //----------------------------
    double earning[4]{ 1.2e4, 1.6e4, 1.1e4, 1.1e4 };    // ok with C++11
    unsigned int counts[10] = {};                       // all elements set to 0
    float balances[100]{};                              // all elements set to 0
    //char slifts[4]{ 'h', 'i', 12121212, '\0' };         // NOT ALLOWED
    char slifts2[4]{ 'h', 'i', 121, '\0' };             // ALLOWED


    //---------
    // Strings: 
    //---------
    char dog[8]{ 'b', 'e', 'a', 'u', 'x', ' ', 'I', 'I' };  // NOT A STRING!
    char cat[8]{ 'f', 'a', 't', 'e', 's', 's', 'a', '\0' }; // '\0' on the end so this is A STRING !

    std::cout << dog[5] << " is from arrayr of char and this is type: " << typeid(*dog).name() << '\n';
    std::cout << cat << " is from string (is also arrayr of char but a string) and this is type: " << typeid(*dog).name() << '\n';

    char bird[11]{ "Mr. Cheeps" };  // string constant or string literal and the '\0' is understood
    char fish[]{ "Bubbles" };       // string constant or string literal and let the compiler count

        // Caution:
        //char shirt_size = "S";      // is including 'S' + '\0' and is stored in memory addres so is illegal type mismatch.


    //-------------------------------
    // Concatenating String Literals: 
    //-------------------------------
    std::cout << "Hello World my name is Sophie" " Kacperska.\n";   // all the following output statements are equivalent to each other
    std::cout << "Hello World my name is Sophie Kacperska.\n";      // all the following output statements are equivalent to each other
    std::cout << "Hello World my name is Sophie"                    // all the following output statements are equivalent to each other
    " Kacperska.\n";                                                // all the following output statements are equivalent to each other


    //---------------------------------------------------------------------
    // Using String in an Array: please see "Listing 4.2 strings.cpp" file
    //---------------------------------------------------------------------

        // Program notes:


    //---------------------------------------------------------------------
    // Adventures in String Input: please see "Listing 4.3 instr1.cpp" file
    //---------------------------------------------------------------------
    std::cout << "Time for moving out to Sheffield 22:44 :D " << '\n';
    std::cout << "Airbnb time... " << '\n';
    std::cout << "I will try today... " << '\n';


    //---------------------------------------
    // Reading String Input a Line at a Time: 
    //---------------------------------------


    //-----------------------------------------------------------------------------
    // Line-Oriented Input with getline(): please see "Listing 4.4 instr2.cpp" file
    //-----------------------------------------------------------------------------
    char name[20];
    std::cout << "Enter your full name place: ";
    std::cin.getline(name, 19);
    std::cout << "Hello " << name << '\n';


    //-------------------------------------------------------------------------
    // Line-Oriented Input with get(): please see "Listing 4.5 instr3.cpp" file
    //-------------------------------------------------------------------------
    

    //---------------------------------
    // Empty Lines and Other Problems:
    //---------------------------------
    

    //---------------------------------------------------------------------------
    // Mixing String and Numeric Input: please see "Listing 4.6 numstr.cpp" file
    //---------------------------------------------------------------------------
    

    //---------------------------------------------------------------------------
    // Introducing the string Class: please see "Listing 4.7 strtype1.cpp" file
    //---------------------------------------------------------------------------
    std::string oko;
    char charr3[200] = "Hello World my name is Sophie";
    oko = charr3;   // You can initialize a string object to a C-style string.
    std::cout << charr3 << '\n';

    //You can use array notation to access individual characters stored in a string object:
    std::cout << "Third letter in oko is " << oko[2] << '\n';


    //-----------------------------
    // C++11 String Initialization:
    //-----------------------------
    char first_date[] = { "Queen Elizabeth II" };       // List-initialization is availables 
    char second_date[]{ "Queen Elizabeth II" };         // for C-style strings
    std::string third_date = { "Queen Elizabeth II" };  // and
    std::string fourth_date{ "Queen Elizabeth II" };    // string objects.


    //--------------------------------------------------------------------------------------
    // Assignment, Concatenation, and Appending: please see "Listing 4.8 strtype2.cpp" file
    //--------------------------------------------------------------------------------------
    char charr_1[20];               // create an empty array
    char charr_2[20] = "jaguar";    // create an initialized array
    std::string str_1;              // create an empty string object
    std::string str_2 = "panther";  // create an initialized string
    // charr_1 = charr_2;              // INVALID, no array assignment
    str_1 = str_2;                  // VALID, object assignment ok

    std::string str_3;
    str_3 = charr_2 + str_2;
    str_1 += str_2;

    std::cout << "str_3: " << str_3 << " and str_1: " << str_1 << '\n';


    //--------------------------------------------------------------------------
    // More string Class Operations: please see "Listing 4.9 strtype3.cpp" file
    //--------------------------------------------------------------------------
    std::string a1{ "Hello" };
    std::string a2{ " World" };
    std::string a3;

    a3 = a1 + a2;

    std::cout << "a3: " << a3 << '\n';

    // is equivalent of:

    char b1[]{ "Hello" };
    char b2[]{ " World" };

    int len1 = strlen(b1);

    char b3[2 * len1];

    strcpy(b3, b1);
    strcat(b3, b2);

    std::cout << "b3: " << b3 << '\n';

    //----------------------------------

    std::string company{ "NiftyLift" };
    int len2 = company.size();  // obtain length of company

    char where[]{ "Hoyland" };
    int len3 = strlen(where);
    
    std::cout << "Length of 'company' by using \" name.size(); \": " << len2 << '\n';
    std::cout << "Length of 'where' by using \" strlen(name); \": " << len3 << '\n';

    std::cout.put('h'); // put() function allow you to display single character
    std::cout << std::endl;

    //-----------------------------------------------------------------------
    // More on string Class I/O:  please see "Listing 4.10 strtype4.cpp" file
    //-----------------------------------------------------------------------
    char charPizza[20];
    strlen(charPizza);


    //---------------------------------
    // Other Forms of String Literals: 
    //---------------------------------
    wchar_t titel[]{ L"Chief Astrogator" }; // w_char string
    char16_t name2[]{ u"Felonia Ripova" };  // char_16 string
    char32_t car[]{ U"Felonia Ripova" };    // char_32 string

    std::cout << R"(Jim "King" Tutt uses "\n" instead of endl.)" << '\n';   // raw string
    std::cout << R"+*("(Who wouldn't?)", she whispered.)+*" << std::endl;


    //--------------------------------------------------------------
    // Introducing Structures: A structure is a user-definable type
    //--------------------------------------------------------------

    struct inflatable   // structure declaration
    {
        char name[20];
        float valume;
        double price;
    };

    inflatable hat;             // hat is a structure variable of type inflatable
    inflatable woopy_cushoon;   // type inflatable variable
    inflatable mainframe;       // type inflatable variable


    //-----------------------------------------------------------------------------
    // Using a Structure in a Program: please see "Listing 4.11 structur.cpp" file
    //-----------------------------------------------------------------------------
        // Program Notes
    

    //---------------------------------
    // C++11 Structure Initialization: 
    //---------------------------------




    return 0;
}