#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at the specified index
 * @head: the head of the listint_t
 * @idx: index at which to insert the new node
 * @n: data to attach to the new node
 *
 * Return: a pointer to the new node or NULL if the insertion failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *node = *head, *prev_node = NULL;

	unsigned int i = 0;

	if (!*head && idx != 0)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (!*head && idx == 0)
	{
		*head = new_node;
		return (new_node);
	}

	while (node)
	{
		if (idx == i)
		{
			prev_node->next = new_node;
			new_node->next = node;
			return (new_node);
		}

		prev_node = node;
		node = node->next;
		i++;
	}

	/* idx is out of range */
	free(new_node);

	return (NULL);
}
