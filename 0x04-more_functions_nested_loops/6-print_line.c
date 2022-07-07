#include "main.h"

/**
 * print_line - Print n lines or new line
 * @n: Checks for n
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}

	_putchar('\n');
}
