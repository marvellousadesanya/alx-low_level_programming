#include "main.h"

/**
 * puts_half - Prints second half of string
 * @str: Checks for char str
 */

void puts_half(char *str)
{
	int len = 0;
	int i = 0;
	int j;

	for (len = 0; str[len] != '\0'; len++)
		;
	if ((len % 2) == 0)
		j = len / 2;

	else
		j = (len + 1) / 2;

	for (i = j; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}

