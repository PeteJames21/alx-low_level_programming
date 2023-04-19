#include <stddef.h>
#include "function_pointers.h"

/**
* int_index - search for a specified integer in a given array
* @array: array to be searched
* @size: number of elements in the array
* @cmp: pointer to the function to be used to match array elements
*
* `cmp` must return a non-zero int if element does not match criteria, else 0
*
* Return: the index of the first match, else -1 if no match is found
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int match = -1;

	/* Sanity checks */
	if (size <= 0)
		return (-1);
	if (!array || !cmp)
		return (-1);

	/* Apply `cmp` to each element */
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			match = i;
			break;
		}
	}

	return (match);
}
