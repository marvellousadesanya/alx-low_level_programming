#include "main.h"

/**
 * _strcncpy - Copies a string
 * @dest: The copied string
 * @src: The string to be copied
 * @n: Number of bytes to be copied
 * Return: the copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	*dest += '\0';

	return (dest);
}
