#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - Add node to end of list
 * @head: Head pointer
 * @n: Data
 *
 * Return: new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *p;

	if (head == NULL)
		return (NULL);
	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	/* If head pointer is null, let the new node be the head pointer */
	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
		return (newnode);
	}

	p = *head;
	/* when traverse pointer == null, make the pointer point to newnode */
	while (p->next != NULL)
		p = p->next;
	p->next = newnode;
	newnode->prev = p;
	return (newnode);
}


