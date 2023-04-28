#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_listint - print all elements in a listint_t
 * @h: a pointer to the head of the listint_t list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t size = 0;

	while (h)
	{
		size++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (size);
}
