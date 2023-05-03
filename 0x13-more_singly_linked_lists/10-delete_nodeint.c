#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - function that deletes node
 * at index 0 of a linkedint_t linked list
 * @head: pointer to address of the head of list
 * @index: index of the node that should be deleted.
 * index starts at 0
 * Return: 1 if it suceeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int j;
	listint_t *new;
	listint_t *other = *head;

	if (other == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(other);
		return (1);
	}
	for (j = 0; j < (index - 1); j++)
	{
		if (other->next == NULL)
			return (-1);
		other = other->next;
	}
	new = other->next;
	other->next = new->next;
	free(new);
	return (1);
}
