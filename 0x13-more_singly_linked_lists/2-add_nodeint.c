#include "lists.h"

/**
 * add_nodeint - function that adds a new node at
 * the begininig of a listint_t list.
 * @head: pointer to address of the head of the
 * linked list listint_t
 * @n: integer of the new node
 * Return: the address of the new element or NULL
 * if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = *head;

	*head = node;

	return (node);
}
