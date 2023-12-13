#include "search_algos.h"
#include <stddef.h>
#include <stdio.h>

/**
 * linear_search - search for an integer in an array using linear search
 * @array: a pointer to the first elment of an array of integers
 * @size: the number of elements in the array
 * @value: the integer to be located
 * Return: the index of the first occurence of @value or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL || size < 1)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}

	return (-1);
}
