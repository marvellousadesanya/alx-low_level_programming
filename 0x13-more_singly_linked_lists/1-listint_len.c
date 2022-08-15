#include "lists.h"

/**
 * listint_len - List num of elements in linked list
 * @h: Head node
 * Return: Number of elements
 */

size_t listint_len(const listint_t *h)
{
	int count = 0; /* Initial val of no. of elements */

	if (h != NULL)
	{
		return ((count + 1) + listint_len(h->next));
	}
	return (count);
}
