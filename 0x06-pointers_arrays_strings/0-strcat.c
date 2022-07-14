#include "main.h"

char *_strcat(char *dest, char *src)
{
	char newStr;

	for (i = 0; dest[i] != '\0'; i++)
	{
		newStr += dest[i];
	}
	printf(newStr);
}
