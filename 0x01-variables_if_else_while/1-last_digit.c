#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main- Entry point
 *
 * Description: 'Prints last digit and prints if it greater than 5 or not'
 *
 * Return: (0) Always
 *
 */

int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	m = n % 10;
	if (m > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, m);
	} else if (m == 0)
	{
		printf("Last digit of %d and is 0", n);
	} else if (m < 6 && m != 0)
	{
		printf("Last digit of %d and is less than 6 and not 0", n);
	}
	printf("\n");
	return (0);
}
