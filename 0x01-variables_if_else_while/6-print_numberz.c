#include <stdio.h>

/**
 * main -entry point
 *
 * Description: 'Using putchar with int data type'
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
	}
	putchar('\n');

	return (0);
}
