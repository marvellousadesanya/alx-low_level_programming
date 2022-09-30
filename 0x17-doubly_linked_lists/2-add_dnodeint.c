#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint - Add new node to beginning of list
 * @head: Head pointer
 * @n: Data
 *
 * Return: Newnode
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/* The new node becomes the head pointer */
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;

	if (new_node->next != NULL)
		(new_node->next)->prev = new_node;
	return (new_node);
}
