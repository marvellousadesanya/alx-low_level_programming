#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - Add node to end of list
 * @head: Head of node
 * @str: Sting to add
 *
 * Return: Address of string
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *temp;

	unsigned int length = 0;

	if (str == NULL)
		return (NULL);

	while (str[length])
		length++;

	temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}

	temp->len = length;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}

	ptr = *head;

	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = temp;

	return (temp);
}
