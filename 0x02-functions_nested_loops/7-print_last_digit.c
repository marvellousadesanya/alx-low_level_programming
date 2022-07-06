#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * Description: 'Print last digit'
 *
 * @n: Checks for n
 *
 * Return: returns last digit
 */

int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
		ld *= -1;

	_putchar(ld + '0');
	return (ld);
}
