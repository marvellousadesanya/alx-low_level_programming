#include "main.h"

/**
 * _isdigit - Checks for digits between 0 and 1
 * @c: Checks for character c
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
		return (0);
}
