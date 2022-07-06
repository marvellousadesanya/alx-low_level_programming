#include "main.h"

/**
 * jack_bauer - Prints 24 hours digital clock
 *
 */

void jack_bauer(void)
{
	int min, hr;

	hr = 0;
	while (hr <= 23)
	{
		min = 0;
		while (min <= 59)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
			min++;
		}
		hr++;
	}

}
