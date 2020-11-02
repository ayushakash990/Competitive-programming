#include <stdio.h>

char s[100000000], *p;

int n;

int main()
{
	scanf("%s\n%d", s, &n);

	for (p = s; *p != '\0'; p++)
	{
		/* Add value of 'decoding key' to every character's ASCII value */
		/* Cap values in individual groups (0-9, A-Z, a-z)              */

		if (*p >= '0' && *p <= '9')
			printf("%c", '0' + (*p + n - '0') % ('9' - '0' + 1));
		else if (*p >= 'A' && *p <= 'Z')
			printf("%c", 'A' + (*p + n - 'A') % ('Z' - 'A' + 1));
		else if (*p >= 'a' && *p <= 'z')
			printf("%c", 'a' + (*p + n - 'a') % ('z' - 'a' + 1));
		else
			printf("%c", *p);
	}

	return 0;
}
