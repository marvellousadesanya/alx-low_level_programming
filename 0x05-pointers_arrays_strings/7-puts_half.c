#include "main.h"

void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j >= (i - 1) / 2; str[i] != '\0'; j++)
		{
			_putchar(str[j]);
		}
	}
}

