/* Algorithm Analysis */
#include <stdio.h>
#include <stdlib.h>

int gcd(int u, int v);
float absoluteValue(float x);
float squareRoot(float x);

int main()
{
    int result = 0;

    float  f1 = -15.5, f2 = 20.0, f3 = -5.0;
    int    i1 = -716;
    float  absoluteValueResult = 0.0;

    result = gcd(12, 18);
    printf("The gcd of 12 and 18 is %d\n", result);

    result = gcd(1026, 405);
    printf("The gcd of 1026 and 405 is %d\n", result);

    printf("The gcd of 83 and 240 is %d\n\n\n\n", gcd(83, 240));

    /* testing absolute Value Function */
    absoluteValueResult = absoluteValue (f1);
    printf ("result = %.2f\n", absoluteValueResult);
    printf ("f1 = %.2f\n", f1);

    absoluteValueResult = absoluteValue (f2) + absoluteValue (f3);
    printf ("result = %.2f\n", absoluteValueResult);

    absoluteValueResult = absoluteValue ( (float) i1 );
    printf ("result = %.2f\n", absoluteValueResult);

    absoluteValueResult = absoluteValue (i1);
    printf ("result = %.2f\n", absoluteValueResult);

    printf ("%.2f\n\n\n\n", absoluteValue (-6.0) / 4 );

    float i, t, c;
	printf("Enter the number: ");
	scanf("%f", &c);

    // Do not understand this algo fully at all,
    // It must use the index to reduce it somehow,
    // and create the answer. I can't see the false condition.
    // It's like a recursive loop or something. It must do it,
    // quickly like an infinite loop to reduce it to the right answer.
	for (t = c, i = 0; i < 100; i++, t = ((t + (c / t)) / 2));
	printf("Sqrt is %f\n", t);

    printf("%.2f\n", squareRoot(4));
    printf("%.2f\n", squareRoot(12));
    printf("%.2f\n", squareRoot(25.0));
    printf("%.2f\n", squareRoot(9.0));
    printf("%.2f\n", squareRoot(225.0));
    // printf("%.2f\n", squareRoot(3150));

    /* testing square root */

    return 0;
}

int gcd(int u, int v)
{

    // My theory behind this algorithm is that it is like
    // a mental mathematical model of what you would do with the remainder,
    // to slowly decrease it and see what the gcd was for both of them,
    // picking two random numbers will make it so that theres a possibility,
    // that for one of the pair of numbers only 1 was its gcd.
    // (two random odd numbers maybe).
    // otherwise e.g. arguments: 12 and 18 would be 6.
    // Compared to my algorithm this one is designed so that it will,
    // use whatever numbers from the remainder rather than checking,
    // each count from 1 with a loop. Therefore this algo is faster.
    int temp;

    // If the second argument is 0 it will just return the first and exit.
    while( v != 0)
    {

        // The remainder of the two numbers (v into u) will go into temp.
        // Then the variables will change around a lot.
        // It will keep checking the modulus and slowly,
        // decreasing the 2nd argument until it eventually reaches 0.
        temp = u % v;

        // The second argument will go into the first.
        // This will make them both identical to the 2nd.
        u = v;

        // Then the remainder will go into the second argument.
        // If the 2nd argument was higher, it seems to swap it around.
        // In order to continue decreasing and checking it somehow.
        // So the second argument will eventually be lower than the first.
        // So that it will always be able to check the factors against
        // the remainder or something etc.
        v = temp;
    }

    return u;
}

float squareRoot(float x)
{

    // Represents an empty value/string (epsilon).
    // .00001 used for precision?
    const float epsilon = .00001;
    float guess = 1.0;
    float returnValue = 0.0;

    if (x < 0)
    {
        printf("Negative argument to squareRoot.\n");
        returnValue = -1.0;
    }
    else
    {

        // Once it has guessed it will decrease via divison,
        // until the guess matches and the number subtracted goes to 0,
        // the absolute will make the number positive to fix that.
        // This algorithm got stuck with a large number tho e.g. 3150.
        // could be fixed by using a larger guess by increasing the guess?
        // until x² = y and guess ^ 2 - x will be 0 probably.
        while (absoluteValue (guess * guess - x) >= epsilon)
           guess = (x / guess + guess) / 2.0;

        returnValue = guess;
    }

    // only one return.
    return returnValue;
}

float absoluteValue(float x)
{

    // Here it coerces the negative to,
    // a positive in one and done.
    if (x < 0)
        x = -x;

    return x;
}
