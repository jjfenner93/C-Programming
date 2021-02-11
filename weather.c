/*
    Plan:
    1. The total rainfall for each year,
	e.g. the total rainfall for 2010 will output first.

    2. The average yearly rainfall,
	the total average from each years total added and divided by the
    total number of YEARS.

    3. The average rainfall for each month,
	e.g. the average rainfall for every Jan from each year (2010 - 2014).
*/
#include <stdio.h>
#include <stdlib.h>

#define MONTHS 12
#define YEARS 5

int main(int argc, char *argv[])
{
    // The rainfall is an example of data.
    float rainfall[YEARS][MONTHS] =
    {
        { 4.3, 4.3, 4.3, 4.4, 3.3, 5.5, 3.3, 5.5, 5.5, 3.3, 1.1, 6.6 },
        { 3.3, 2.2, 1.1, 4.4, 7.7, 4.6, 3.8, 5.7, 3.5, 2.6, 1.6, 5.5 },
        { 5.5, 6.7, 8.3, 2.2, 2.5, 2.8, 5.9, 4.3, 2.2, 4.2, 1.5, 4.3 },
        { 3.3, 1.1, 6.7, 3.3, 5.5, 7.7, 8.8, 1.2, 1.8, 3.6, 3.8, 6.7 },
        { 5.5, 3.3, 5.6, 2.3, 5.4, 8.6, 3.5, 1.7, 7.4, 5.6, 8.8, 9.9 }
    };
    int i, j = 0;
    float totalRainfall = 0.0;
    float avgYearlyRainfall = 0.0;
	int yearCounter = 9;

    printf("\nThis is to show rainfall (in inches):\n");
    printf("\nThe total rainfall for each year:\n");

    for (i = 0; i < YEARS; i++)
    {
		totalRainfall = 0.0;
		printf("20%d | ", ++yearCounter);

        for (j = 0; j < MONTHS; j++)
            totalRainfall += rainfall[i][j];

		printf("%.1f ", totalRainfall);
		avgYearlyRainfall += totalRainfall;
        printf("\n");
    }

    printf("\nThe average from every year is %.1f inches.\n", avgYearlyRainfall / YEARS);
    totalRainfall = 0.0;

    // Added this code, I only just figured to switch them to,
    // go through each column and look at that specific row.
    // Thanks to Jason Fedin.
    printf("\nAverages of rainfall for each month over 5 years (2010 - 2014):\n");
    printf("Jan  | Feb  | Mar   | Apr   | May   | Jun   | Jul   | Aug   | Sep   | Oct   | Nov   | Dec   |\n");

    for (i = 0; i < MONTHS; i++)
    {

        for (j = 0; j < YEARS; j++)
            totalRainfall += rainfall[j][i];

        printf("%.1f  | ", totalRainfall / YEARS);
    }

    return 0;
}
