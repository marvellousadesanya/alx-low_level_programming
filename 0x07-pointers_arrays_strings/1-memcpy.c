#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: copied string
 * @src: string to be copied
 * @n: bytes from memory area
 * Return: Copied string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
