#include "main.h"

/**
 * print_alphabet_x10 - Prints lowercase alphabet 10 times
 *
 */

void print_alphabet_x10(void)
{
	char l;
	int out;

	out = 0;

	while (out <= 9)
	{
		l = 'a';
		while (l <= 'z')
		{
			_putchar(l);
			l++;
		}
		_putchar('\n');
		out++;
	}
}
