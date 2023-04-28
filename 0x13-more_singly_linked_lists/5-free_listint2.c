#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - free memory occupied by all nodes of a listint_t
 * @head: a pointer to the first node of the list
 *
 * Description - the head is set to NULL after the memory is freed
 */
void free_listint2(listint_t **head)
{
	listint_t *previous, *next;

	next = *head;
	while (next)
	{
		previous = next;
		next = next->next;
		free(previous);
	}

	*head = NULL;
}
