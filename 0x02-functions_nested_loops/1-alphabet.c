#include "main.h"

/**
 * print_alphabet - print lower case alphabet
 *
 * Return: Always 0 (SUCCESS)
 */

void print_alphabet(void) 
{
	char l;

	l = 'a';

	while (l <= 'z') 
	{
		_putchar(l);
		l++;
	}
	_putchar('\n');
	return;
}
