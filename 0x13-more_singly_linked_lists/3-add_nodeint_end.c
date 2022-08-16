#include "lists.h"

/**
 * add_nodeint_end - Add new node to end of list
 * @head: Head pointer
 * @n: Int variable in struct
 * Return: New node or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp; /* For traversing list */
	listint_t *newnode; /* Node to be added */

	newnode = malloc(sizeof(listint_t)); /* Create space for node */
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL) /**
			    * If head points to nothing, assign
			    * newly created node to it
			    * and return
			    */
	{
		*head = newnode;
		return (newnode);
	}

	temp = *head; /* If not, let head point to temp */
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newnode; /* temp->next now points to newnode */

	return (newnode);
}
