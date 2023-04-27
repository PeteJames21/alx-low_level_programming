#include <stdlib.h>
#include "lists.h"

/**
 * free_list - free memory occupied by all nodes of a list_t list
 * @head: a pointer to the first node of the list
 */
void free_list(list_t *head)
{
	list_t *previous = NULL, *next;

	if (!head)
		return;

	next = head;
	while (1)
	{
		if (next->next == NULL)
		{
			free(next->str);
			free(next);
			break;
		}
		previous = next;
		next = next->next;
		if (previous)
		{
			free(previous->str);
			free(previous);
		}
	}
}
