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

    if a number goes into it without a remainder then
    it should be recorded that it happened but at the same time as the other number
    get the last match, could be based on a condition checking
    if the loop is still going,

    
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

unsigned int hcf(unsigned int x, unsigned int y);

int main(int argc, char *argv[])
{
    unsigned int hcfNo = hcf(12, 18); // That should return 6.
    printf("%d", hcfNo);

    return 0;
}

unsigned int hcf(unsigned int x, unsigned int y)
{
    unsigned int firstValue = 0;
    unsigned int secondValue = 0;
    unsigned int checker = 0;
    unsigned int lastValue = 0;

    // This code is used so that it will never
    // use a number lower (goes from the highest to compare).
    if (x > y) {
        checker = x;
    } else {
        checker = y;
    }

    for (int i = 1; i < checker; i++)
    {
        if (x % i == 0)
        {
            firstValue = i;
        }

        if (y % i == 0)
        {
            secondValue = i;
        }

        if (firstValue == secondValue)
        {
            lastValue = secondValue;
        }
    }
    return lastValue;
}

void function2(void)
{

}

void function3(void)
{

}
