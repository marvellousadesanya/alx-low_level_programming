#include "main.h"

/**
 * _strcat - concats two strings
 * @dest: Checks for char dest
 * @src: Checks for char src
 * Return: Returns dest(the concated str)
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		; /** Not 100% sure why I left this here.
		    * Might later remove
		    */
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		*dest += src[j];
	}
	*dest += '\0';

	return (dest);
}
