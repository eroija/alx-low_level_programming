#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint -  function that prints all the
 * elements of a dlistint_t list.
 * @h: head of list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int total;

	total = 0;

	if (h == NULL)
		return (total);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		total++;
		h = h->next;
	}
	return (total);
}
