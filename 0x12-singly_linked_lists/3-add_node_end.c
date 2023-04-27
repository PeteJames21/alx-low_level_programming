#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - add a node to the end of a list_t list
 * @head: pointer to a pointer to the head of the list
 * @str:string to be added to the str attribute of the new node
 *
 * Return: the address of the inserted node, or NULL if the insertion failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *next_node;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = NULL;

	/* Traverse to the end of the list and add the new node */
	if (*head == NULL)
	{
		*head = new_node;

		return (new_node);
	}

	next_node = *head;
	while (1)
	{
		if (next_node->next == NULL)
		{
			next_node->next = new_node;
			break;
		}
		next_node = next_node->next;
	}

	return (new_node);
}

/**
 * _strlen - determine the length of a string
 * @s: string to be evaluated
 *
 * Return: number of chars in s
 */
int _strlen(const char *s)
{
	unsigned int i = 0;

	while (*s)
	{
		s++;
		i++;
	}

	return (i);
}
