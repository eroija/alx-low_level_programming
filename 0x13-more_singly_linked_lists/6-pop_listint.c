#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - function that deletes the head node of a
 * listint_t linked list
 * @head: pointer to the address of the head of the
 * listint_t list
 * Return: the head node's data (n) or 0 if the linked
 * list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *dh;
	int i;

	if (*head == NULL)
		return (0);

	i = (*head)->n;
	dh = *head;
	*head = (*head)->next;

	free(dh);

	return (i);
}
