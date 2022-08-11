#include "lists.h"

/**
 * list_len - List elements in a list
 * @h: Header node
 * Return: The count
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	if (h != NULL)
	{
		return ((count + 1) + list_len(h->next));
	}
	return (count);
}
