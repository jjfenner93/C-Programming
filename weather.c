#include <stdio.h> // Include some of the file contents in order to compile.
#include <stdlib.h> // A preprocessor directive.

#define MONTHS 12
#define YEARS 5

int main(int argc, char *argv[])
{
    // The total rainfall for each year,
	// so the total rainfall for 2010 will output first.

    // The average yearly rainfall,
	// the total average from each years total added and divided by 5.

    // The average rainfall for each month,
	// the average rainfall for every Jan from each year.

    // I could define the months and years.
    // First year is at [0] for the row.
	// [0][0] is Jan 2015.
    float rainfalls[YEARS][MONTHS] =
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
    float jan = 0.0;
    float feb = 0.0;
    float mar = 0.0;
    float apr = 0.0;
    float may = 0.0;
    float jun = 0.0;
    float jul = 0.0;
    float aug = 0.0;
    float sep = 0.0;
    float oct = 0.0;
    float nov = 0.0;
    float dec = 0.0;
	int yearCounter = 9;

    printf("YEAR AVG\n");
    for (i = 0; i < YEARS; i++)
    {
		totalRainfall = 0.0;
		printf("20%d ", ++yearCounter);
        for (j = 0; j < MONTHS; j++)
        {
            totalRainfall += rainfalls[i][j];

            // Need to add [0][0], [1][0], [2][0], [3][0] and [4][0]
            // the above would only add Jan naturally.

            // [0][0] Jan, [0][1] - Feb [0][2] - March - the first row.

            // Increment the MONTHS column for every time,
            // you would need about 12 variables.
            // That's the only way I could think to do that right now.
            if (j == 0) {
                jan += rainfalls[i][j];
            }
            if (j == 1) {
                feb += rainfalls[i][j];
            }
            if (j == 2) {
                mar += rainfalls[i][j];
            }
            if (j == 3) {
                apr += rainfalls[i][j];
            }
            if (j == 4) {
                may += rainfalls[i][j];
            }
            if (j == 5) {
                jun += rainfalls[i][j];
            }
            if (j == 6) {
                jul += rainfalls[i][j];
            }
            if (j == 7) {
                aug += rainfalls[i][j];
            }
            if (j == 8) {
                sep += rainfalls[i][j];
            }
            if (j == 9) {
                oct += rainfalls[i][j];
            }
            if (j == 10) {
                nov += rainfalls[i][j];
            }
            if (j == 11) {
                dec += rainfalls[i][j];
            }
        }
		printf("%.1f ", totalRainfall);
		avgYearlyRainfall += totalRainfall;
        printf("\n");
    }

	avgYearlyRainfall = avgYearlyRainfall / YEARS;
    printf("\nThe yearly average is %.1f inches.\n", avgYearlyRainfall);
    printf("\nJan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");
    printf("%.1f %.1f %.1f %.1f %.1f %.1f %.1f %.1f %.1f %.1f %.1f %.1f\n", jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec);

    return 0;
}
