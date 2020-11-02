#include <stdio.h>
#include <string.h>

int t, n, i, *top;
int values[100000], frequencies[100001], stack[100000], results[100000];

int main()
{
	scanf("%d", &t);

	while (t--)
	{
		scanf("%d", &n);

		// Reset the important arrays

		memset(frequencies, 0, sizeof(frequencies));
		memset(results, -1, sizeof(results));

		// Read the value array and populate the frequencies array

		for (i = 0; i < n; i++)
		{
			scanf("%d", &values[i]);

			frequencies[values[i]]++;
		}

		// Reset the top of the stack to the beggining of the array

		top = stack;

		for (i = 0; i < n; i++)
		{
			// If stack is not empty cycle through frequencies with the index
			// of the top of the stack element until it's not less than
			// frequency of the element with the current index

			while (top != stack &&
			       frequencies[values[*top]] < frequencies[values[i]])
			{
				// Set result with the index of the top stack element to
				// the current index and pop the top stack element

				results[*(top--)] = i;
			}

			// Push the current index to the top of the stack

			*(++top) = i;
		}

		// Output the results

		for (i = 0; i < n; i++)
		{
			printf("%d ", (results[i] == -1) ? -1 : values[results[i]]);
		}

		printf("\n");
	}

	return 0;
}
