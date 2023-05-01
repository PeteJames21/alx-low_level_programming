#include <stddef.h>
#include "lists.h"

/**
 * get_nodeint_at_index - get the node at the specified index
 * @head: head of the listint_t
 * @index: index of the target node
 *
 * Return: a pointer to the i-th node, NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int i = 0;

	if (!head)
		return (NULL);

	while (node)
	{
		if (i == index)
			return (node);

		node = node->next;
		i++;
	}

	/* This point is reached if `index` > than the list's length */
	return (NULL);
}
