#include "lists.h"

/**
 * print_list - Print list of elements in Linked list
 * @h: The head
 * Return: Returns the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0; /* Number of nodes */

	if (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("[%u] %s", h->len, h->str);
		}
		printf("\n");
		return ((count + 1) + print_list(h->next)); /* Recursive function */
	}
	return (count); /* Exit function */
}
