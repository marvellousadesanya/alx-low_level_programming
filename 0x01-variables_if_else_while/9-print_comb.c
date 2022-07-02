#include <stdio.h>

/**
 * main -Main entry
 *
 * Description: 'Separating iterations by comma'
 *
 * Return: Always 0 (SUCCESS)
 */

int main(void)
{
	int n;

	n = 0;

	while (n < 10)
	{
		putchar(n + '0');
		n++;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}

