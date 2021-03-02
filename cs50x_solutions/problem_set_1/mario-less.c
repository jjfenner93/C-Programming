#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    do
    {

        // It will run at least once and check the condition.
        n = get_int("Height: ");
    }

    // If it is less than 1 or
    // more than 8 it will continue to ask for an input
    // that is between 1 and 8 until false then the next
    // line of code below will execute and take the number,
    // assigning it as the variable for the height.
    while (n < 1 || n > 8);

    for (int i = 0; i < n; i++)
    {

        // It will take the number minus one and assign to b.
        // It will then count down from it in order to have no gaps.
        for (int b = n - 1; b > i; b--) 
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }
        printf("#\n");
    }
}
