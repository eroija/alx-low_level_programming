#include "lists.h"

/**
 * free_listint - function that frees a
 * listint_t list
 * @head: pointer to head of listint_t
 */

void free_listint(listint_t *head)
{
	listint_t *fl;

	while (head)
	{
		fl = head->next;
		free(head);
		head = fl;
	}
}