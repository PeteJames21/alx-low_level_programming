#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - free a dlistint_t list
 * @head: pointer to the head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	current = head;
	while (current != NULL)
	{
		if (current->prev != NULL)
			free(current->prev);

		if (current->next == NULL)
		{
			free(current);
			break;
		}
		current = current->next;
	}	
}
