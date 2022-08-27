/**
    Chapter 3 -- Programming Exercises:

    5)  -Write a program that requests the user to enter the current world population and
        the current population of the U.S. (or of some other nation of your choice).
        
        -Store the information in variables of type long long. 

        -Have the program display the percent that the U.S. (or other nation’s) population is of the world’s population.
        
        -The output should look something like this:

            Enter the world's population: 6898758899
            Enter the population of the US: 310783781
            The population of the US is 4.50492% of the world population.
            
        -You can use the Internet to get more recent figures.
*/
#include <iostream>

int main()
{
    std::cout << "Please enter the current world population: ";
    long world_pop{};
    std::cin >> world_pop;
    std::cout << "Please enter the current population of some nation of your choice: ";
    long nation_pop{};
    std::cin >> nation_pop;

    double x{ nation_pop*100.0/world_pop };

    std::cout << "The population of the nation of your choice is " << x
              << "% of the world population.\n";

    std::cin.get();
    std::cin.get();
    return 0;
}