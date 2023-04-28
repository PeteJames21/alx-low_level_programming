#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - add a node to the end of a listint_t lise
 * @head: the head of the linked list
 * @n: the value of the `n` attribute of the new node
 *
 * Return: the address of the new element, or NULL on failure
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *next_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
	}
	else
	{
		next_node = *head;
		while (next_node)
		{
			if (!next_node->next)
			{
				next_node->next = new_node;
				break;
			}
			next_node = next_node->next;
		}
	}

	return (new_node);
}
