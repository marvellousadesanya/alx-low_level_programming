#include "main.h"

/**
 * factorial - Factorial of a number
 * @n: Number to find factorial of
 * Return: The factorial or -1 in case of error
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
