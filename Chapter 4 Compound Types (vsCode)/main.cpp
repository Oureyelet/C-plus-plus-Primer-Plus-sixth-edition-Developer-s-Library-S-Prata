// main.cpp -- S.Prata C++ Primer Plus 6th ed. Chapter 4 -- Compound Types.

#include <iostream>
#include <string>   // for string object
#include <cstring>  // for C-style library   

int main()
{
    //---------------------
    // Introducing Arrays: 
    //---------------------
    short months[12];   // Creates array of 12 short
        
        // The Array as Compound Type:
        float loans[20];

        // The Importance of Valid Subscript Values: please see "Listing 4.1 arrayone.cpp" file
    
    // Program Notes:

    // Initialization Rules for Arrays:
    int card[4] = { 3, 6, 8, 10 };      // okay
    int hands[4];                       // okay
    float hotelTips[5] = { 5.0, 2.5 };  // initializes only the first two elements of hotelTips.
    long totals[500] = { 0 };           // initialize the first element to zero and then let the compiler initialize the remaining elements to zero
    short things[] = { 1, 4, 6, 8 };    // The compiler makes things an array of four elements.

        // Letting the Compiler Do It:
        long things2[] = { 1, 5, 7, 8, 9};
        int num_elements = sizeof (things2) / sizeof (long);
        std::cout << num_elements << '\n';

    
    //----------------------------
    // C++11 Array Initialization: 
    //----------------------------
    double earning[4]{ 1.2e4, 1.6e4, 1.1e4, 1.1e4 };    // ok with C++11
    unsigned int counts[10] = {};                       // all elements set to 0
    float balances[100]{};                              // all elements set to 0
    //char slifts[4]{ 'h', 'i', 12121212, '\0' };         // NOT ALLOWED
    char slifts2[4]{ 'h', 'i', 121, '\0' };             // ALLOWED


    //---------
    // Strings: 
    //---------
    char dog[8]{ 'b', 'e', 'a', 'u', 'x', ' ', 'I', 'I' };  // NOT A STRING!
    char cat[8]{ 'f', 'a', 't', 'e', 's', 's', 'a', '\0' }; // '\0' on the end so this is A STRING !

    std::cout << dog[5] << " is from arrayr of char and this is type: " << typeid(*dog).name() << '\n';
    std::cout << cat << " is from string (is also arrayr of char but a string) and this is type: " << typeid(*dog).name() << '\n';

    char bird[11]{ "Mr. Cheeps" };  // string constant or string literal and the '\0' is understood
    char fish[]{ "Bubbles" };       // string constant or string literal and let the compiler count

        // Caution:
        //char shirt_size = "S";      // is including 'S' + '\0' and is stored in memory addres so is illegal type mismatch.


    //-------------------------------
    // Concatenating String Literals: 
    //-------------------------------
    std::cout << "Hello World my name is Sophie" " Kacperska.\n";   // all the following output statements are equivalent to each other
    std::cout << "Hello World my name is Sophie Kacperska.\n";      // all the following output statements are equivalent to each other
    std::cout << "Hello World my name is Sophie"                    // all the following output statements are equivalent to each other
    " Kacperska.\n";                                                // all the following output statements are equivalent to each other


    //---------------------------------------------------------------------
    // Using String in an Array: please see "Listing 4.2 strings.cpp" file
    //---------------------------------------------------------------------

        // Program notes:


    //---------------------------------------------------------------------
    // Adventures in String Input: please see "Listing 4.3 instr1.cpp" file
    //---------------------------------------------------------------------
    std::cout << "Time for moving out to Sheffield 22:44 :D " << '\n';
    std::cout << "Airbnb time... " << '\n';
    std::cout << "I will try today... " << '\n';


    //---------------------------------------
    // Reading String Input a Line at a Time: 
    //---------------------------------------


    //-----------------------------------------------------------------------------
    // Line-Oriented Input with getline(): please see "Listing 4.4 instr2.cpp" file
    //-----------------------------------------------------------------------------
    char name[20];
    std::cout << "Enter your full name place: ";
    std::cin.getline(name, 19);
    std::cout << "Hello " << name << '\n';


    //-------------------------------------------------------------------------
    // Line-Oriented Input with get(): please see "Listing 4.5 instr3.cpp" file
    //-------------------------------------------------------------------------
    

    //---------------------------------
    // Empty Lines and Other Problems:
    //---------------------------------
    

    //---------------------------------------------------------------------------
    // Mixing String and Numeric Input: please see "Listing 4.6 numstr.cpp" file
    //---------------------------------------------------------------------------
    

    //---------------------------------------------------------------------------
    // Introducing the string Class: please see "Listing 4.7 strtype1.cpp" file
    //---------------------------------------------------------------------------
    std::string oko;
    char charr3[200] = "Hello World my name is Sophie";
    oko = charr3;   // You can initialize a string object to a C-style string.
    std::cout << charr3 << '\n';

    //You can use array notation to access individual characters stored in a string object:
    std::cout << "Third letter in oko is " << oko[2] << '\n';


    //-----------------------------
    // C++11 String Initialization:
    //-----------------------------
    char first_date[] = { "Queen Elizabeth II" };       // List-initialization is availables 
    char second_date[]{ "Queen Elizabeth II" };         // for C-style strings
    std::string third_date = { "Queen Elizabeth II" };  // and
    std::string fourth_date{ "Queen Elizabeth II" };    // string objects.


    //--------------------------------------------------------------------------------------
    // Assignment, Concatenation, and Appending: please see "Listing 4.8 strtype2.cpp" file
    //--------------------------------------------------------------------------------------
    char charr_1[20];               // create an empty array
    char charr_2[20] = "jaguar";    // create an initialized array
    std::string str_1;              // create an empty string object
    std::string str_2 = "panther";  // create an initialized string
    // charr_1 = charr_2;              // INVALID, no array assignment
    str_1 = str_2;                  // VALID, object assignment ok

    std::string str_3;
    str_3 = charr_2 + str_2;
    str_1 += str_2;

    std::cout << "str_3: " << str_3 << " and str_1: " << str_1 << '\n';


    //--------------------------------------------------------------------------
    // More string Class Operations: please see "Listing 4.9 strtype3.cpp" file
    //--------------------------------------------------------------------------
    std::string a1{ "Hello" };
    std::string a2{ " World" };
    std::string a3;

    a3 = a1 + a2;

    std::cout << "a3: " << a3 << '\n';

    // is equivalent of:

    char b1[]{ "Hello" };
    char b2[]{ " World" };

    int len1 = strlen(b1);

    char b3[2 * len1];

    strcpy(b3, b1);
    strcat(b3, b2);

    std::cout << "b3: " << b3 << '\n';

    //----------------------------------

    std::string company{ "NiftyLift" };
    int len2 = company.size();  // obtain length of company

    char where[]{ "Hoyland" };
    int len3 = strlen(where);
    
    std::cout << "Length of 'company' by using \" name.size(); \": " << len2 << '\n';
    std::cout << "Length of 'where' by using \" strlen(name); \": " << len3 << '\n';

    std::cout.put('h'); // put() function allow you to display single character
    std::cout << std::endl;

    //-----------------------------------------------------------------------
    // More on string Class I/O:  please see "Listing 4.10 strtype4.cpp" file
    //-----------------------------------------------------------------------
    char charPizza[20];
    strlen(charPizza);


    //---------------------------------
    // Other Forms of String Literals: 
    //---------------------------------
    wchar_t titel[]{ L"Chief Astrogator" }; // w_char string
    char16_t name2[]{ u"Felonia Ripova" };  // char_16 string
    char32_t car[]{ U"Felonia Ripova" };    // char_32 string

    std::cout << R"(Jim "King" Tutt uses "\n" instead of endl.)" << '\n';   // raw string
    std::cout << R"+*("(Who wouldn't?)", she whispered.)+*" << std::endl;


    //--------------------------------------------------------------
    // Introducing Structures: A structure is a user-definable type
    //--------------------------------------------------------------

    struct inflatable   // structure declaration
    {
        char name[20];
        float valume;
        double price;
    };

    inflatable hat;             // hat is a structure variable of type inflatable
    inflatable woopy_cushoon;   // type inflatable variable
    inflatable mainframe;       // type inflatable variable


    //-----------------------------------------------------------------------------
    // Using a Structure in a Program: please see "Listing 4.11 structur.cpp" file
    //-----------------------------------------------------------------------------
        // Program Notes
    

    //---------------------------------
    // C++11 Structure Initialization: 
    //---------------------------------


    //--------------------------------------------
    // Can a Structure Use a string Class Member? 
    //--------------------------------------------


    //-------------------------------------------------------------------------
    // Other Structure Properties: please see "Listing 4.12 assgn_st.cpp" file
    //-------------------------------------------------------------------------

    struct rodzina
    {
        /*
        You can combine the definition of a structure form with the creation of structure
        variables.To do so, you follow the closing brace with the variable name or names:
        */

        char imie[20];
        char plec[20];
        int wiek;
    }Lenczuk, Kacperscy;    // two perks variables

    Lenczuk = 
    {
        "Anna",
        "Kobieta",
        32
    };

    std::cout << "Name of first family member: " << Lenczuk.imie << " and sex " << Lenczuk.plec << " and age " 
              << Lenczuk.wiek << '\n';

    Kacperscy =
    {
        "Mateusz",
        "Mezczyzna",
        30
    };

    //---------------------

    struct company
    {
        /*
        You even can initialize a variable you create in this fashion:
        */

        char name[20];
        int employee_number;
    }niftylift = 
    {
        "Niftylift",    // value for niftylift.name member
        1430            // value for niftylift.employee_number member
    };

    std::cout << "You are employee in " << niftylift.name << " and your employee number is " 
              << niftylift.employee_number << '\n';

    //---------------------

    struct      // no tag (name)
    {
                /*
                Another thing you can do with structures is create a structure with no type name.
                */

        int x;  // 2 members
        int y;
    }position;  // a structure variable

    //---------------------
    
    struct instrument
    {
        /*
        C++ structures
        can have member functions in addition to member variables. 
        */

        void guitar()
        {
            std::cout << "Guitar here!" << '\n';
        }
    };

    instrument guitar;
    guitar.guitar();

    
    //-------------------------------------------------------------------------
    // Arrays of Structures: please see "Listing 4.13 arrstruc.cpp" file
    //-------------------------------------------------------------------------
    struct table
    {
        char name[20];
        char color[20];
        double price;
    };

    table round[100];   // array of 100 table structures

    std::cout << "Enter name of [1] round table: ";
    std::cin >> round[0].name;                          // use name member of first struct
    std::cout << "Enter color of [1] round table: ";
    std::cin >> round[0].color;
    std::cout << "Enter price of [1] round table: ";
    std::cin >> round[0].price;
    std::cout << round[0].name << " is " << round[0].color << " color and is cost $" << round[0].price << ".\n";

    std::cout << "Enter name of [2] round table: ";
    std::cin >> round[1].name;                          // use name member of second struct
    std::cout << "Enter color of [2] round table: ";
    std::cin >> round[1].color;
    std::cout << "Enter price of [2] round table: ";
    std::cin >> round[1].price;
    std::cout << round[1].name << " is " << round[1].color << " color and is cost $" << round[1].price << ".\n";
    
    //-------------------

    table square[3] =                   // initializing an array of structs
    {
        {"Sophie", "rozowy", 12},       // first structure in array
        {"Ania", "bialy", 77},          // second structure in array
        {"Mateusz", "niebieski", 33}    // third structure in array
    };

    std::cout << square[1].name << " is " << square[1].color << " color and is cost $" << square[1].price << ".\n";



    //--------------------------
    // Bit Field in Structures:
    //--------------------------
    
    struct torgle_register
    {
        unsigned int SN : 4;    // 4 bits for SN value
        unsigned int : 4;       // 4 bits unused
        bool goodIn : 1;        // valid input (1 bit)
        bool goodTorgle : 1;    // successful torgling
    };

    torgle_register tr =
    {
        14,
        true,
        false
    };



    //---------
    // Unions:
    //---------
    
    union one4all
    {
        int int_val;
        long long_val;
        double double_val;
    };

    one4all pail;
    pail.int_val = 15;                                              // store an int
    std::cout << "Pail int value = " << pail.int_val << '\n';
    pail.double_val = 1.38;                                         // store a double, int value is lost
    std::cout << "Pail double value = " << pail.double_val << '\n';

    //-------------------
    // another example...

    /*
     For example, suppose you manage a mixed inventory of widg-
    ets, some of which have an integer ID, and some of which have a string ID. In that case,
    you could use the following:
    */

    struct widget
    {
        char brand[20];
        int type;

        union id                // format depends on widget type
        {
            long id_num;        // type 1 wodgets
            char id_char[20];   // other widgets
        }id_val;
    };

    widget prize;
    
    if(prize.type == 1)
    {
        std::cout << "Please enter prize for \" prize.id_val.id_num \":";
        std::cin >> prize.id_val.id_num;
    }
    else
    {
        std::cout << "Please enter name of \"prize.id_val.id_char\":";
        std::cin >> prize.id_val.id_char;
    }

    //----------------
    // next example...

    /*
    An anonymous union has no name; in essence, its members become variables that share
    the same address. Naturally, only one member can be current at a time:
    */
    
    struct shoes
    {
        char brand[20];
        double prize;

        union
        {
            int id_pound;
            double id_pence;
        };
    };
    
    shoes nike;

    /*
    Because the union is anonymous, id_pound and id_pence are treated as two members of
    shoes that share the same address
    */

    if(nike.brand == "nike")
    {   
        std::cout << "Enter prize for nike in pound: ";
        std::cin >> nike.id_pound;
    }
    else
    {
        std::cin >> nike.brand;
    }
    std::cout << std::endl;


    //--------------
    // Enumerations:
    //--------------
    // Enum facility provides an alternative to const for creating symbolic constants.
    
    // You can do something like this:
    const int spctrum_red = 0;
    const int spctrum_orange = 1;
    const int spctrum_yellow = 2;
    const int spctrum_green = 3;
    const int spctrum_blue = 4;
    const int spctrum_vilete = 77;
    const int spctrum_indigo = 78;
    const int spctrum_ultraviolete = 79;

    //or you can use enum intead:
    enum spectrum
    {
        red,    // int value 0
        orange, // int value 1
        yellow, // int value 2
        green,  // int value 3
        blue,   // ... ans so on...
        vilete = 77,    // explicitly assigning integer to difrent then default value
        indigo, // int value 78
        ultraviolet // int value 79
    };

    spectrum calor; // calor a variable of type spectrum

    /*
    You can assign an int value to an enum, provided that the value is valid and that you
    use an explicit type cast:
    */
    calor = spectrum(2);    // typecast 3 to type spectrum
    std::cout << "Calor here: " << calor << '\n';     // print 2
    calor = vilete;
    std::cout << "Calor here: " << calor << '\n';     // print 77
    
    spectrum calor_2;
    calor_2 = ultraviolet;
    std::cout << "Here calor_2: " << calor_2 << '\n'; // print 79

    /*
    If you plan to use just the constants and not create
    variables of the enumeration type, you can omit an enumeration type name, as in this
    example:
    */
    enum{one = 1, two = 2, three = 3 , twentytwo = 22};
    std::cout << "Our const one = " << one << '\n';
    std::cout << "Our const two = " << two << '\n';
    std::cout << "Our const three = " << three << '\n';
    std::cout << "Our const twentytwo = " << twentytwo << '\n';



    //---------------------------
    // Setting Enumerator Values:
    //---------------------------

    /*
    You can set enumerator values explicitly by using the assignment operator:
    */
    enum days
    {
        mon = 1,
        tue = 2,
        wen = 3,
        thu = 4,
        fri = 5,
        sat = 6,
        sun =7
    };



    //--------------------------------
    // Value Ranges for Enumerations:
    //--------------------------------
    


    //-------------------------------------------------------------------------
    // Pointers and the Free Store: please see "Listing 4.15 pointer.cpp" file
    //-------------------------------------------------------------------------

    /*
    1.  'Run time' means while a program is runing. 
        (You can choice for example how many index array should have) 

    2.  'Compile time' means when the compiler is putting a program together 
        (for example you already said how many memory array has)
    */ 
    


    //---------------------------------------------------------------------------------
    // Declaring and Initializing Pointers: please see "Listing 4.16 init_ptr.pp" file
    //---------------------------------------------------------------------------------

    double *tax_ptr;    // tax_ptr points to type double 
    char *str;          // str points to type char



    //---------------------------------------------------------------------------------
    // Pointer Danger:
    //---------------------------------------------------------------------------------



    //---------------------------------------------------------------------------------
    // Pointers and Numbers:
    //---------------------------------------------------------------------------------



    //---------------------------------------------------------------------------------
    // Allocating Memory with 'new': please see "Listing 4.17 use_new.cpp" file
    //---------------------------------------------------------------------------------

    int *pn{ new int };
    
        /*  Stack and Heap:  

            int x2{ 123 };
            int ptr_int{ new int };
            *ptr_int = 123;

            stack memmory: normal variables like our 'x2' and 'ptr_int' are stored in memory region called 'stack'
            ...wherease the memory allocated by 'new' is in a region called the 'heap' or 'free store'
        */

    // Program Notes:

        // Out of memory ?

    double *ptr_double{ new double };
    *ptr_double = 0;    // null pointer



    //---------------------------------------------------------------------------------
    // Freeing Memory with 'delete':
    //---------------------------------------------------------------------------------
    
    int *ps{ new int }; // allocate memory with 'new'
    //...               // use the memory
    delete ps;          // free memory with 'delete' when done

    //---------------------------------------------------------------------------------

    int size = 3;
    int *ptr{ new int };

    std::cout << "Ptr before inittialized: " << *ptr << '\n';

    *ptr = size;

    std::cout << "Ptr after inittialized: " << *ptr << '\n';

    delete ptr;

    std::cout << "Ptr after delete 'new int': " << *ptr << '\n';

    //---------------------------------------------------------------------------------
    
    int *null_POINTER{ 0 }; // example of null pointer
    delete null_POINTER;    // it’s safe to apply delete to the null pointer (nothing happens).

    
    
    //---------------------------------------------------------------------------------
    // Using 'new' to Create Dynamic Arrays:
    //---------------------------------------------------------------------------------

        /*
            Allocating the array during compile time is called 'static binding' - meaning the array was 
            allocated ar compile time.
        
            'dyanimis binding' is where program is already runing and then we decide if we need new array and
            how big this array has to be
        */
       


    
    //---------------------------------------------------------------------------------
    // Creating a Dynamic Array with 'new':
    //---------------------------------------------------------------------------------
    
    int *psome = new int [10];  // array of 10 ints - get a block od 10 ints
    delete[] psome;             // free a dynamic array

        /*
            "You can’t use the sizeof operator, for example, to find
            the number of bytes in a dynamically allocated array."
        */
    
    //----------------------------------------------------------------------------------

        /*
            "As you’re about to see, you can use
            pointer_name in many of the same ways you
            can use an array name" For example:
        */

        double *d_ptr = new double [120];       // example of use 'new' 
        d_ptr[0] = 3.32;                        // initialize first element of our 'd_ptr' array
        d_ptr[1] = 7.45;                        // initialize second element of our 'd_ptr' array

        double d_array[5]{ 3.23, 5.23, 6.56 };  // created array with normal static way + initializ them 

        std::cout << d_ptr[0] << '\n';          // display first element of 'd_ptr' array
        std::cout << d_array[1] << '\n';        // display second element of 'd_array' array

    //----------------------------------------------------------------------------------




    //---------------------------------------------------------------------------------
    // Using a Dynamic Array: please see "Listing 4.18 arraynew.cpp"
    //---------------------------------------------------------------------------------
    
    int *some_ptr = new int [25];   // example of pointer array using 'new' int
    some_ptr[0] = 12;

    std::cout << "Here is value of first element of our pointer array some_ptr: " << *some_ptr << '\n';
    std::cout << "Here is address of first element of our pointer array some_ptr: " << some_ptr << '\n';
    std::cout << "Here is again value of our first element of pointer array some_ptr: " << *some_ptr << '\n';

    
    





    return 0;
}