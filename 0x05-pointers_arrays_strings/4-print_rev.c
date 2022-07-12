#include "main.h"

/**
 * print_rev - Reverse a string
 * 
 * @s: Checks for char s
 */

void print_rev(char *s)
{
	for (i = 0; s[i] == '\0'; i--)
	{
		_putchar(i);
	}
	_putchar('\n');
}
