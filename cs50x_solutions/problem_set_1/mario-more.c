#include <cs50.h>
#include <stdio.h>

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
