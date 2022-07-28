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
	unsigned int len1, len2;
	unsigned int i, j;
	char *s;

	for (len1 = 0; s1[len1] != '\0'; len1++)
		; /* len of s1 */
	for (len2 = 0; s2[len2] != '\0'; len2++)
		; /* len of s2 */

	if (n >= len2)
		n = len2;

	s = malloc(sizeof(char) * (len1 + n + 1)); /* Assigned space */

	for (i = 0; s1[i] != '\0'; i++)
	{
		s[i] = s1[i];
	}

	for (j = 0; j < n; j++)
	{
		s[i + j] = s2[j];
	}
	s[i + j] = '\0';

	if (s == NULL)
		return (NULL);

	if (s1 == NULL)
		len1 = 0;
	if (s2 == NULL)
		len2 = 0;

	return (s);
}
