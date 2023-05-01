#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - delete the node at the specified index
 * @head: the head of the list
 * @index: the index of the node to be deleted
 *
 * Return: 1 on success, -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *prev_node, *node = *head;

	if (!*head)
		return (-1);

	while (node)
	{
		if (index == i)
		{
			if (i == 0)
			{
				*head = node->next;
				free(node);
				return (1);
			}

			prev_node->next = node->next;
			free(node);
			return (1);
		}

		prev_node = node;
		node = node->next;
		i++;
	}

	/* This point is reached if index is out of range */
	return (-1);
}
