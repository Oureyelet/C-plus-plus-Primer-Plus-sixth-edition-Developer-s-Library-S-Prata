// myfirst.cpp -- displays a message

#include <iostream>                                     // a PREPROCESOR directive
                                                        
int main()                                              //function header
{                                                       //start of function body
    //C++ Initiation                                    //just comment
    std::cout << "Come up and C++ me some time.";       //message
    std::cout << std::endl;                             //start a new line
    std::cout << "You won't regret it!" << std::endl;   //more output

    std::cin.get();                                     //keep window open until strike a ENTER key
    return 0;                                           //terminate main()
}                                                       //end of function body

