/*
    Plan:
    First off use the arg on main to get how many arguments are being used,
    to find out, get that first.

    Next have a prompt for each time and get the input to do the output etc.
    First check if it is being used right the arguments.

    Ok so make sure that the program only takes the number,
    whatever number that is and store it with get_int most likely.
    Then ask for plaintext and await text input.
    Ignore non-alphabetical characters, number and spaces, the program will run,
    anyway.

    Shift the letters forward by whatever number, but I'm guessing if it,
    gets to Z then it needs to go back to A.
    Keep the uppercase or lowercase of the letter.

    Pseudocode:
    char a = 'a';
    printf("%d", a); // That prints 97.
    for (int l = 0; l < strlen(k); l++)
    {
    k[l] = toupper(k[l]);
    }
    Only way to coerce is above with a loop.

    This code recieved a pass.
*/
#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <errno.h>
#include <limits.h>

typedef struct { string name; string number; } person;

// Allows it to be assigned or retrieved or segmentation fault occurs.
int main(int argc, char* argv[])
{

    // Plaintext.
    string p;

    // Checks if ./caesar has been written without parameters.
    if (argc == 1 || argc > 2)
    {
        printf("Usage: ./caesar key\n");

        // There was an error, then end the program.
        return 1;
    }
    else
    {
        // It is needed for runtime or "Segmentation fault" will probably flag up.
        for (int i = 1; i < argc; i++)
        {

            // printf("Argument %d is: %s\n", i, argv[i]);
            errno = 0;

            // Just an empty character to check against.
            char *c;
            string *s = NULL;
            long k = strtol(argv[i], &c, 10);
            for (int j = 1, n = strlen(argv[i]); j < n; j++)
            {
                if (!isdigit(argv[i][j]))
                {
                    printf("Usage: ./caesar key\n");
                    return 1;
                }
            }

            // Need to handle non-numeric key.
            if (c == argv[i])
            {

                // If it is not a number.
                printf("Usage: ./caesar key\n");
            }
            else if ((k == LONG_MIN || k == LONG_MAX) && errno == ERANGE)
            {

                // It is out of range.
                printf("Usage: ./caesar key\n");
            }
            else
            {
                p = get_string("plaintext: ");

                // printf("Argument %d is a number,
                    // and the value is: %ld\n", i, k);
                printf("ciphertext: ");
                for (int j = 0, l = strlen(p); j < l; j++)
                {

                    // The modulus formula removed for now (neccessary?).
                    printf("%c", (int)(p[j] + k));
                }
                printf("\n");
            }
        }
                return 0;
    }
}
