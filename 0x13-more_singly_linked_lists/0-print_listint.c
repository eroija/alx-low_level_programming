#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function that prints all the elemnts
 * of a listint_t list
 * @h: pointer to head of linked list node
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
