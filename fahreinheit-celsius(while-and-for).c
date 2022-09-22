#include <stdio.h>

/* print Fahrenheit-Celsius table
for f = 0, 20, ..., 300 */

main()
{
    /*Using a while loop to print out Fahrenheit-Celsius table */
    int lower, upper, step;
    float fahr, celsius;
    lower = 0; /* lower limit of temperature table */
    upper = 300; /*upper limit */
    step = 20; /*step size */
    fahr = lower; 

    while (fahr <= upper){
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%4.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

    printf(" \n");

    /*Using a for loop to print out Fahrenheit-Celsius table */
    int fah;

    for (fah = 0; fah <= 300; fah = fah + 20){
        printf("%4d %6.1f\n", fah, (5.0/9.0)*(fah-32));
    }
}   