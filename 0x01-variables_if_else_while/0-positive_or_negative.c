#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: A program that prints an if else
 * statement for my C file.
 * arg1: Program is supposed to receive and argument and print
 * if it is true. If true, print 'n is positive'
 *
 * arg2: If false, return 'n is negative'
 *
 * Return: Always 0 (SUCCESS)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive", n);
	} else if (n == 0)
	{
		printf("%d is zero", n);
	} else
	{
		printf("%d is negative", n);
	};
	return (0);
}
