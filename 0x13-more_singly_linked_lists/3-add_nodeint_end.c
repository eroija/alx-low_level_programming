#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - function tha adds a new node
 * at the end of a listint_t list
 * @head: ponter to the address of the head of the
 * listint_t list
 * @n: integer for new node
 * Return: the address of the new element or NULL
 * if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *end;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
		*head = node;
	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = node;
	}
	return (*head);
}
