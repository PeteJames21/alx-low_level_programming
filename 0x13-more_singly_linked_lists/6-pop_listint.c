#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - delete the head node of a listint_t
 * @head: list to be popped
 *
 * Return: the data of the deleted node or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *new_head;
	int popped_data;

	if (!*head)
		return (0);

	popped_data = (*head)->n;
	new_head = (*head)->next;

	/* Deallocate memory occupied by the previous head */
	free(*head);

	/* Set the next node as the head. If none, the head is set to NULL */
	*head = new_head;

	return (popped_data);
}
