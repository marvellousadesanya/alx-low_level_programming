#include "lists.h"

/**
 * get_nodeint_at_index - Print nth node
 * @head: Head pointer
 * @index: Node to print
 * Return: NULL or Nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp;

	temp = head;

	if (head == NULL)
		return (NULL);

	while (temp != NULL)
	{
		if (count == index)
			return (temp);
		temp = temp->next;
		count++;
	}
	return (NULL);
}
