#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
* free_grid - frees a 2 dimensional grid created by `alloc_grid`
* @grid: pointer to a 2D array
* @height: height of the array
*/
void free_grid(int **grid, int height)
{
	int i;

	/* Free space allocated to each row */
	for (i = 0; i < height; i++)
		free(grid[i]);

	/* Free space allocated to the array of pointers */
	free(grid);
}
