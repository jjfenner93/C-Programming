#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <errno.h>
#include <limits.h>

typedef struct { string name; string number; } person;

int main(int argc, char* argv[]) // Allows it to be assigned or retrieved.
// (Possible reason I was getting segmentation fault?)
{
    string p; // Plaintext.
    if (argc == 1 || argc > 2) // Checks if ./caesar has been written without parameters.
    {
        printf("Usage: ./caesar key\n");
        return 1; // There was an error then end program.
    }
    else
    {
        for (int i = 1; i < argc; i++) // It is needed for runtime or "Segmentation fault" will probably flag up.
        {
            //printf("Argument %d is: %s\n", i, argv[i]);
            errno = 0;
            char *c; // Just an empty character to check against.
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
            if (c == argv[i]) // Need to handle non-numeric key.
            {
                printf("Usage: ./caesar key\n"); // If it is not a number.
            }
            else if ((k == LONG_MIN || k == LONG_MAX) && errno == ERANGE)
            {
                 printf("Usage: ./caesar key\n"); // It is out of range.
            }
            else
            {
                p = get_string("plaintext: ");
                //printf("Argument %d is a number, and the value is: %ld\n", i, k);
                printf("ciphertext: ");
                for (int j = 0, l = strlen(p); j < l; j++)
                {
                    printf("%c", (int)(p[j] + k)); // The modulus formula removed for now (neccessary?).
                }
                printf("\n");
            }
        }
                return 0;
    }
}


                // char a = 'a';
                // printf("%d", a); // That prints 97.

                // for (int l = 0; l < strlen(k); l++)
                // {
                    //k[l] = toupper(k[l]);
                // }
                // Only way to coerce is above with a loop.