#include "main.h"

void print_triangle(int size)
{
	int l,  b, x;

	for (l = 1; l <= size; l++)
	{
		for (b = 1; b <= size - l; b++)
		{
			_putchar(' ');
		}
		
		for (x = 1; x <= l; x++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
	if (size == 0)
		_putchar('\n');
}
