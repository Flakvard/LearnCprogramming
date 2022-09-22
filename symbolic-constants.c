#include <stdio.h>

#define LOWER 0 /* lower limit of temperature table */
#define UPPER 300 /*upper limit */
#define STEP 20 /*step size */ 

/*Using Symbolic Contants (Global variables?)*/

main()/* print Fahrenheit-Celsius table*/
{
    /*Using a for loop to print out Fahrenheit-Celsius table */
    int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP){
        printf("%4d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }
}   