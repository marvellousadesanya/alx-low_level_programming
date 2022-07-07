#include "main.h"

/**
 * more_numbers - Nested loops to print series of numbers 10 times
 */

void more_numbers(void)
{
	int n, m;

	n = 0;

	while (n <= 9)
	{
		m = 0;
		while (m <= 14)
		{
			if (m >= 10)
			{
				_putchar('1');
				_putchar((m % 10) + '0');
				m++;
			}
			_putchar(m + '0');
			m++;
		}
		_putchar('\n');
		n++;
	}
}
