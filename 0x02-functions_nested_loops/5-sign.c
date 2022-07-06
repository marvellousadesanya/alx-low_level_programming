#include "main.h"

/**
 * print_sign - Entry point
 *
 * Description: 'Checking for negative or positive'
 *
 * @n: Check for n
 *
 * Return: Return 0, 1 or -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
