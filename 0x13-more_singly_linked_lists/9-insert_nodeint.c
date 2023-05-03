#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - function that inserts a new node at
 * a given position
 * @head: pointer to pointer to address of head of list
 * @idx: index of the list where the new node should be added.
 * index starts at 0
 * @n: integer for the new node
 * Return: address of the new node or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *add;
	listint_t *other = *head;

	add = malloc(sizeof(listint_t));
	if (add == NULL)
		return (NULL);

	add->n = n;

	if (idx == 0)
	{
		add->next = other;
		*head = add;
		return (add);
	}

	for (i = 0; i < (idx - 1); i++)
	{
		if (other == NULL || other->next == NULL)
			return (NULL);
		other = other->next;
	}
	add->next = other->next;
	other->next = add;

	return (add);
}
