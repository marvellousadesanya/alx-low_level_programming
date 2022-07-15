#include "main.h"

/**
 * cap_string - Capitalizes strings
 * @s: Checks for char s
 * Return: Returns the string
 */
char *cap_string(char *s)
{
	int i, j;

	char sep[] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; sep[j] != '\0'; j++)
		{
			if (sep[j] == s[i] && (s[i + 1] >= 97 && s[i + 1] <= 122))
				s[i + 1] = s[i + 1] - 32;
		}
	}
	return (s);
}
