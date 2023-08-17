#include "lists.h"
#include <stddef.h>

/**
 * sum_dlistint - sum all values in a dlistint_t list
 * @head: pointer to the head of the list
 * Return: the sum of all values in the list, else 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
