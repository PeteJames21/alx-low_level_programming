#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - add a new node at the end of a dlistint_t
 * @head: double pointer to the head of the list
 * @n: value of the new node
 * Return: a pointer to the new node, or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *current;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	current = *head;
	while (current)
	{
		if (current->next == NULL)
		{
			current->next = new;
			new->prev = current;
			break;
		}
		current = current->next;
	}

	return (new);
}
