#include "main.h"

/**
 * print_binary - Convert dec to binary
 * @n: Number
 */

void print_binary(unsigned long int n)
{
	int i, count = 0;

	for (i = 31; i >= 0; i--)
	{
		if (n & (1 << i))
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
