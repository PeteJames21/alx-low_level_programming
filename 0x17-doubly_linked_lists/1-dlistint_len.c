#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * dlistint_len - find the length of a dlistint_t
 * @h: pointer to the head of the list
 * Return: the number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}

	return (i);
}
