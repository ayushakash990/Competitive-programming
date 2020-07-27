#include <stdio.h>
 
int t, n;
 
int main()
{
    scanf("%d\n", &t);
 
    for (; t > 0; t--)
    {
        scanf("%d\n", &n);
 
        /* Calculate the facing seat-number */
 
        n = n + 2 * (6 - (n - 1) % 12) - 1;
 
        printf("%d ", n);
 
        /* Check the type of a seat */
 
        if (n % 6 < 2)
            printf("WS\n");
        else if (n % 6 == 2 || n % 6 == 5)
            printf("MS\n");
        else
            printf("AS\n");
    }
 
    return 0;
}