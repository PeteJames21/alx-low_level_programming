#include "lists.h"

/**
 * sum_listint - sum all the elements of a listint_t
 * @head: the head node of the list
 *
 * Return: the sum of all the list's elements or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *node = head;

	if (!head)
		return (0);

	while (node)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
