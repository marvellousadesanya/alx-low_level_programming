#include "main.h"

/**
 * print_most_numbers - Iterates over some numbers
 */

void print_most_numbers(void)
{
	int n;

	n = 0;

	while (n <= 9)
	{
		if (n == 2 && n == 4)
			continue;
		_putchar(n);
		n++;
	}
}
