#include "main.h"

void jack_bauer(void)
{
	int min;
	
	min = 0;
	while (min <= 59)
	{
		_putchar(':');
		_putchar((min/10) + '0');
		_putchar((min % 10) + '0');
		_putchar('\n');
		min++;
	}
}
