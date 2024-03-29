// main.cpp -- S.Prata C++ Primer Plus 6th ed. Chapter 4 -- Compound Types.

#include <iostream>
#include <string>   // for string object
#include <cstring>  // for C-style library
#include <vector>   // for std::vector object

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
            allocated at compile time.
        
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
    some_ptr[1] = 13;
    some_ptr[2] = 14;

    std::cout << "[Before increment the pointer] Here is value of first element of our pointer array some_ptr: " << *some_ptr << '\n';
    std::cout << "[Before increment the pointer] Here is address of first element of our pointer array some_ptr: " << some_ptr << '\n';
    std::cout << "[Before increment the pointer] Here is again value of our first element of pointer array some_ptr: " << *some_ptr << '\n';

        /*
            "The near equivalence of pointers and array names stems from pointer arithmetic and how
            C++ handles arrays internally. First, let’s check out the arithmetic.Adding one to an inte-
            ger variable increases its value by one, but adding one to a pointer variable increases its
            value by the number of bytes of the type to which it points.Adding one to a pointer to
            double adds 8 to the numeric value on systems with 8-byte double, whereas adding one
            to a pointer-to-short adds two to the pointer value if short is 2 bytes. Listing 4.19
            demonstrates this amazing point. It also shows a second important point: C++ interprets
            the array name as an address."
        */

    some_ptr = some_ptr + 1;

    std::cout << "[After increment the pointer] Here is value of first element of our pointer array some_ptr: " << *some_ptr << '\n';
    std::cout << "[After increment the pointer] Here is address of first element of our pointer array some_ptr: " << some_ptr << '\n';
    std::cout << "[After increment the pointer] Here is again value of our first element of pointer array some_ptr: " << *some_ptr << '\n';


    //----------------------------------------------------------------------------------
    
        /*
            "The fundamental difference between an array
            name and a pointer appears in the following line:"
        
            p3 = p3 + 1; // okay for pointers, wrong for array names
        */
    
    
    
    
    //----------------------------------------------------------------------------------
    // Pointers, Arrays, and Pointer Arithmetic: please see "Listing 4.19 addpntrs.cpp"
    //----------------------------------------------------------------------------------
        
        //----------------
        // Program Notes:
        //----------------
            
            int array_one[5]{ 1, 2, 3, 4, 5 };            // example of int array with 5 elements
            int *ptr_array_one = array_one;                 // pointer of int array first element

            // dereferencing oper-ator (*)

            std::cout << array_one << '\n';               // print address of first element of array: 0x7fffffffd9f0
            std::cout << ptr_array_one << '\n';           // print same address: 0x7fffffffd9f0
            std::cout << &array_one[0] << '\n';           // print same address: 0x7fffffffd9f0
            std::cout << &array_one << '\n';              // displays same  address of whole array: 0x7fffffffd9f0
            
            std::cout << array_one + 1 << '\n';      // the expression array_one + 1 adds 4 to the address value (0x7fffffffafa4)
            std::cout << &array_one + 1 << '\n';     // whereas &array_one + 1 adds 40 to the address value (0x7fffffffafb4)

            std::cout << *(ptr_array_one + 1) << '\n';    // print: 2
            std::cout << *(array_one + 1) << '\n';        // print: 2
            std::cout << ptr_array_one[1] << '\n';        // print: 2
            ptr_array_one += 1;                           // increment pointer by 1
            std::cout << *ptr_array_one << '\n';          // print same: 2 because we move pointer to second address of our array.

        //--------------------------
        // The Address of an Array:
        //--------------------------

    

    //----------------------------------------------------------------------------------
    // Summarizing Pointer Points:
    //----------------------------------------------------------------------------------

        // Declaring Pointers:
            
            double *ptr_xxx;    // example of declaring pointer - ptr_xxx can point to a double value
            short *ptr_xxi;     // example of declaring pointer - ptr_xxi can point to a short value

        // Assigning Values to Pointers:

            /*
                "You should assign a memory address to a pointer.You can apply the & operator to a vari-
                able name to get an address of named memory, and the new operator returns the address of
                unnamed memory."
            */

                double *pn_T;   // example of pointer to double
                double *pa_T;   // example of pointer to double
                char *pc_T;     // example of pointer to char

                double bubble{ 3.2 };   // double variable

                pn_T = &bubble;         // assign address of bubble to pn_T
                pc_T = new char;        // assign address of newly allocated char memory to pc_T
                pa_T = new double[30];  // assign address of 1st element of array of 30 double to pa_T

        // Dereferencing Pointers:

            std::cout << *pn_T << '\n'; // example of referring to the pointed-to value here we print 3.2 with our example
            *pc_T = 'T';                // place 'T' into the memory location whose address is pc_T

                /*
                    "Array notation is a second way to dereference a pointer; for instance, pn[0] is the same
                    as *pn.You should never dereference a pointer that has not been initialized to a proper
                    address. For example:"
                */
                    pa_T[0] = 120;
                    std::cout << *pa_T << " is same as " << pa_T[0] << '\n';

        // Distinguishing Between a Pointer and the Pointed-to Value:

            /*
                "Remember, if pt is a pointer-to-int, *pt is not a pointer-to-int; instead, *pt is the com-
                plete equivalent to a type int variable. It is pt that is the pointer."
            */
                int *pointer_to_int = new int;  // pointer to int (assigns an address to the pointer pt)
                *pointer_to_int = 7;            // equivalent to a type int variable - not pointer to int. (stores the value 5 at that address)

        // Array Names:

            /*
                "In most contexts, C++ treats the name of an array as equivalent to the address of the first
                element of an array."
            */
                int taco[10];
                std::cout << taco << " is same as: " << &taco[0] << '\n';
            
            /*
               "One exception is when you use the name of an array with the sizeof operator. In that
                case, sizeof returns the size of the entire array, in bytes."
            */
                std::cout << sizeof(taco) << " this is size of the entire array in bytes." << '\n';

        // Pointer Arithmetic:
        
            int kiwi[10]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
            
            int *p_kiwi = kiwi;             // suppose p_kiwi and kiwi are the address 3000
            int *w_kiwi = &kiwi[9];         // w_kiwi is 3036 if an int is 4 bytes

            p_kiwi = p_kiwi + 1;            // now p_kiwi is 3004 if a int is 4 bytes
            w_kiwi = w_kiwi - 1;            // now w_kiwi is 3032, the address of kiwi[8]

            int diff = w_kiwi - p_kiwi;     // diff is 7, the separation between kiwi[8] and kiwi[1]

            std::cout << "diff is : " << diff << '\n';  // print 7

        // Dynamic Binding and Static Binding for Arrays:

            double kukunamuniu[3]{ 23.4, 56.3, 22.4 };  // static binding, size fixed at compile time

            /*
                "You use the new [] operator to create an array with dynamic binding (a dynamic
                array)—that is, an array that is allocated and whose size can be set during runtime.You
                free the memory with delete [] when you are done:"
            */
                int size_y;     // size of our dynamic dinding array
                std::cout << "Enter size of Dynamick Binding Array: ";  // ask user to enter the size
                std::cin >> size_y; // enter the size
                int *array_new = new int[size_y];   // create dynamicly alocate memory array by using 'new' key word

                for(int count{ 0 }; count < size_y; ++count)    // for loop for enter numbers to our dynamic array
                {
                    std::cout << "Enter " << count + 1 << " element of your array: ";   // ask user to enter the numbers
                    std::cin >> array_new[count];   // enter first... second... third... and so on...
                }

                std::cout << "Here is your whole array sir: " << '\n';  // display 'Here is your whole array sir:'

                for(int count{ 0 }; count < size_y; ++count)    // for loop for dispplay numbers from our array
                {
                    std::cout << array_new[count] << ' ';
                }
                std::cout << '\n';
                delete [] array_new;    // free memory when finished.

            // Array Notation and Pointer Notation:

                /*
                    "Using bracket array notation is equivalent to dereferencing a pointer:"
                */
                    short mini_array[3]{ 7, 8, 9 };

                    std::cout << mini_array[0] << ' ' << mini_array[3] << " is equivalt to: " 
                              << *mini_array   << ' ' << *(mini_array + 3) << '\n';

                /*
                    This is true for both array names and pointer variables, so you can use either pointer
                    notation or array notation with pointers and array names.
                */
                    int *ptr_ex = new int[5];   // ptr_ex points to block of 5 ints
                    *ptr_ex = 5;                // set element number 0 to 5
                    ptr_ex[0] = 6;              // reset element number 0 to 6
                    ptr[4] = 44;                // set fourth element (element number 5) to 44
                    int coconat[10];    
                    *(coconat + 4) = 13;        // set coconat[4] to 13

    

    //----------------------------------------------------------------------------------
    // Pointers and Strings: check example here -> "Listing 4.20 ptrstr.cpp"
    //----------------------------------------------------------------------------------
        
        /*
            "A C-style string is simply an array of characters that uses 
            a null terminator. Here is example of C-style string:"
        */
            char example_of_C_style_str[30]{"I love you"};     // C-style example (is also string constant or string literal)
            std::cout << example_of_C_style_str << " Jezus!\n"; /* 
                                                                    "The cout object assumes that the address of a char is 
                                                                    the address of a string, so it prints the character at
                                                                    that address and then continues printing characters until 
                                                                    it runs into the null character (\0)."
                                                                */

        /*
            "With cout and with most C++ expressions, the name of an array of char, a pointer-to-
            char, and a quoted string constant are all interpreted as the address of the first character
            of a string."
        */

            /*
                "Caution: Use strcpy() or strncpy(), not the assignment operator, to assign a string to an array."
            */
            char str_Bi[4]{ "Oko" };             // example of string literal
            strncpy(str_Bi, "Yo", 3);
            str_Bi[3] = '\0';

        /*
            "When you read a string into a program-style string, you should always use the address of
            previously allocated memory. This address can be in the form of an array name or of a
            pointer that has been initialized using new."
        */

        /*
            To avoid copy to big string into arrach we should use strncpy() function:
            " It takes a third argument: the maximum number of characters to be copied. "
        */
        char waiting[7] = "Monday";
        strncpy(waiting, "Next Week", 6);
        waiting[6] = '\0';

            /*
                " Thus, you should use the function like this: This copies up to 6 characters into the array and 
                then sets the last element to the null character. If the string is shorter than 6 characters, 
                strncpy() adds a null character earlier to mark the true end of the string."
            */
        
        // Caution: Use strcpy() or strncpy(), not the assignment operator, to assign a string to an array.

    

    //--------------------------------------------------------------------------------------------
    // Using 'new' to Create Dynamic Structures: check example here -> "Listing 4.21 newstrct.cpp"
    //--------------------------------------------------------------------------------------------

        struct idea // structure definition
        {
            int good;
            int bad;
        };

        idea gods_idea = { 3, 77 };             // "gods_idea" is a structure
        idea *pgi = &gods_idea;                 // 'pgi' points to the 'gods_idea' structure

        // Use '.' operator with structure names:
            gods_idea.good = 777;
            gods_idea.bad = 0;

        // Use '->' oprator with pointer-to-structure:
            pgi->good = 33;
            pgi->bad = 0;

        std::cout << "'(*pgi).good' represents the pointed-to value—the structure itself: " << (*pgi).good << '\n'; // print 33
        std::cout << "'pgi->good' access to value: " << pgi->good << '\n';  // print 33



    //--------------------------------------------------------------------------------------------
    // An Example of Using 'new' and 'delete': check example here -> "Listing 4.22 delete.cpp"
    //--------------------------------------------------------------------------------------------

        // Program Notes

    

    //--------------------------------------------------------------------------------------------
    // Automatic Storage, Static Storage, and Dynamic Storage:
    //--------------------------------------------------------------------------------------------

        // Automomatic Storage:

            /*
                "Ordinary variables defined inside a function use automatic storage and are called automatic
                variables.These terms mean that the variables come into existence automatically when the
                function containing them is invoked, and they expire when the function terminates.
                Automatic variables typically are stored on a stack.This means that when program exe-
                cution enters a block of code, its variables are added consecutively to the stack in memory
                and then are freed in reverse order when execution leaves the block. (This is called a last-
                in, first-out, or LIFO, process."
            */
        
        // Static Storage:

            /*
                "Static storage is storage that exists throughout the execution of an entire program.There
                are two ways to make a variable static. One is to define it externally, outside a function.
                The other is to use the keyword static when declaring a variable."
            */

        // Dynamic Storage:

            /*
                This is where you use 'New' and 'delete' to alocate memorry.
                "The new and delete operators provide a more flexible approach than automatic and static
                variables.They manage a pool of memory, which C++ refers to as the free store (or heap)."
            */

                // Stack, Heaps, and Memory Leaks:

                    /*
                        "Even the best programmers and software companies create memory leaks. To avoid them,
                        it’s best to get into the habit of joining your new and delete operators immediately, plan-
                        ning for and entering the deletion of your construct as soon as you dynamically allocate it
                        on the free store. "
                    */
                
                   // Note:



    //--------------------------------------------------------------------------------------------
    // Combinations of Types: check example here -> "Listing 4.23 mixtypes.cpp"
    //--------------------------------------------------------------------------------------------

        /*
            "This chapter has introduced arrays, structures, and pointers.These can be combined in
            various ways, so let’s review some of the possibilities, starting with a structure:"
        */

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
    antartica_years_end *ptr_array[3] = { &s01, &s02, &s03, &s04 };

    ptr_array[1]->year = 3033;

    std::cout << ptr_array[1]->year << '\n';

    /*We can create a pointer to such an array:*/
    const antartica_years_end **ptrptr = ptr_array;
        
        // or we can use 'auto' instead:
        auto **ptrptr2 = ptr_array; // "The compiler is perfectly aware of what type ptr_array is, so it can
                                    // deduce the correct type for you." C++11 automatic type deduction
    

    /*How can you use ptrptr to access data?*/
    std::cout << (*ptr_array)->year << '\n';    // member of s01
    std::cout << (*(ptrptr + 1))->year << '\n'; // is &s02



    //--------------------------------------------------------------------------------------------
    // Array Alternatives:
    //--------------------------------------------------------------------------------------------



    //--------------------------------------------------------------------------------------------
    // The vector Template Class:
    //--------------------------------------------------------------------------------------------
        // Vector is dynamic array.

    std::vector<int> vi;        // create a zero-size array of int
    int n3;
    std::cin >> n3;
    std::vector<double> vd(n3); // create an array of n3 doubles



    return 0;
}