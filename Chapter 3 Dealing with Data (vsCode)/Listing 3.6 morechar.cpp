// morechar.cpp -- the char type and int type contrasted

#include <iostream>

int main()
{
    char ch{ 'M' };
    int i{ ch };
    std::cout << "The ASCII code for " << ch << " is " << i << std::endl;

    std::cout << "Add one to the character code: \n";
    ch += 1;    // change character code in 'ch' varaible
                //'ch' is really an integer so you can apply integer operation to it, such as adding 1. 
    i = ch;     // save new character code in 'i' variable
    std::cout << "The ASCII code for " << ch << " is " << i << std::endl;

    // using the std::cout.put() member function to display a char
    std::cout << "Displaying char 'ch' using std::cout.put(ch): ";
    std::cout.put(ch);

    // using std::cout.put() to display a char constant
    std::cout.put('!');

    std::cout << '\n' << "Done" << '\n';

    std::cin.get();
    return 0;
}