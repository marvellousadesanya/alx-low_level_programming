#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_alphabet(void) 
{
	char l;
	l = 'a';
	while (l < 'z') 
	{
		_putchar(l);
		l++;
	}
	_putchar('\n');
	return (0);
}
