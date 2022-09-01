// main.cpp -- S.Prata C++ Primer Plus 6th ed. Chapter 4 -- Compound Types.

#include <iostream>

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

    return 0;
}