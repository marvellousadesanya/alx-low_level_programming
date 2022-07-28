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
	{
		len1 = 0;
	}
	else
	{
		for (len1 = 0; s1[len1] != '\0'; len1++)
			;
	}
	if (s2 == NULL)
	{
		len2 = 0;
	}
	else
	{
		for (len2 = 0; s2[len2] != '\0'; len2++)
			;
	}
	if (len2 > n)
		len2 = n;
	s = malloc(sizeof(char) * (len1 + len2 + 1)); /* Assigned space */
	for (i = 0; s1[i] != '\0'; i++)
	{
		s[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		s[i + j] = s2[j];
	}
	s[j + len1] = '\0';
	if (s == NULL)
		return (NULL);
	return (s);
}
