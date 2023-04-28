#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - add a node to the beginning of a list_t list
 * @head: pointer to a pointer to a listint_t list
 * @str: int to be added to the `n` attribute of the new node
 *
 * Return: address of the new node, or NULL if the insertion failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;

	if (!head)
	{	
		new_node->next = NULL;
	}
	else
	{
		new_node->next = *head;
	}
	*head = new_node;

	return (new_node);
}
