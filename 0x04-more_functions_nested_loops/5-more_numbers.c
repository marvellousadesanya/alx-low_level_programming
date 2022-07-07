#include "main.h"

/**
 * more_numbers - Nested loops to print series of numbers 10 times
 */

void more_numbers(void)
{

	int n, m;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 14; m++)
		{
			if (m >= 0)
			_putchar('1');
			_putchar(m % 10 + '0');
		}
			_putchar('\n');
	}
}
