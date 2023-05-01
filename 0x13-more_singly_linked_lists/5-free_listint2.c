#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - function that frees a
 * listint_t list
 * @head: a pointer to address of the head
 * of listint_t list
 */

void free_listint2(listint_t **head)
{
	listint_t *fl;

	if (head == NULL)
		return;

	while (*head)
	{
		fl = (*head)->next;
		free(*head);
		*head = fl;
	}
	head = NULL;
}
