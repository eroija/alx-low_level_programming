#include "lists.h"
#include <stdio.h>

/**
 * add_node - a function that adds a new node at
 * the beginning of a list_t list.
 * @head: head of the linked list
 * @str: string to store in the list
 * Return: address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *nn;

	size_t i;

	nn = malloc(sizeof(list_t));

	if (nn == NULL)
		return (NULL);

	nn->str = strdup(str);

	for (i = 0; str[i]; i++)
		;

	nn->len = i;
	nn->next = *head;
	*head = nn;

	return (*head);
}
