#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - add a node to the beginning of a list_t list
 * @head: pointer to a pointer to a list_t list
 * @str: string to be added to the str attribute of the new node
 *
 * Return: address of the new node, or NULL if the insertion failed
 */
list_t *add_node(list_t **head, const char *str)
{
	char *str_copy = strdup(str);
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = str_copy;
	new_node->len = _strlen(str_copy);
	new_node->next = *head;

	/* Make the new node the head of the list */
	*head = new_node;

	return (*head);
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
