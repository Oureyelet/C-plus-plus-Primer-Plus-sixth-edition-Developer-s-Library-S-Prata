// Listing 4.8 strtype2.cpp -- assigning, adding and appending
#include <iostream>
#include <string>   // make string class available

int main()
{
    std::string s1{ "penguin" };
    std::string s2, s3;
    char char1[20]{ " Hello World" };

    std::cout << "Can you assing one string object to another: s2 = s1\n";
    s2 = s1;
    std::cout << "s1: " << s1 << ", s2: " << s2 << std::endl;
    std::cout << "You can assing a C-style string to a string object.\n";
    s2 = "buzzard";
    s2 += char1;
    std::cout << "s2: " << s2 << '\n';
    std::cout << "You can concatenate string: s3 = s1 + s2\n";
    s3 = s1 + s2; 
    std::cout << "s3: " << s3 << '\n';
    std::cout << "You can append strings.\n";
    s1 += s2;
    std::cout << "s1 += s2 yields s1 = " << s1 << std::endl;
    s2 += " for a day";
    std::cout << "s2 += \" for a day \" yields s2 = " << s2 << '\n';


    return 0;
}