#include "main.h"

/**
 * puts_half - Prints second half of string
 * @str: Checks for char str
 */

void puts_half(char *str)
{
	int len, n;

	for (len = 0; str[len] != '\0'; len++)
		;
	for(n = 0; n <= len; n++)
	{
		if (len % 2 == 0)
			n = len/2;
		else
			n = (len - 1)/2;
		_putchar(str[n]);
	}
	_putchar('\n');
}

