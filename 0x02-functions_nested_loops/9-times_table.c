#include "main.h"

void times_table(void)
{
	int num;
	num = 9;
	while (num <= 81)
	{
		_putchar((num / 10) + '0');
		_putchar((num % 10) + '0');
		_putchar('\n');
		num += 9;
	}
}
