#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

enum boolean { NO, YES };
enum days { mon, tues, weds, thurs, fri, sat, sun};

void draw(int h);

int main(int argc, char *argv[])
{
    /*
    // Get height of pyramid
    int height = get_int("Height: ");

    // Draw pyramid
    draw(height);

    for (int i = 2; ; i *= 2) // That is like 2^3 cubed.
    {
        if (cbrt(i) == 2) return 1; // It will stop if the cube root of i is 2.
        printf("%i\n", i);
        sleep(1);
    }
*/
    const float Pi = 3.14159265359;
    int a = 10;
    int b = 20;
    int c = a * b;
    enum boolean flag = YES;
    enum days anotherday = fri;
    char newline = '\n';
    int num = 10, num2 = 20;
    int d;

    //Pi is made to be a constant.
    printf("Pi is %f\n", Pi);

    //Calculates two numbers.
    d = num * num2;
    printf("num and num2 equals: %d\n", d);

    d = num + num2;
    printf("num and num2 equals now: %d\n", d);

    //Checks if num is less than or equal to num2.
    if(num <= num2) {

        printf("Yes it is.\n");
    }
    else
    {
        printf("No it is not.\n");
    }

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    int t;
    char choice;
    //Will repeat the input of a passcode until you type 'N'.
    do
    {
    fflush(stdin);
    printf("Enter the passcode: ");
    scanf("%d", &t);
    switch(t)
    {
        case 1234:
        printf("Welcome student!\n\n");
        break;

        case 5678:
        printf("Welcome professor!\n\n");
        break;

        default:
        printf("Incorrect passcode. \n\n");
        break;
    }
    fflush(stdin);
    printf("\n\nTry again? Y / N \n");
    scanf("%c", &choice);
} while(choice == 'y' || choice == 'Y');

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    int randomNumber;
    //Will only print multiples of 5 counting up to 100. (currently)
    for(randomNumber = 10; randomNumber < 100; randomNumber++) {
        if(randomNumber % 5 == 0) {
        printf("%d \n", randomNumber);
        }
    }

    printf("%d, %d, %d, %d, %d\n", a, b, flag, c, anotherday);
    printf("Testing, %c", newline);
    printf("Another line from there.\n");

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    //String. (In an array it seems)
    char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0' };
    printf("Greeting message: %s\n", greeting);
    //return 0;
}

void draw(int h)
{
    // If nothing to draw
    if (h == 0)
    {
        return;
    }

    // Draw pyramid of height h – 1
    draw(h - 1);

    // Draw one more row of width h
    for (int i = 0; i < h; i++)
    {
        printf("#");
    }
    printf("\n");
}
