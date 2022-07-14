#include "main.h"

/**
 * reverse_array - Reverses an array
 * @a: The array itself
 * @n: Number of iterations
 */

void reverse_array(int *a, int n)
{
	int i, j;
	int tmpStr;

	for (i = 0; i < n; i++)
	{
		;
	}

	for (j = 0; j < n / 2; j++)
	{
		tmpStr = a[j];
		a[j] = a[n - j - 1];
		a[n - j - 1] = tmpStr;
	}

}
