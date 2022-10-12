#include <iostream>

int main()
{
    std::cout << "Ile razy wyswietlic ?:";
    int x;

    std::cin >> x;

    for(int bif{ 0 }; bif < x; ++bif)
    {
        std::cout << "Hello Robert i Kamila!" << "";

    }
    
    


    return 0;
}