#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: First string
 * @s2: Second string
 * Return: Returns either 0 or the BYTE difference
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i] && s1[i] != '\0'; i++)
		continue;

	if (s1[i] == s2[i])
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2); /** Difference between 2 char * */
	}
}
