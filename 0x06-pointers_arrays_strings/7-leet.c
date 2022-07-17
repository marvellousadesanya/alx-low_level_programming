#include "main.h"

/**
 * leet - Encodes string to 1337
 * @i: Checks for int i -the iterator
 * @s: The string to be encoded
 * Return: Returns encoded string
 */

char *leet(char *s)
{
	int i, j;

	char str[] = {'a', 'e', 'o', 't', 'l'};
	char num[] = {4, 3, 0, 7, 1};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; str[j] != '\0'; j++)
		{
			if (s[i] == str[j] || s[i] == str[j] - 32)
			{
				s[i] = num[j] + '0';
			}
		}
	}
	return (s);
}
