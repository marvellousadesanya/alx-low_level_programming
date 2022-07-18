#include "main.h"

/**
 * _strchr - Get a substring
 * @s: The buffer
 * @c: Character to check for;
 * Return: Substring(pointer) or NLLL
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);


	return (NULL);
}