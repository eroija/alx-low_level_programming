#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - function that frees
 * a dlistint_t list.
 * @head: pointer to head of the list
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		dlistint_t *current = head;

		head = head->next;
		free(current);
	}
}
