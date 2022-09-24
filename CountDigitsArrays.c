#include <stdio.h>

int main()
{
    /* code will count digits, white space, others */

    int c, i, j, nwhite, nother;
    int ndigit[10]; /* Defines the arrey to only up to 10 keys/subscripts */

    nwhite = nother = 0;
    for (i = 0; i < 10; ++i)
        ndigit[i] = 0; 
        /*Assigns all the key values to int 0 and key[i] is also a int.
        ndigit[0] = 0
        ndigit[1] = 0
        ...
        ndigit[9] = 0*/

    while ((c = getchar()) != EOF)
        if (c >= '0' && c <= '9')
            ++ndigit[c-'0']; 
            /*If c is a number 0-9 than take that number f.ex. '8' and add +1 to the ndigit[8] = 0+1 
            '8' is first a string and '0' is also string,
            but because we have a '-' or minus they turn into an integer,
            which can be placed into ndigit[i] and thereby add +1 to 0 */
        else if (c == ' ' || c == '\n' || c == '\t')
            ++nwhite;
        else 
            ++nother;
        
    printf("digits:\n");
    for (i = 0; i < 10; ++i){
        printf("%d %d: ", i, ndigit[i]);
        for (j = 0; j < ndigit[i]; ++j){
            printf("|");
        }
        printf("\n");
    }
        

    printf("white space = %d: ",
    nwhite);
    for (i = 0; i < nwhite; ++i)
        printf("|");
    printf("\n");
    printf("other = %d: ", nother);
    for (i = 0; i < nother; ++i)
        printf("|");
    printf("\n");

}
