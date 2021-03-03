/*
    This code recieved a pass.
*/
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(void)
{
    string s;

    do
    {
        s = get_string("Text: ");
    }

    // While it is true that it is null here it will,
    // continue to ask for the text till false.
    while (*s == '\0');

    // Initialize all the variables here.
    int counter = 0;
    int letters = 0;
    int words = 0;
    int sentences = 0;

    // It will use the input from above for the next statement,
    // and loop through the string array.
    // Iterate over the string and for every space add to the word counter.
    for (int i = 0, n = strlen(s); i < n; i++)
    {

        // If theres a space it will add that to the words count.
        if (s[i] == ' ')
        {
            words++;
        }

        // If not it will be a letter.
        else
        {
            letters++;
        }

        // This entire statement will check if there is a punctuation,
        // and remove it from the letters count.
        if (s[i] == ',' || s[i] == '.' || s[i] == ';' || s[i] == '-' || s[i] == '\'' || s[i] == '\"' || s[i] == ':'
            || s[i] == '?')
        {
            letters--;
        }

        // It will add to sentences if it sees these characters.
        if (s[i] == '.' || s[i] == '!' || s[i] == '?')
        {

            // Increment by 1 (syntatic sugar example here).
            sentences++;
        }
    }

    // Adds 1 more number to words to compensate.
    int words1 = words + 1;

    // Calculate L and S.
    // Do floating point division for accuracy.
    float index = 0.0588 * (100.0 * letters / words1)
        - 0.296 * (100.0 * sentences / words1) - 15.8;

    // Round the number here.
    int index2 = round(index);

    // Check if the index is less than 1.
    if (index2 < 1)
    {

        // And get this output.
        printf("Before Grade 1\n");
    }

    // Check if this index is more than or equal to 16 to get the next output.
    else if (index2 >= 16)
    {
        printf("Grade 16+\n");
    }

    // If both are false above it will execute the below code.
    else
    {
        printf("Grade %d\n", index2);
    }

    // Where L is the average number of letters per 100 words in the text,
    // and S is the average number of sentences per 100 words in the text.

    // printf("%d letter(s)\n", letters);
    // printf("%d word(s)\n", words1);
    // printf("%d sentence(s)\n", sentences);
}
