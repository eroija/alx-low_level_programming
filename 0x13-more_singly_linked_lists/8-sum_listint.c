#include "lists.h"

/**
 * sum_listint - function that returns the sum of all data
 * (n) of a listint_t linked list
 * @head: pointer to the head of the list
 * Return: sum of all the data (n) of a listint_t linked
 * list or 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
