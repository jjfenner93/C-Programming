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
    1. Roughly - So for hcf/gcd you have to figure out how to check,
    both arguments against each other and if there is a match.
    So perhaps a check to check each time either of the numbers,
    match.
    If a number goes into it without a remainder then
    it should be recorded that it happened but at the same time
    as the other number get the last match.

    Check both numbers to see which is highest too etc.

    x = input("12")
    y = input("18")
    i = 1

    for i <= x
    if x MOD i == 0
    firstValue = i
    endif
    endfor

    for i <= y
    if y MOD i == 0
    secondValue = i
    endif
    endfor

    2. First find how you would find an absolute of an
    number. It is the space between.
    It will turn a negative number into a positive.
    Either turn the number into a positive by adding
    the negative values detection e.g. -5 to 5.
    or something more elaborate.

    How to de neg it:
    might just need a loop.
    could be a mathematical way to
    get the number positive
    you would add 6 but that would go to 0
    You could double it but there would still be a neg sign.
    The num will be less than 0 and therefore a neg,
    then the formula to convert (or remove the neg sign).

    OK so double it, if it is a neg and then,
    subtract to make the neg a positive. Only positives.
    Noticed that it was just a formula no loops needed &
    only the conditional statements.

    num = -6

    if num < 0
    num = (num * 2) - num
    return num
    else
    return num
    endif

    3. Find the formula for square root of a number and
    use the absolute function to check if the no. was negative?
    so 2^2 = 2 * 2 = 4 so it should output 4 but now for sqrt that is
    to output 2 for the sqrt of 4.
    Desired output: 2, Input used: 4.
    utilise absolute fn? (ideally).
    For the sqrt it uses guesswork,
    its a^2 = b then find what b was.

    Study the quadratic formula to design this algo.

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

unsigned int hcf(unsigned int num1, unsigned int num2);
float absolute(float num);
float squarert(float num);

int main(int argc, char *argv[])
{
    unsigned int hcf1 = hcf(12, 18);
    printf("%d\n", hcf1);

    int abs1 = absolute(10);
    printf("%i\n", abs1);

    float abs2 = absolute(-56.765);
    printf("%f\n", abs2);

    int squarert1 = squarert(-25);
    printf("%d", squarert1);

    return 0;
}

unsigned int hcf(unsigned int num1, unsigned int num2)
{
    unsigned int firstValue = 0;
    unsigned int secondValue = 0;
    unsigned int checker = 0;
    unsigned int lastValue = 0;

    // This is used so that it will never,
    // use a number lower (goes from the highest to compare).
    if (num1 > num2) {
        checker = num1;
    } else {
        checker = num2;
    }

    for (int i = 1; i <= checker; i++)
    {
        if (num1 % i == 0)
        {
            firstValue = i;
        }

        if (num2 % i == 0)
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

float absolute(float num)
{
    float positive = 0.0;

    if (num < 0)
    {

        // num = -num; // quicker.
        positive = (num * 2);
        num -= positive;
    }

    return num;
}

float squarert(float num)
{
    float returnValue = 0.0;

    // Somehow detect if the fn gave a neg?
    if (num < 0)
    {
        returnValue = -1.0;
    }
    else
    {
        // Enter here.
    }
}
