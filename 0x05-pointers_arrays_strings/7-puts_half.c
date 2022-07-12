#include "main.h"

void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; (j <= i - 1 / 2); j++)
		{
			_putchar(str[i]);
		}
	}
}

