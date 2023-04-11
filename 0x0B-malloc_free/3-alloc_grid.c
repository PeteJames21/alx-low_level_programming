#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
* alloc_grid - create a 2D array of integers initialized with zeros
* @width: the number of columns
* @height: the number of rows
*
* Description: the 2D array is initialized as an array of pointers. The array
* will have a number of elements corresponding to the height. Each element
* will be a pointer to an array of size corresponding to the width.
*
* Return: a pointer to the array, or NULL if either argument is negative or 0
*/
int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = (int **)malloc(height * sizeof(int *));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = (int *)malloc(width * sizeof(int));
		/* Row not initialized. Free all space from previous row */
		if (array[i] == NULL)
		{
			for (i--; i >= 0; i--)
			{
				free(array[i]);
			}
			free(array);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			array[i][j] = 0;

	return (array);
}
