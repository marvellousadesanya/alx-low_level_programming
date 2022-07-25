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
	unsigned int i;
	char *p;
	unsigned int len = 0;

	while (str[len])
	{
		len++;
	}

	if (str == NULL)
		return (NULL);

	p = malloc(len * sizeof(char));

	for (i = 0; str[i] != 0; i++)
	{
		p[i] = str[i];
	}

	if (p == NULL)
		return (NULL);
	
	return (p);
}

