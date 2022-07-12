#include "main.h"

void puts2(char *str)
{
	int i = 0;

	while(str[i % 2 == 0])
	{
		i++;
		_putchar(str[i]);
	}
}
