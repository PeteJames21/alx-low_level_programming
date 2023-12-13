#include "search_algos.h"
#include <stdio.h>
#include <stddef.h>
#include <math.h>

/**
 * jump_search - search for an integer in an array using jump search
 * @array: a pointer to the first elment of an array of integers
 * @size: the number of elements in the array
 * @value: the integer to be located
 * Return: the index of the first occurence of @value or -1 if not found
 *
 * Description - the sqrt of @size is used as the jump step
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, m, k;
	char *s1, *s2;

	if (array == NULL || size < 1)
		return (-1);

	k = m = floor(sqrt(size));
	s1 = "Value checked array[%lu] = [%d]\n";
	s2 = "Value found between indexes [%d] and [%d]\n";
	printf(s1, 0, array[0]);
	if (array[0] == value)
	{
		return (0);
	}
	/* Look for the interval containing m */
	while (k < size)
	{
		if (array[k] < value)
		{  /* Jump to the next interval */
			printf(s1, k, array[k]);
			i = k;
			k += m;
			if (k < size)
				continue;
		}
		/* Search for value between i and k */
		/* End the search at the last element if k >= size */
		printf(s2, i, k);
		for (; i <= k && i < size; i++)
		{
			printf(s1, i, array[i]);
			if (array[i] == value)
			{
				return (i);
			}
		}
		break;
	}

	return (-1);
}
