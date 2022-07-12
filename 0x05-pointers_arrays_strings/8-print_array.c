#include "main.h"

/**
 * print_array - Prints an array
 * @a: Checks for int a
 * @n: Checks for int n
 */

void print_array(int *a, int n)
{
	int n;

	int i;

	for (i = 0; i < n; i++)
	{

		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
