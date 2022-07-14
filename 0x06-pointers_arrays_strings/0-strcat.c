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

	/** This block only counts number
	 * of characters in dest string
	 */
	for (i = 0; dest[i] != 0; i++)
	{
		;
	}

	/** This block then appends the
	 * characters of src to dest
	 */
	for (j = 0; src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}
	*dest += '\0'; /** Appends null 
			 * value to end of string
			 */

	return (dest);
}
