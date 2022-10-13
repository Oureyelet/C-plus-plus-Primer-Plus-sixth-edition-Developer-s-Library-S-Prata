#include <iostream>
#include <cstring> // for strcpy() function

int main()
{
    char waiting[7] = "Monday";
    strncpy(waiting, "Next Week", 6);
    waiting[6] = '\0';

    std::cout << waiting << '\n';

    return 0;
}