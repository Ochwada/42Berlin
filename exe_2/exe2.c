#include <stdio.h>

/* print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300 */

int main()
{
    int fahr, celsius;/*  integer variables to store Fahrenheit and Celsius values*/
    int lower, upper, step; /* define the range and step size for the temperature conversion.*/

    lower = 0;   /*  is set to 0 (starting temperature in Fahrenheit). */
    upper = 300; /* is set to 300 (ending temperature in Fahrenheit). */
    step = 20;   /* set to 20 (increment). */

    fahr = lower; /* The loop starts with fahr set to lower.*/
    while (fahr <= upper)
    {
        celsius = 5 * (fahr - 32) / 9; /*formular to convert fahr to celsius*/
        printf("%d\t%d\n", fahr, celsius); /* The temperatures are printed using printf("%d\t%d\n", fahr, celsius);, where %d is the format specifier for integers and \t adds a tab space between them*/
        fahr = fahr + step; /* fahr is incremented by step in each iteration.*/
    }
}