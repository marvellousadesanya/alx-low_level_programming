#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Copies a string and returns pointer
 * @str: String to be copied
 * Return: Either NULL or pointer to copied string
 */

char *_strdup(char *str)
{
	int i;
	char *p;
	int len;

	len = strlen(str);

	p = malloc(sizeof(char) * len);

	for (i = 0; str[i] != 0; i++)
	{
		p[i] = str[i];
	}

	if (str == NULL)
		return (NULL);

	if (p == NULL)
		return (NULL);
	else
		return (p);
}

