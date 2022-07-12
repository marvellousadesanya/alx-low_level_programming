#include "main.h"

/**
 * print_rev - Reverse a string
 * 
 * @s: Checks for char s
 */

void print_rev(char *s)
{
	for (; *s == 0; s--)
	{
		_putchar(*s);
	}
	_putchar(*s);
}
