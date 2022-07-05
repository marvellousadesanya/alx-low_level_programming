#include "main.h"

/**
 * print_alphabet_x10 - Prints lowercase alphabet 10 times
 *
 */

void print_alphabet_x10(void)
{
	char l;
	int out;

	l = 'a';

	while (out <= 10)
	{
		out = 0;
		while (l <= 'z')
		{
			_putchar(l);
			l++;
		}
		out++;
	}
}
