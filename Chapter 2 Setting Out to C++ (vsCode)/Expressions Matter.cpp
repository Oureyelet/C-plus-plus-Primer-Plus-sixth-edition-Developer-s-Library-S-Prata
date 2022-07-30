/*
Practice task from:
https://www.codewars.com/kata/5ae62fcf252e66d44d00008e/cpp

Description:
Task

    Given three integers a ,b ,c, return the largest number obtained after inserting the following operators and brackets: +, *, ()
    In other words , try every combination of a,b,c with [*+()] , and return the Maximum Obtained

Example

With the numbers are 1, 2 and 3 , here are some ways of placing signs and brackets:

    1 * (2 + 3) = 5
    1 * 2 * 3 = 6
    1 + 2 * 3 = 7
    (1 + 2) * 3 = 9

So the maximum value that you can obtain is 9.
Notes

    The numbers are always positive.
    The numbers are in the range (1  ≤  a, b, c  ≤  10).
    You can use the same operation more than once.
    It's not necessary to place all the signs and brackets.
    Repetition in numbers may occur .
    You cannot swap the operands. For instance, in the given example you cannot get expression (1 + 3) * 2 = 8.

Input >> Output Examples:

expressionsMatter(1,2,3)  ==>  return 9

Explanation:

After placing signs and brackets, the Maximum value obtained from the expression (1+2) * 3 = 9.

expressionsMatter(1,1,1)  ==>  return 3

Explanation:

After placing signs, the Maximum value obtained from the expression is 1 + 1 + 1 = 3.

expressionsMatter(9,1,1)  ==>  return 18

Explanation:

After placing signs and brackets, the Maximum value obtained from the expression is 9 * (1+1) = 18. ___# Task

    Given three integers a ,b ,c, return the largest number obtained after inserting the following operators and brackets: +, *, ()
    In other words , try every combination of a,b,c with [*+()] , and return the Maximum Obtained

Example

With the numbers are 1, 2 and 3 , here are some ways of placing signs and brackets:

    1 * (2 + 3) = 5
    1 * 2 * 3 = 6
    1 + 2 * 3 = 7
    (1 + 2) * 3 = 9

So the maximum value that you can obtain is 9.
Notes

    The numbers are always positive.
    The numbers are in the range (1  ≤  a, b, c  ≤  10).
    You can use the same operation more than once.
    It's not necessary to place all the signs and brackets.
    Repetition in numbers may occur .
    You cannot swap the operands. For instance, in the given example you cannot get expression (1 + 3) * 2 = 8.

Input >> Output Examples:

expressionsMatter(1,2,3)  ==>  return 9

Explanation:

After placing signs and brackets, the Maximum value obtained from the expression (1+2) * 3 = 9.

expressionsMatter(1,1,1)  ==>  return 3

*/

#include <iostream>

template<typename T>
void equal(T a, T b, T c);

template<typename T>
T expressions_matter(T a, T b, T c)
{
    int x1 = a + b + c;
    int x2 = a * b * c;
    int x3 = (a + b) + c;
    int x4 = (a * b) * c;
    int x5 = a + (b + c);
    int x6 = a * (b * c);
    int x7 = a * b + c;
    int x8 = a + b * c;
    int x9 = (a * b) + c;
    int x10 = (a + b) * c;
    int x11 = a * (b + c);
    int x12 = a + (b * c);
    

    if(x1 >= x2 && x1 >= x3 && x1 >= x4 && x1 >= x5 && x1 >= x6 && x1 >= x7 && x1 >= x8 && x1 >= x9 && x1 >= x10 && x1 >= x11 && x1 >= x12)
        return x1;

    if(x2 >= x1 && x2 >= x3 && x2 >= x4 && x2 >= x5 && x2 >= x6 && x2 >= x7 && x2 >= x8 && x2 >= x9 && x2 >= x10 && x2 >= x11 && x2 >= x12)
        return x2;
    
    if(x3 >= x1 && x3 >= x2 && x3 >= x4 && x3 >= x5 && x3 >= x6 && x3 >= x7 && x3 >= x8 && x3 >= x9 && x3 >= x10 && x3 >= x11 && x3 >= x12)
        return x3;
    
    if(x4 >= x1 && x4 >= x2 && x4 >= x3 && x4 >= x5 && x4 >= x6 && x4 >= x7 && x4 >= x8 && x4 >= x9 && x4 >= x10 && x4 >= x11 && x4 >= x12)
        return x4;
    
    if(x5 >= x1 && x5 >= x2 && x5 >= x3 && x5 >= x4 && x5 >= x6 && x5 >= x7 && x5 >= x8 && x5 >= x9 && x5 >= x10 && x5 >= x11 && x5 >= x12)
        return x5;
    
    if(x6 >= x1 && x6 >= x2 && x6 >= x3 && x6 >= x4 && x6 >= x5 && x6 >= x7 && x6 >= x8 && x6 >= x9 && x6 >= x10 && x6 >= x11 && x6 >= x12)
        return x6;
    
    if(x7 >= x1 && x7 >= x2 && x7 >= x3 && x7 >= x4 && x7 >= x5 && x7 >= x6 && x7 >= x8 && x7 >= x9 && x7 >= x10 && x7 >= x11 && x7 >= x12)
        return x7;
    
    if(x8 >= x1 && x8 >= x2 && x8 >= x3 && x8 >= x4 && x8 >= x5 && x8 >= x6 && x8 >= x7 && x8 >= x9 && x8 >= x10 && x8 >= x11 && x8 >= x12)
        return x8;
    
    if(x9 >= x1 && x9 >= x2 && x9 >= x3 && x9 >= x4 && x9 >= x5 && x9 >= x6 && x9 >= x7 && x9 >= x8 && x9 >= x10 && x9 >= x11 && x9 >= x12)
        return x9;
    
    if(x10>= x1 && x10 >= x2 && x10 >= x3 && x10 >= x4 && x10 >= x5 && x10 >= x6 && x10 >= x7 && x10 >= x8 && x10 >= x9 && x10 >= x11 && x10 >= x12)
        return x10;
    
    if(x11 >= x1 && x11 >= x2 && x11 >= x3 && x11 >= x4 && x11 >= x5 && x11 >= x6 && x11 >= x7 && x11 >= x8 && x11 >= x9 && x11 >= x10 && x11 >= x12)
        return x11;
    
    if(x12 >= x1 && x12 >= x2 && x12 >= x3 && x12 >= x4 && x12 >= x5 && x12 >= x6 && x12 >= x7 && x12 >= x8 && x12 >= x9 && x12 >= x10 && x12 >= x11)
        return x12;
    
    return 1;
} 

int main(void)
{
    std::cout << expressions_matter<int>(3,3,3) << '\n';

    equal(3,3,3);

    return 0;
}

template<typename T>
void equal(T a, T b, T c)
{
    int first = a * (b + c);
    int second = a * b * c;
    int third = a + b * c;
    int fourth = (a + b) * c;

    std::cout << first << ' ';
    std::cout << second << ' ';
    std::cout << third << ' ';
    std::cout << fourth << ' ';
} 

