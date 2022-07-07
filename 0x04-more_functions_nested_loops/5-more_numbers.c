#include "main.h"

/**
 * more_numbers - Nested loops to print series of numbers 10 times
 */

void more_numbers(void)
{
	int n;

	int m;

	n = 0;

	while (n <= 9)
	{
		m = 0;
		while (m <= 14)
		{
			_putchar(m);
			m++;
		}
		_putchar('\n');
		n++;
	}
}
