#include <stdio.h>

/* print Fahrenheit-Celsius table
for f = 0, 20, ..., 300 */

float FahrToCels(float fahr);

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
        celsius = FahrToCels(fahr);
        printf("%4.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    printf(" \n");
    

    
    
    /*Using a for loop to print out Fahrenheit-Celsius table */
    /*
    int fah;

    for (fah = lower; fah <= upper; fah = fah + step){
        printf("%4d %6.1f\n", fah, (5.0/9.0)*(fah-32));
    }
    */
   return 0;
}   

float FahrToCels(float fahr){
    
    float celsius;
    celsius = (5.0/9.0) * (fahr-32.0);
    return celsius;
}