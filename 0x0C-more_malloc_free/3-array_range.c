#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
* array_range - create an array of integers from min to max (inclusive of both)
* @min: the lower bound of the values
* @max: the upper bound of the values
*
* Return: a pointer to the newly created array
*/
int *array_range(int min, int max)
{
	unsigned int i, n;
	int *arr;

	if (min > max)
		return (NULL);

	n = (max - min) + 1;
	arr = malloc(n * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < n; i++, min++)
		arr[i] = min;

	return (arr);
}
