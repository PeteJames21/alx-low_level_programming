#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - delete the node at the given index
 * @head: double pointer to the head of the list
 * @index: index of node to be deleted
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;
	while (current != NULL)
	{
		if (i == index)
		{
			if (current->prev == NULL)
			{  /* Delete the head */
				if (current->next != NULL)
					current->next->prev = NULL;

				*head = current->next;
				free(current);
			}
			else if (current->next != NULL && current->prev != NULL)
			{  /* Delete a node at a non-terminal position */
				current->prev->next = current->next;
				current->next->prev = current->prev;
				free(current);
			}
			else /* (current->next == NULL) */
			{  /* Delete the terminal node */
				current->prev->next = NULL;
				free(current);
			}
			return (1);
		}

		current = current->next;
		i++;
	}

	return (-1); /* Operation failed */
}
