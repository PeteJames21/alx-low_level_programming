#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct listint_t - a singly linked list for storing integers
 * @n: integer
 * @next: a pointer to the next node
 */
typedef struct listint_t
{
	int n;
	struct listint_t *next;
} listint_t;

size_t print_listint(const listint_t *h);

#endif
