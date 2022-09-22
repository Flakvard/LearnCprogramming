#include <stdio.h>

main()/* Copy input to output; 1st version */
{
    int c;
    c = getchar();

    while (c!=EOF){
        putchar(c);
        c = getchar();
    }
}

main() /*Copy input to output; 2st version*/
{
    int c;

    while ((c = getchar()) !=EOF){
        putchar(c);
        c = getchar();
    }
}   