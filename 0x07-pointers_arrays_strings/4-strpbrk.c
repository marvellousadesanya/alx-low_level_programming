#include "main.h"

/**
 * _strpbrk - Prints out substring
 * @s: Checks for char s
 * @accept: Checks for char accept
 * Return: Returns the substring or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 1; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s);
			}
			else
				s++;
		}
	}
	return (NULL);
}
