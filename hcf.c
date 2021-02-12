/*
    Plan:
    1. Write a function for highest common factor,
    (or gcd: greatest common divisor).
    with two parameters (as unsigned ints).
    2. Calculate the absolute value of a number,
    and take a return type and parameter of float.
    Test with ints and floats.
    3. Get a square root of a number,
    if negative argument passed then msg displays & -1.0 returned.
    Use abs function as implemented.

    Pseudocode:
    So for hcf you have to figure out how to check,
    both arguments against each other and if there is a match.
    so perhaps a check to check each time either of the numbers.
    Match.

    x = input("12")
    y = input("18")
    i = 1
    
    for i <= x
    if x MOD i == 0
    firstValue = i // 6 will be put in here
    endif
    endfor

    // unless you first check both numbers to see which is highest.
    // if false it can check in the other condition?

    for i <= y
    if y MOD i == 0
    secondValue = i
    endif
    endfor

    
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

unsigned int hcf(unsigned int x, unsigned int y);

int main(int argc, char *argv[])
{
    // hcf(12, 18); // That should return 6.

    return 0;
}

unsigned int hcf(unsigned int x, unsigned int y)
{
    for (int i = 1; i < x; i++)
    {
        if (i % x == 0)

    }
}

void function2(void)
{

}

void function3(void)
{

}
