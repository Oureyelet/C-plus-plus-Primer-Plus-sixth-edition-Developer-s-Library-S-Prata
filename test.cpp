#include <iostream>
#include <cstring> // for strcpy() function

void helloworld();

int main()
{
    struct antartica_years_end
    {
        int year;
        /*some really intresting data, etc.*/
    };

    /*We can create variable of this type:*/
    antartica_years_end s01;
    antartica_years_end s02;
    antartica_years_end s03;
    antartica_years_end s04;    // s01, s02, s03, s04 are structures

    /*We can then access members using the membership operator:*/
    s01.year = 2022;

    /*We can create a pointer to such a structure:*/
    antartica_years_end *ptr_antartica = &s01;

    /*Provided the pointer has been set to a valid address, we then can use the indirect
    membership operator to access members:*/
    ptr_antartica->year = 1990;

    /*We can create arrays of structures:*/
    antartica_years_end s_array[3]; // array of 3 structures

    /*We then can use the membership operator to access members of an element:*/
    s_array[1].year = 2003; // s_array[0] is a structure

    /*Here, trio is an array, but trio[0] is a structure, and trio[0].year is a member of
    that structure. Because an array name is a pointer, we also can use the indirect member-
    ship operator:*/
    (s_array+1)->year = 2001;   // same as s_array[1].year = 2004 beacause we czas used 'pointer arithmetic' 
                                //we just added one to the address which i next index in our array

    /*We can create an array of pointers:*/
    antartica_years_end *ptr_array[4] = { &s01, &s02, &s03, &s04 };

    ptr_array[1]->year = 3033;

    std::cout << ptr_array[1]->year << '\n';

    return 0;
}

