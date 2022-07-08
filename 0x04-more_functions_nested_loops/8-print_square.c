#include "main.h"

/**
 * print_square - prints out a square
 * @size: Checks for int size
 */

void print_square(int size)
{
	int breadth, length;

	for (length = 0; length < size; length++)
	{
		for (breadth = 0; breadth < size; breadth++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

	if (size <= 0)
		_putchar('\n');
}

