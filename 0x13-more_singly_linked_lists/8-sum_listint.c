#include "lists.h"

/**
 * sum_listint - Sum all nodes
 * @head: Head pointer
 * Return: the sum or 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	if (head == NULL)
		return (0);

	temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}

