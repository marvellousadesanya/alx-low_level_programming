#include "main.h"

void jack_bauer(void)
{
	int min, hr;
	
	hr = 0;
	while (hr <= 23)
	{
		_putchar((hr / 10) + '0');
		_putchar((hr % 10) + '0');
		_putchar('\n');

		min = 0;
		while (min <= 59)
		{
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
			min++;
		}
		hr++;
	}

}
