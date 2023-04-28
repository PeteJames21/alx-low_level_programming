#include <stddef.h>
#include "lists.h"

/**
 * listint_len - find the length of a listint_t list
 * @h: a pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t size = 0;

	while (h)
	{
		size++;
		h = h->next;
	}

	return (size);
}
