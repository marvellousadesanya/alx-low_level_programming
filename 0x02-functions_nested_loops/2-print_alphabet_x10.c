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

	l = 'a';

	while (out <= 10)
	{
		while (l <= 'z')
		{
			_putchar(l);
			l++;
		}
		out++;
	}
}
