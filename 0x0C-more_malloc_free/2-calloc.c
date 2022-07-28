#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array but using malloc
 * @nmemb: Number of elements
 * @size: size of EACH element
 * Return: Pointer to allocated memory or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *n;
	unsigned int i;

	n = malloc(nmemb * size);

	if (nmemb == 0)
		return (NULL);

	if (size == 0)
		return (NULL);

	if (n == NULL)
		return (NULL);

	/* MEMSET: Sets the memory to 0 */
	if (n != NULL)
	{
		for (i = 0; i < size; i++)
		{
			n[i] = 0;
		}
	}

	return (n);
}
