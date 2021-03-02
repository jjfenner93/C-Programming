/*
    Plan:
    First thing prompt for input and ask how high you want,
    the pyramid to be.
    Then run a loop doing one thing and a nested loop.
    So the first loop will increment whatever is inside it by the number.
    The second loop inside it will add spaces so there are no gaps.
    The third loop will add hashes on the same line.
    And the first loop that isn't nested will create a new line hash each time.

    Combining all this it will get the right aligned pyramid.

    I will use spaces instead of dots.
*/
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
    while (n < 1 || n > 8);

    for (int i = 0; i < n; i++)
    {
        for (int b = n - 1; b > i; b--)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }
        printf("#"); 
        // Instead of ending it with a new line you continue
        // to print on the same line and add the spaces
        // and reverse the process above by removing the spaces
        // that would usually go with the first nested loop.
        printf("  ");
        printf("#");
        for (int q = 0; q < i; q++)
        {
            printf("#");
        }
        printf("\n");
    }
}
