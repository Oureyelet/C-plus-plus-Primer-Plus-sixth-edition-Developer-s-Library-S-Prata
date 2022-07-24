#include <iostream>
#include <string>
#include <string_view>

class Example
{
private:

    std::string m_name{};
    std::string m_title{};
    double m_salary{};
    std::string m_unusual_abilities{};

public:
    Example(std::string_view name, std::string_view title, double salary, std::string_view un_abi)
        : m_name{ name }, m_title{ title }, m_salary{ salary }, m_unusual_abilities{ un_abi }
    {
        std::cout << name << ' ' << title << " $" << salary << ' ' << un_abi << '\n'; 
    }

};

template<typename T>
T add(T a, T b)
{
    return a + b;
}

int main()
{
    std::cout << "Hello World my name is Sophie\n";

    //Learning C++: What lies before you

    //The Origins of c++: A little History
    
    //The C Language

    //C Programming Philosophy

    //The C++ Shift: Object-Oriented Programing1
        Example example{ "Guilford Sheepbla", "Vice President", 925.00, "Windows registry" }; 

    //C++ and generic programing
    std::cout << add<double>(2, 5.2) << '\n';

    //The Genesis of C++
    int c{ 6 };

    c++;

    std::cout << c << '\n';

    //Portability and Standards

    //Language growth

    return 0;
}