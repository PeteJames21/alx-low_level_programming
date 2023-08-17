#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - add a new node at the beginning of a dnodeint_t
 * @head: the head of the list
 * @n: value of the new node
 * Return: a pointer to the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		exit(EXIT_FAILURE);

	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = new;
	}

	*head = new;

	return (new);
}
