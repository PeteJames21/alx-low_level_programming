#include "lists.h"
#include <stddef.h>

/**
 * get_dnodeint_at_index - return the nth node of a dlistint_t list
 * @head: pointer to the head of the list
 * @index: index of node to be returned
 * Return: a pointer to the node, or NULL if not found
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i = 0;

	current = head;
	while (current != NULL)
	{
		if (i == index)
			return (current);

		current = current->next;
		i++;
	}

	return (NULL);  /* node not found */
}
