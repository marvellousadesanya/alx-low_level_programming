#include "lists.h"

/**
 * print_listint - Print list of nodes
 * @h: head node
 * Return: Return no. of nodes
 */

size_t print_listint(const listint_t *h)
{
	int nodes = 0; /* Initial no. of nodes */

	if (h != NULL)
	{
		printf("%d", h->n);
		printf("\n");
		return ((nodes + 1) + print_listint(h->next));
	}

	return (nodes);
}
