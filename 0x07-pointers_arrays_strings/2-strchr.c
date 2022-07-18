#include "main.h"

/**
 * _strchr - Get a substring
 * @s: The buffer
 * @c: Character to check for;
 * Return: Substring(pointer) or NLLL
 */

char *_strchr(char *s, char c)
{
	while (*s)
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
