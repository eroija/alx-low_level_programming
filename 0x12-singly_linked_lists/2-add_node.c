#include "lists.h"
#include <string.h>

/**
 * add_node - a function that adds a new node at
 * the beginning of a list_t list.
 * @head: head of the linked list
 * @str: string to store in the list
 * Return: address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *net;

	size_t a;

	net = malloc(sizeof(list_t));

	if (net == NULL)
		return (NULL);

	net->str = strdup(str);

	for (a = 0; str[a]; a++)
		;

	net->next = *head;
	net->len = a;
	*head = net;

	return (*head);
}
