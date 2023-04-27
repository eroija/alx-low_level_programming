#include "lists.h"

/**
 * free_list - function that frees a list_t
 * list
 * @head: the head of linked list
 * Return: Always (0) Sucess
 */

void free_list(list_t *head)
{
	list_t *node;

	while ((node = head) != NULL)
	{
		free(node->str);
		free(node);
		head = head->next;
	}
}
