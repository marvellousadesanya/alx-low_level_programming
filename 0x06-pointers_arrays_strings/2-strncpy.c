#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: result of copied string
 * @src: String to be copied
 * Return: Returns copied string
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

