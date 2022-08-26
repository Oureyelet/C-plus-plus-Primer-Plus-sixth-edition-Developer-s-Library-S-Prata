/**
    Chapter 3 -- Programming Exercises:

    3)  Write a program that asks the user to enter a latitude in degrees, minutes, and seconds and that 
        then displays the latitude in decimal format.There are 60 seconds of arc to a minute and 60 minutes 
        of arc to a degree; represent these values with symbolic constants. You should use a separate variable 
        for each input value. A sample run should look like this:

        Enter a latitude in degrees, minutes, and seconds:
        First, enter the degrees: 37           
        Next, enter the minutes of arc: 51
        Finally, enter the seconds of arc: 19
        37 degrees, 51 minutes, 19 seconds = 37.8553 degrees
*/
#include <iostream>

const int secARC_in_min{ 60 };
const int minARC_in_degree{ 60 };

void latitude(int d, int m, int s); //function prototype

int main()
{
    int degrees{};
    int min_of_arc{};
    int sec_of_arc{};

    std::cout << "Enter a latitude in degrees, minutes, and seconds: ";
    std::cout << std::endl << "First, enter the degrees: ";
    std::cin >> degrees;
    std::cout << "Next, enter the minutes of arc: ";
    std::cin >> min_of_arc;
    std::cout << "Finally, enter the seconds of arc: ";
    std::cin >> sec_of_arc;

    latitude(degrees, min_of_arc, sec_of_arc);

    std::cin.get();
    std::cin.get();
    return 0;
}

void latitude(int d, int m, int s)
{
    double m_to_d{static_cast<double>(m) / minARC_in_degree };
    double s_to_m{ static_cast<double>(s) / secARC_in_min };

    double latitude_in_degrees{ m_to_d + (s_to_m / minARC_in_degree) + d };

    std::cout << d << " degrees, " << m << " minutes, " << s << " seconds = " << latitude_in_degrees << " degrees.\n";
}