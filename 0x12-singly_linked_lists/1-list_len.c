#include <stddef.h>
#include "lists.h"

/**
 * list_len - count the number of elements in a list_t list
 * @h: a singly linked list of type list_t
 *
 * Return: the number of elements in list_t
 */
size_t list_len(const list_t *h)
{
	size_t size = 0;

	while (h)
	{
		h = h->next;
		size++;
	}

	return (size);
}
