#include "main.h"

void puts2(char *str)
{
	int i = 0;
	int j;

	while (str[i] != '\0')
	{
		i++;
	}

	for ((j = i - 1); str[i % 2 != 0]; j++)
	{
		_putchar(str[j]);
	}
}
