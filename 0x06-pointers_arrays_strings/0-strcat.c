#include "main.h"

char *_strcat(char *dest, char *src)
{
	int i, j;
	for (i = 0; dest[i] != '\0'; i++)
	{
		; /** Not 100% sure why I left this here.
		    * Might later remove */
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	*dest += '\0';

	return (dest);
}
