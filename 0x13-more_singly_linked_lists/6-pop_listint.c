#include "lists.h"

/**
 * pop_listint - Remove first node
 * @head: Head pointer
 * Return: 0 or the int data
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL || head == NULL)
		return (0);

	temp = (*head);
	(*head) = temp->next;
	n = (*head)->n;
	free(temp);
	temp = NULL;

	return (n);
}
