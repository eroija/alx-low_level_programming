#include "lists.h"
#include <stddef.h>

/**
 * dlistint_len -  a function that returns the number
 * of elements in a linked dlistint_t list.
 * @h: head of the list
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int total;

	total = 0;

	if (h == NULL)
		return (total);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		total++;
		h = h->next;
	}
	return (total)
}
