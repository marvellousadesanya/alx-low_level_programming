#include "main.h"

/**
 * print_rev - Reverse a string
 *
 * @s: Checks for char s
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
		i++;
	}
	while (i > 0)
	{
		i--;
		_putchar(s[i]);
	}
	_putchar('\n');
}
