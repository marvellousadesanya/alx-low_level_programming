#include "main.h"

/**
 * _strlen_recursion - Returns the len of a string
 * @s: The str to be printed recursively
 * Return: The len of string
 */

int _strlen_recursion(char *s)
{
	int len = 0; /* Initializing len */

	if (*s == '\0')
		return (len); /* Here the len is 0 */
	return ((len + 1) + _strlen_recursion(s + 1)); /**
							* As process repeats itself,
							* it adds 1 to itself, therefore
							* len also increases by 1
							*/
}
