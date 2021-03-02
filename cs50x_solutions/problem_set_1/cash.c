#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float f;

    do
    {
        f = get_float("Change owed: ");
    }
    while (f < 0);

    // Take the float number for the next part.
    // 1cents, 5cents, 10cents, 25cents.
    int quarters = 0;
    int dimes = 0;
    int nickels = 0;
    int pennies = 0;
    int coins = round(f * 100);

    // How many times does the number go into 25 for quarters.
    int i = 0;
    int x;
    int x2;
    int x3;

    while (i < coins)
    {
        i++;

        // While we can use quarters, add a quarter.
        if (i % 25 == 0)
        {
            quarters += 1;
        }
    }

    // Use the modulus on the i from the last loop to check,
    // in the next loop, and so on.
    x = i % 25;
    int i2 = 0;
    while (i2 < x)
    {
        i2++;

        // While we can use dimes, add a dime.
        if (i2 % 10 == 0)
        {
            dimes += 1;
        }
    }

    x2 = i2 % 10;
    int i3 = 0;
    while (i3 < x2)
    {
        i3++;

        // While we can use nickels, add a nickel.
        if (i3 % 5 == 0)
        {
            nickels += 1;
        }
    }
    x3 = i3 % 5;
    int i4 = 0;
    while (i4 < x3)
    {
        i4++;

        // While we can use pennies, add a penny.
        if (i4 % 1 == 0)
        {
            pennies += 1;
        }
    }

    int total = quarters + dimes + nickels + pennies;

    // Total optimal coins.
    printf("%d\n", total);
}
