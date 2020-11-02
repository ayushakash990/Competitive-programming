#include <stdio.h>

char s[100], *p;

int main()
{
    scanf("%s", s);

    for (p = s; *p != '\0'; p++)
    {
    	/* Traverse through every char in a string and subtract
    	   appropriate ASCII value to change capitalisation.    */

        *p += (*p < 'a') ? 'a' - 'A' : 'A' - 'a';
    }

    printf("%s", s);

    return 0;
}
