#include "main.h"

/**
 * _strlen - Checks for length
 * @s: Checks for character s
 * Return: Always 0
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++);
	_putchar(i + '0');

	return (0);
}
