/**
    Chapter 3 -- Programming Exercises:

    4)  Write a program that asks the user to enter the number of seconds as an integer
        value (use type long, or, if available, long long) and that then displays the equiva-
        lent time in days, hours, minutes, and seconds. Use symbolic constants to represent
        the number of hours in the day, the number of minutes in an hour, and the number
        of seconds in a minute.The output should look like this:
        Enter the number of seconds: 31600000
        31600000 seconds = 365 days, 17 hours, 46 minutes, 40 seconds
*/
#include <iostream>

int main()
{
    long seconds{};
    const long days{ 86400 };
    const long hours{ 3600 };
    const long minutes{ 60 };

    std::cout << "Enter the number of seconds: ";
    std::cin >> seconds;                            // 31600000 sec
    
    long whole_days{ seconds / days };              // 31600000 / 86400 = 365 days
    long reminder_days{ seconds % days };           // 31600000 % 86400 = 64000 sec.

    long whole_hours{ reminder_days / hours };      // 64000 / 3600 = 17 hrs 
    long reminder_hours{ reminder_days % hours };   // 64000 % 3600 = 2800 sec.

    long whole_minutes{ reminder_hours / minutes }; // 2800 / 60 = 46 min
    long reminder_minutes{ seconds % minutes };     // 2800 % 60 = 40 sec.

    std::cout << seconds << " seconds = " << whole_days << " days, "
              << whole_hours << " hours, " << whole_minutes << " minutes, "
              << reminder_minutes << " seconds.\n";

    std::cin.get();
    std::cin.get();
    return 0;
}
