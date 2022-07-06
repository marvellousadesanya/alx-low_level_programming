#include "main.h"

/**
 * print_sign - Entry point
 *
 * Description: 'Checking for negative or positive'
 *
 * @n: Check for n
 *
 * Return: Return 0 or 1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	} else if (n == 0)
	{
		return (0);
		_putchar('0');
	} else if (n < 0)
	{
		return (-1);
		_putchar('-');
	}
}
