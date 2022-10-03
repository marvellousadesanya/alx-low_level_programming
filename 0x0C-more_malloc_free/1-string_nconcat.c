#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: first char
 * @s2: secound char
 * @n: unsigned int
 * Return: Pointer or NULL if program fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, j;
	char *s;

	if (s1 == NULL)
		s1 = ""; /* If NULL, treat as empty string */

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;

	if (s2 == NULL)
		s2 = ""; /* If NULL, treat as empty string */

	for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	if (n >= len2)
		n = len2;

	s = malloc(sizeof(char) * (len1 + n + 1));

	if (s == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		s[i] = s1[i]; /* Assign s1 to s */
	}
	for (j = 0; j < n; j++)
	{
		s[i + j] = s2[j]; /* Prepend s2 to s */
	}
	s[j + len1] = '\0';
	if (s == NULL)
		return (NULL);
	return (s);
}
