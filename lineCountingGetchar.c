#include <stdio.h>

main()/* Count lines in input */
{
    int c, nl;
    nl = 0;
    
    while (c = (getchar()) !=EOF){
        if(c == '\n')
            ++nl;
        printf("%d\n", nl);
    }
}   

