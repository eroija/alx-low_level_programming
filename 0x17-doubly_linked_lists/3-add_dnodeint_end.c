#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node
 * at the end
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element,
 * or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->data = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		dlistint_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}

		current->next = new;
		new->prev = current;
	}
	return (new);
}
