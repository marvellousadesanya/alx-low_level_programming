#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Function that allocates memory
 * @b: The number of bytes to be allocated
 * Return: The pointer to allocated space
 */

void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);

	if (s == NULL)
	{
		exit(98); /* !IMPORTANT: Function that causes process termination */
	}
	return (s);
}

