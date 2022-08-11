#include "lists.h"

/**
 * print_list - Print list of elements in Linked list
 * @h: The head
 * Return: Returns the number of nodes
 */

size_t print_list(const list_t *h)
{
	int count = 1; /* Number of nodes */

	if (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
			count = 0;
		}
		else
		{
			printf("[%d] %s", h->len, h->str);
		}
		printf("\n");
		print_list(h->next); /* Recursive function */
		count++;
	}
	return (count); /* Exit function */
}
