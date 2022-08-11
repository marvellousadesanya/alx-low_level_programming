#include "lists.h"

/**
 * list_len - List elements in a list
 * @h: Header node
 * Return: The count
 */

size_t list_len(const list_t *h)
{
	size_t n = 0; /* Initial val of num of elements in list */

	if (h != NULL)
	{
		return ((n + 1) + list_len(h->next));
	}
	return (n);
}
