#include "main.h"

/**
 * _strlen - Checks for length
 * @s: Checks for character s
 * Returns the length
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++);
	
	return (i);
}
