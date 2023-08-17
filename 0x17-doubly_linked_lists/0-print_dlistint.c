#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_dlistint - print all elements in a dlistint_t
 * @h: pointer to the head of the list
 * Return: the number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
