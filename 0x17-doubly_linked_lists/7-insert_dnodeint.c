#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - insert a node at the specified index
 * @h: double pointer to the head of the list
 * @idx: index at which to insert the new node
 * @n: value of the node
 * Return: a pointer to the inserted node or NULL if the insertion failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 1;
	dlistint_t *current, *new_node;

	if (h == NULL)
		return (NULL);
	if (idx == 0)  /* Insert at head */
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}

	current = *h;
	while (current != NULL)
	{
		if (i == idx)
		{
			new_node = malloc(sizeof(dlistint_t));
			if (new_node == NULL)
				return (NULL);
			new_node->n = n;
			new_node->next = current->next;
			new_node->prev = current;
			current->next = new_node;

			if (new_node->next != NULL)
			{
				new_node->next->prev = new_node;
			}

			return (new_node);
		}
		current = current->next;
		i++;
	}

	return (NULL); /* idx not found */
}
