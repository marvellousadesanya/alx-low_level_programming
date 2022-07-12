#include "main.h"

/**
 * _puts - Prints out a string
 *
 * @str: Checks for char str
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}

	_putchar('\n');
}
