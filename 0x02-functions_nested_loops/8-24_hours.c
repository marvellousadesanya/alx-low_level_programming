#include "main.h"

void jack_bauer(void)
{
	int hr;

	int min;

	hr = 0;

	while (hr <= 23)
	{
		min = 0;
		while (min <= 59)
		{
			_putchar(min + '0');
			min++;
		}
		_putchar(hr + '0');
		_putchar(':');
		_putchar(min + '0');
		_putchar('\n');
		hr++;
	}
}
