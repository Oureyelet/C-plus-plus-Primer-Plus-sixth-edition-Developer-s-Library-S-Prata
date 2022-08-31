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

    return 0;
}