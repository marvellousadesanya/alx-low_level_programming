#include "main.h"

/**
 * _islower - Entry point
 *
 * Description: checkes for lowercase characters
 *
 * @c: The character to be checked.
 *
 * Return: 1 if c is lower
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	} else
		return (0);
}

