#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: First string
 * @s2: Second string
 * Return: Returns either 0 or the BYTE difference between both strings
 */

int _strcmp(char *s1, char *s2)
{
	int i, j;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
		{
			j = 0;
		}
		else
		{
			j = (*s1 - *s2); /**
					  * Returns 15. This is the difference
					  * between the bytes in memory
					  */
		}
	}
		return (j);
}
