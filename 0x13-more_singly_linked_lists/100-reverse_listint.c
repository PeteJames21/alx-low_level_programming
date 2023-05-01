#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - reverse a listint_t
 * @head: the head of the list
 *
 * Return: the head of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	if (!*head)
		return (NULL);
	if (!(*head)->next)
		return (*head);

	prev = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
