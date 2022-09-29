#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - Counts no. of elements
 * @h: Head pointer
 * Return: No. of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i;
	int c = 0; /* Counter variable initialized */

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
		c++;
	}
	return (c);
}
