#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: First string
 * @s2: Second string
 * return: Returns either 0 or the BYTE difference between both strings
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] && s2[i] != '\0'; i++)
		continue;

	if (s1[i] == s2[i])
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2); /**
				     * Returns 15. This is the difference
				     * between the bytes in memory
				     */
	}
}
