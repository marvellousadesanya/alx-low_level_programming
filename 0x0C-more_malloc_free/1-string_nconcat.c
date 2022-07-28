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
	int len1, len2, i, j;
	int sign = n;
	char *s;

	if (s1 == NULL)
		s1 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;

	if (s2 == NULL)
		s2 = "";

	for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	if (sign >= len2)
	{
		sign = len2;
		s = malloc(sizeof(char) * (len1 + len2 + 1));
	}
	else
		s = malloc(sizeof(char) * (len1 + n + 1));

	for (i = 0; i < len1; i++)
	{
		s[i] = s1[i];
	}
	for (j = 0; j < sign; j++)
	{
		s[j + i] = s2[j];
	}
	s[j + len1] = '\0';
	if (s == NULL)
		return (NULL);
	return (s);
}
