#include <stdio.h> // Include some of the file contents in order to compile.
#include <stdlib.h>
#include <cs50.h> // A preprocessor directive.
#include <stdbool.h> // To use the standard bool type.

#include <string.h>
#include <math.h>
#include <ctype.h>
#include <errno.h>
#include <limits.h>
#include <time.h> // For time.

#define MONTHS 12

int main(int argc, char *argv[]) // Pointing to memory with the argv[]
{
    /*
    printf("Hi, my name is Josh.\n"); // First program and prints out this message.
    char str[100]; // An array.
    int i; // Integer i.

    printf("Enter a value: "); // Enter a value here.

    scanf("%d %s", &i, str); // Preceed the variable name by ampersand (&).

    printf("\nYou entered: %d:::::::%s\n", i, str); // If used to read a string: don't use an &.

    double x; // Declare the variable of double type with the name 'x'.

    scanf("%lf", &x); // Reading a integer, storing it in an 'i' using an ampersand.
    // %lf for double.

    int b = 21; // Initialisation.

    b = 8; // You can change it later in the program.

    float josh = 23.5; // Declare a float.

    _Bool boolVariable = 1; // 1 is true.

    // C89 means you have to use _Bool,
    // Allows usage of bool with the header file above now:

    bool bool2 = false;

    // More specified versions of ints and doubles e.g. shortint.

    unsigned int joshua = 89; // Declared for positive values only.

    enum primaryColor { red, yellow, blue }; // Can only hold those values (variable list).

    enum direction { up, down, left = 10, right }; // right will be equal to 11. Explicity assign values.

    enum gender { male, female }; // Declaring the data type enum (enumeration) and assign values.

    // With it being 0 and 1 as the index above.

    enum gender myGender; // Defines the variable to be of type gender.

    myGender = female; // Assign myGender as just female. Can't assign a string because its not the right type
    // only male or female.

    printf("%d", myGender); // Returns 1.

    enum gender anotherGender = female; // anotherGender will be of type gender and assigned female.

    bool isMale = (myGender == anotherGender); // Boolean comparison, this will return true;

    char myCharacter = '\n'; // Can assign backslash n (newline) to char.

    printf("%c", myCharacter); // Print it off.

    int integerVar = 10;
    float floatingVar = 102.20;
    double doubleVar = 10.5e+11;
    char charVar = 'A';
    bool boolVar = 1;

    printf("integerVar = %i\n", integerVar);
    printf("floatingVar = %f\n", floatingVar);
    printf("floatingVar = %3.f\n", floatingVar); // To three decimal points.
    printf("doubleVar = %e\n", doubleVar);
    printf("doubleVar = %g\n", doubleVar);
    printf("charVar = %c\n", charVar);
    printf("boolVar = %i\n", boolVar);

    float x2 = 3.99993299339;

    printf("%.5f\n", x2); // Prints out to the decimal place (5 decimal place values).

    int numberOfArguments = argc;

    char *argument1 = argv[0];
    char *argument2 = argv[1];

    printf("Number of arguments: %d", numberOfArguments);
    printf("Argument 1 is the program name: %s", argument1);
    printf("Argument 2 is the command line argument: %s", argument2);
    */
    /*
    double width;
    double height;
    double perimeter = 0.0;
    double area = 0.0;

    printf("Enter the width and height of your rectangle: "); // Ask here first with printf.
    scanf("%lf %lf", &width, &height); // scanf waits for input here (even if you only entered one).

    perimeter = (width + height) * 2.0; // Declares a variable that does the perimeter formula.
    area = width * height; // Declares a variable that does the area formula.

    printf("The perimeter is: %.3lf and the area is: %.3lf.\n", perimeter, area);
    // %0.lf removes the decimal places, and it will output the variables as whole numbers with printf.
    */
    // Corrected slightly by declaring the variable with 0.0 first and then assigning later.
    // Added parenthesis around width and height on perimeter variable.
    // Command line arguments: convert the argv[0] etc to a double using atoi - not to use this for now.
    /*
    enum Company { Searchability, ITECCO, Google, Sourcific, Microsoft, SoCode };

    enum Company searchability = Searchability;
    enum Company itecco = ITECCO;
    enum Company sourcific = Sourcific;

    printf("%d\n", searchability);
    printf("%d\n", itecco);
    printf("%d\n", sourcific);
    */
    // 3-4; // expression result unused.
    /*
    int d = 10;
    printf("c is %d\n", d--); // Doesn't decrement this way.

    _Bool a = true;
    _Bool b = true;
    _Bool result;

    result = a && b; // Assign into result to get the number 1 which means true.
    printf("%d\n", result);
    */
    /*
    unsigned int a = 60; //  0000 0000 0000 0000 0000 0000 0011 1100
    unsigned int b = 120; // 0000 0000 0000 0000 0000 0000 0111 1000 - 60 bit shifted left by 1 it's now: 120.

    unsigned int c = a << 1;
    unsigned int d = a & b;
    unsigned int e = a | b;
    unsigned int f = a ^ b;
    unsigned int g = ~a;

    printf("%d\n", c); // Bit shifted left by 1 is now 120.

    printf("%d\n", d); // AND operator copies a bit to the result if it exists in both operands.
    // d: 0000 0000 0000 0000 0000 0000 0011 1000 I have correctly done the binary to 56.

    printf("%d\n", e); // OR operator copies a bit if it exists in either operand.
    // e: 0000 0000 0000 0000 0000 0000 0111 1100 I have correctly done the binary to 124.

    printf("%d\n", f); // XOR operator copies the bit if it is set in one operand but not both.
    // f: 0000 0000 0000 0000 0000 0000 0100 0100 I have correctly done the binary to 68.

    printf("%d\n", g); // Complement operator and has the effect of flipping bits (unary).
    // g: 0000 0000 0000 0000 0000 0000 1100 0011
    */
    // Create a program that converts number of minutes to days and years.
    // The program should ask the user to enter the number of minutes via the terminal.
    // The program should display as output the minutes and then its equivalent in years and days.

    // days: divide the time value by 1440.
    // years: divide the time value by 525600.
    /*
    double minutes;
    double days;
    double years;

    printf("Enter minutes: ");
    scanf("%lg", &minutes);

    days = minutes / 1440;
    years = minutes / 525600;

    printf("Minutes: %lg\n", minutes);
    printf("Days: %lg\n", days);
    printf("Years: %lg\n", years);
    */
    // Create a program that displays the byte size of basic data types in C.
    // Varies depending on the system you are running.
    // Print the output of the size of each data type below.
    /*
    printf("Size of int: %zd byte/s\n", sizeof(int)); // sizeof operator.
    printf("Size of char: %zd byte/s\n", sizeof(char));
    printf("Size of long: %zd byte/s\n", sizeof(long));
    printf("Size of long long: %zd byte/s\n", sizeof(long long));
    printf("Size of float: %zd byte/s\n", sizeof(float));
    printf("Size of double: %zd byte/s\n", sizeof(double));
    printf("Size of long double: %zd byte/s\n", sizeof(long double));
    */
    /*
    short int score = 90;

    if (score < 85) printf("Jackpot!"); // Simple statement if, no brackets.

    if (score < 95) // Compound statement if, brackets.
    {
        score++;
        printf("You win!\n");
    }
    */
    // goto jumps to any line of code, you should never need to use it.

    // Basic pay rate = $12.00/hr.
    // Overtime (in excess of 40 hours) = time and a half.
    // Tax rate:
    // 15% off the first $300.
    // 20% off the next $150.
    // 25% off the rest.
    // Utilise if/else statements.
    // Add so that if it goes overtime in excess of 40 hours.
    // Detect whether it has gone over $300, and take 15% off, detect if it has gone up by $150 and take 20%,
    // Add on the current time and then half it so assign with += operator maybe.


    // Pseudocode:
    // if


    // if it is
    // more than $300 then
    // take 15% off.

    // if it is
    // $450 or less than or equal to then
    // take off 20%

    // if it is
    // $450 or more then
    // take 25% off the rest.
    /*
    const float payRate = 12.00;
    double overTimePay = 0.0;
    double hours = 0.0;
    double total = 0.0;
    double firstTax = 0.0; // 15% off.
    double secondTax = 0.0; // 20% off.
    double thirdTax = 0.0; // 25% off.

    //printf("%0.2f\n", payRate); // Prints off properly there.
    printf("Number of hours worked in a week: "); // First ask for your hours from the week.
    scanf("%lf", &hours); // Wait for input (hours).
    if (hours <= 40) // If the hours are less than 40 execute the following code first.
    {
        total = hours * payRate; // Do the calculation for gross pay.
        if (total <= 300)
        {
            // No tax here.
            printf("Gross Pay: $%2.f\n", total); // Display the gross pay.
            printf("Net Pay: $%lg\n", total); // This is the total with all the deductions (taxes).
        }
        else if (total > 300 && total < 450) // Now to do the taxes, if it is more than $300 execute the following code:
        {
            firstTax = 0.15 * total; // This here is doing the first deduction.
            printf("Gross Pay: $%2.f\n", total); // Display the gross pay.
            total -= firstTax; // This is putting the first deduction and taking away from the gross (to net).
            printf("Taxes 15%% off: $%0.2f\n", firstTax); // Display the first deduction.
            printf("Net Pay: $%0.2f\n", total); // This is the total with all the deductions (taxes).
        }
        else if (total == 450) // Do the next $150 so if it is $450 then execute the following code:
        {
            secondTax = 0.20 * total; // Do the second deduction for the next $150 here.
            printf("Gross Pay: $%2.f\n", total); // Display the gross pay.
            total -= secondTax; // Take it off the current tax (as a whole, the last tax taken off too).
            printf("Taxes 20%% off: $%0.2f\n", secondTax); // Display the next tax.
            printf("Net Pay: $%lg\n", total); // This is the total with all the deductions (taxes).
        }
        else if (total > 450) // Now to do the rest (25% off).
        {
            thirdTax = 0.25 * total; // 25% off here.
            printf("Gross Pay: $%2.f\n", total); // Display the gross pay.
            total -= thirdTax; // Deduct from total once again to get the final tax.
            printf("Taxes 25%% off: $%0.2f\n", thirdTax); // Display the final tax.
            printf("Net Pay: $%lg\n", total); // This is the total with all the deductions (taxes).
        }
    }
    else
    {
        total = 40 * payRate; // Do the calculation for overtime (standard payrate for 40 hours).
        overTimePay = (hours - 40) * (payRate * 1.5);
        total += overTimePay;
        if (total <= 300)
        {
            // No tax here.
            printf("Gross Pay: $%2.f\n", total); // Display the gross pay.
            printf("Net Pay: $%lg\n", total); // This is the total with all the deductions (taxes).
        }
        else if (total > 300 && total < 450) // Now to do the taxes, if it is more than $300 execute the following code:
        {
            firstTax = 0.15 * total; // This here is doing the first deduction.
            printf("Gross Pay: $%2.f\n", total); // Display the gross pay.
            total -= firstTax; // This is putting the first deduction and taking away from the gross (to net).
            printf("Taxes 15%% off: $%0.2f\n", firstTax); // Display the first deduction.
            printf("Net Pay: $%0.2f\n", total); // This is the total with all the deductions (taxes).
        }
        else if (total == 450) // Do the next $150 so if it is $450 then execute the following code:
        {
            secondTax = 0.20 * total; // Do the second deduction for the next $150 here.
            printf("Gross Pay: $%2.f\n", total); // Display the gross pay.
            total -= secondTax; // Take it off the current tax (as a whole, the last tax taken off too).
            printf("Taxes 20%% off: $%0.2f\n", secondTax); // Display the next tax.
            printf("Net Pay: $%lg\n", total); // This is the total with all the deductions (taxes).
        }
        else if (total > 450) // Now to do the rest (25% off).
        {
            thirdTax = 0.25 * total; // 25% off here.
            printf("Gross Pay: $%2.f\n", total); // Display the gross pay.
            total -= thirdTax; // Deduct from total once again to get the final tax.
            printf("Taxes 25%% off: $%0.2f\n", thirdTax); // Display the final tax.
            printf("Net Pay: $%lg\n", total); // This is the total with all the deductions (taxes).
        }
    }
    */
    /*
    for (int i = 1, j = 2; i <= 5; ++i, j += 2)
    {
        printf("%5d", i * j);
    }
    printf("\n");
    
    // Counter controlled.
    int number = 4;
    do
    {
        printf("\nNumber = %d", number);
        number++;
    } while (number < 4);
    */
    // Stay away from do while loops generally...?
    /*
    enum Day { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };
    
    for (enum Day day = Monday; day <= Sunday; ++day)
    {
        if (day == Wednesday)
           continue;

        printf("It's not Wednesday!\n"); // It will print this for all the days that aren't Wed.
        // Do something here.
    }
    */

    // For Loops - Challenge:
    // Your program will generate a random number from 0 to 20.
    // You will then ask the user to guess it,
    // User should only be able to enter numbers from 0-20.
    // The program will indicate to the user if each guess is too high or too low.
    // The player wins the game if they can guess the number within five tries.
    // Include two directives at the top.
    // Create a time variable.
    // Initialise the random number generator
    // srand((unsigned) time(&t));
    // Get the random number (0-20) and store in an int variable.
    // int randomNumber = rand() % 21;
    /*
    time_t t; // This is the pointer to an object of type time_t, where the seconds (time) value will be stored.
    srand((unsigned) time(&t)); // This is the random number generator.
    // Uses current time as seed for random generator.
    // If no seed value is provided, the rand() function is automatically seeded with a value of 1.
    int randomNumber = rand() % 21; // This will get a number between 0 and 20.
    unsigned int number;
    unsigned int count = 4;

    printf("Guess a number between 0 and 20: ");
    // Write out a loop that will terminate after it has won.
    // and after 5 times it will terminate indefinetely.
    // decrement the counter and when it reaches 0 stop the program.
    // Just use a decrement somehow, maybe a loop not needed...?
    // Keep asking for the number and decrease the count for every wrong guess.

    do
    {
        scanf("%i", &number);
        if (count == 0)
        {
            printf("Game over.\n");
            return 1;
        } else if (randomNumber > number)
        {
            printf("The number is higher than that.\n");
        } else if (randomNumber < number)
        {
            printf("The number is lower than that.\n");
        }
        if (number == randomNumber)
        {
            printf("Correct answer is %i!\n", randomNumber);
            return 0;
        }
        printf("%i tr%s left.\n", count, count == 1 ? "y" : "ies");
        // Added the ternary operator for grammar.
        --count;
    } while (number != randomNumber);
    */
    // Here I learnt that from the above code I was trying to get it working,
    // with that condition in an if statement, I then saw that it could work if
    // I put it in a do while loop it asking once for a number, the first input being
    // the 5th try.
    // Optimised the code above here.
    /*
    printf("Quantity\tCost\tTotal\n");
    printf("%d\t\t$%.2f\t$%.2f\n", 3, 9.99, 29.97);
    printf("Too many spaces     \a\b\b\b\b can be fixed with the ");
    printf("\\%c Escape character\n", 'b');
    printf("\n\a\n\a\n\a\n\aSkip a few lines, and beep ");
    printf("a few beeps.\n\n\n");
    printf("%s %c.", "You are kicking butt learning", 'C');
    printf("You just finished chapter %d.\n You have finished ", 4);
    printf("%.1f%c of the book.\a\n", 12.500, '%');
    */
    /*
    int a = (4 < 10);
    printf("%d\n", a); // Prints 1 (true).
    */

    float sample_data[500] = { 100.0, 300.0, 500.5 };

    // gcc with C99
    int days[MONTHS] = { 31, 28, 45 };
    int index;

    for (index = 0; index < MONTHS; index++)
        printf("Month %d has %2d days.\n", index + 1, days[index]);

    int array_values[10] = { 0, 1, 4, 9, 16 };
    int i;

    for (i = 5; i < 10; ++i)
    array_values[i] = i * i;

    for (i = 0; i < 10; ++i)
    printf("array_values[%i] = %i\n", i, array_values[i]);

    //int matrix[4][3] = { [0][0] = 1, [1][1] = 5, [2][2] = 9 };

    

    //endprocedure
    return 0;
}
