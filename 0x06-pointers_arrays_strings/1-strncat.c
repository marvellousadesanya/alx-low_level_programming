#include "main.h"

/**
 * _strncat - Appends src to dest
 * @dest: Checks for char dest
 * @src: Checks for src
 * @n: Checks for int n
 * Return: Returns dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		;
	}

	for (j = 0; j < n; j++)
	{
		dest[i] = src[j];
	}
	*dest += '\0';
	
	return (dest);
}

