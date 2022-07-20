#include "main.h"

/**
 * _puts_recursion - Recursively prints out s
 * @s: The character to be printed
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return; /* Must always return else we get wrong output */
	}
	_putchar(*s); /* Prints character */
	_puts_recursion(s + 1); /* Adds char by 1 */
}
