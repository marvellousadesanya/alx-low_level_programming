#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Printing numbers
 *
 * Return: Always 0 (SUCCESS)
 */

int main(void)
{
	int n;

	n = 0;

	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	putchar('\n');

	return (0);
}
