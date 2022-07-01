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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		n = n % 10;
		printf("Last digit of %d and is greater than 5\n", n);
	} else if (n == 0)
	{
		printf("Last digit of %d and is 0\n", n);
	} else if (n < 6 && n > 0)
	{
		printf("Last digit of %d and is less than 6 and not 0\n", n);
	}
	return (0);
}
