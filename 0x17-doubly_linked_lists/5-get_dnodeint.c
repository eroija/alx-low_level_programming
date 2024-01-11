#include "lists.h"
#include <stddef.h>

/**
 * get_dnodeint_at_index - function that returns the
 * nth node of a dlistint_t linked list.
 * @head: pointer to head of list
 * @index: index of node to search from, starting
 * from 0
 * Return: nth node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;

	count = 0;

	while (head != NULL)
	{
		if (count == index)
		{
			return (head);
		}
		head = head->next;
		count++;
	}
	return (NULL);
}
