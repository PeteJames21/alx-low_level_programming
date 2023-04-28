#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - free memory occupied by all nodes of a listint_t
 * @head: a pointer to the first node of the list
 */
void free_listint(listint_t *head)
{
	listint_t *previous, *next;

	next = head;
	while (next)
	{
		previous = next;
		next = next->next;
		free(previous);
	}
}
