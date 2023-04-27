#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* print_list - print all the elements in a list_t list
* @h: linked list whose elements are to be printed
*
* Return: number of elements in list_t
*/
size_t print_list(const list_t *h)
{
	const list_t *node = h;
	size_t size = 0;

	while (node)
	{
		if (node->str)
			printf("[%d] %s\n", node->len, node->str);
		else
			printf("[0] (nil)\n");

		node = node->next;
		size++;
	}

	return (size);
}
