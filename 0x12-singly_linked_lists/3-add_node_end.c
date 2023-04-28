#include "lists.h"
#include <string.h>
/**
 * add_node_end - a function that adds a new
 * node at the end of a list_t list
 * @head: head of linked list
 * @str: string to store
 * Return: the address of the new element,
 * or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *current_node;
	size_t j;

	/* Create a new node*/
	node = malloc(sizeof(list_t));

	if (node == NULL)
		return (NULL);

	/* make a duplicate */
	node->str = strdup(str);

	for (j = 0; str[j]; j++)
		;

	node->next = NULL;
	node->len = j;
	current_node = *head;

	if (current_node == NULL)
	{
		*head = node;
	}
	else
	{
		while (current_node->next != NULL)
			current_node = current_node->next;
		current_node->next = node;
	}
	return (*head);
}
