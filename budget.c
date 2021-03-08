/*
    Plan:
    Only so the number input is a float.
    Add an exit condition and display the final total that run.
    This program is so that you can input how much money you have,
    and you can calculate how many things you can buy.
    Its purpose is to plan ahead your purchases,
    with whatever money you have.
    (maybe plan out everything you want that year, or with your total cash).
    It will show the number of items you can get: e.g. 5 things.
    So that you can skimp on some expensive things.

    Pseudocode:
    Total cash this year/total cash you have.
    totalCash = 330.00, it's a float that would need formatting.
    Display the cash that is subtracted.
    Ask for input each time and show the new total.
    You can reset the cash or subtract the item.
    You can input your total, for now it is a variable.
    If you input too much over the money set it will ask again.
    Several ways to reset it, including the totalCash.

    Issues:
    1. It cannot ask again if you enter an item over,
    the totalCash amount, it will just exit however,
    it will subtract the previous item and display properly.
    It also needs to say "You can purchase 0 items with your cash" instead.
    2. It cannot take a non integer input, it will crash e.g. 'd', glitch
    or infinite loop (it must parse all the ASCII as it shouldn't).
    3. Counts itemNo even if input 0.
    4. Probably more bugs in there. ->
    5. Registers an item for each input that is 0.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    // New feature - the budget and the cash your,
    // 'holding' along side each other.
    // double tempCash = 24.48;

    double totalCash = 482.75;
    double itemAmount = 0.0;
    unsigned int itemNo = 0;

    // Omitted input for totalCash, using fixed value for now.
    // printf("Please enter your budget: ");
    // scanf("%lf", &totalCash);

    printf("Total cash: %.2lf\n", totalCash);

    do
    {
        // Keeps track of how many things/items you will,
        // be able to buy with your totalCash.
        printf("%d item: ", ++itemNo);

        // Exit condition for anything that isn't a number.
        // Could break out of it completely if it didn't detect a number.
        // It breaks if enters any character or anything that isn't a number.
        // Meant to input each individial item, but can use a sum of items.
        scanf("%lf", &itemAmount);

        totalCash -= itemAmount;
        printf("New total: %.2lf\n", totalCash);

        // This code does not work with the do while loop.
        // it'll have to be with a for, or while.
        // Current behaviour: it exits an subtracts the item you tried adding,
        // as it went over your totalCash.

        // It currently exits when you input it over totalCash.
        // This does not work with a do while loop, you
        // can't use 'continue'.
        if (totalCash < 0.0)
        {
            printf("Overdrawn.\n");
            printf("Subtracting previous item.\n");
            --itemNo;
        }

    // Repeats so long the totalCash does not drop below 0.0.
    // Therefore it counts all the things you can buy until,
    // you run out of money or it goes over.
    }  while (totalCash > 0.0);

    // May need another loop here to process at a next stage.

    printf("You can purchase %d ite%s with your cash.\n", itemNo, itemNo > 1 ? "ms" : "m");

    return 0;
}
