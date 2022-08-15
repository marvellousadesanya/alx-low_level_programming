#include "lists.h"

/**
 * add_nodeint - Add new node to list
 * @head: Head node
 * @n: Integer
 * Return: Addy of new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	(*head) = newnode;
	return (newnode);
}




