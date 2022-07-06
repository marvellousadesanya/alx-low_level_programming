#include "main.h"

void jack_bauer(void)
{
	int min, hr;
	
	while (hr <= 23)
	{
		min = 0;
		while (min <= 53)
		{
			_putchar(':');
			_putchar((min/10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
			min++;
		}
		_putchar((min / 10) + '0');
		_putchar((hr % 10) + '0');
		hr++;

}
