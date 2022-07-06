#include "main.h"

void print_to_98(int n)
{
	if(n <= 0 && n <= 98)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
		_putchar(',');
		_putchar(' ');
		_putchar('\n');
		n++;
	}
	else if (n > 0 && n <= 98)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
		_putchar(',');
		_putchar(' ');
		_putchar('\n');
		n++;
	}
}

