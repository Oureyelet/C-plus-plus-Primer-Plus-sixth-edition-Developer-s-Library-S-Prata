// Listing 4.23 mixtypes.cpp -- some type combinations
#include <iostream>

struct antartica_years_end
{
    int year;
    /*some really intresting data, etc.*/
};

int main()
{
    antartica_years_end s01, s02, s03;
    s01.year = 2001;
    antartica_years_end *pa = &s02;
    pa->year = 2002;
    antartica_years_end trio[3];    // array of 3 structures
    trio[0].year = 2003;
    std::cout << trio->year << '\n';

    const antartica_years_end *arp[3] = { &s01, &s02, &s03 };
    std::cout << arp[1]->year << '\n';

    const antartica_years_end **ppa = arp;
    auto ppb = arp; // c++11 automatic type deduction
// or else use const antartica_years_end **ppb = arp;

    std::cout << (*ppa)->year << '\n';
    std::cout << (*(ppb+1))->year << '\n';

    return 0;
}