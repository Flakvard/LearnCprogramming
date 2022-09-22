#include <stdio.h>

main()/* Count characters in input */
{
    long nc; /* much more characters than int*/
    nc = 0;
    
    while (getchar() !=EOF){
        ++nc;
        printf("%ld\n", nc);
    }
}   


main()/* Count characters in input */
{
    double nc;
    
    
    for (nc = 0; getchar() !=EOF; ++nc);
    printf("%ld\n", nc);
}   
