// Listing 4.9 strtype3.cpp -- more string class features
#include <iostream>
#include <string>   // make string class available
#include <cstring>  // C-style string library

int main()
{
    char charr1[20];
    char charr2[20] = "jaguar";
    std::string str1;
    std::string str2 = "panther";

    // assignment for string object and character arrays
    str1 = str2;            // copy string2 to string1
    strcpy(charr1, charr2);  // copy charr2 to charr1

    // appending for string objects and charcter arrays
    str1 += " paste";           // add paste to end of string
    strcat(charr1, " juice");   // add juice to end of character array


    // finding the length of a string object and a C-string string
    int len1 = str1.size();     // obtain length of str1
    int len2 = strlen(charr1);  // obtain length of charr1

    std::cout << "The string " << str1 << " contain " << len1 << " characters.\n";
    std::cout << "The string " << charr1 << " contain " << len2 << " character.\n";

    return 0;
}