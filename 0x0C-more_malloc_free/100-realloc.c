#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
* _realloc - reallocate memory block pointed to by `ptr`
* @ptr: pointer to the memory block to be reallocarted
* @old_size: size of the old memory block in bytes
* @new_size: size of new memory block into which the old one is reallocated
*
* Return: a pointer to the new memory block
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_mem, *old_mem;
	int i;
	int n;

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (old_size == new_size)
		return (ptr);

	new_mem = malloc(new_size);
	if (new_mem == NULL)
		return (NULL);

	/* cast `ptr` to a char* since we can't operate on a void pointer */
	old_mem = ptr;

	/* n allows the memory to be old memory to be shrunk or expanded */
	n = (new_size > old_size) ? old_size : new_size;
	for (i = 0; i < n; i++)
		new_mem[i] = old_mem[i];

	/* Deallocate the old memory */
	free(ptr);

	return (new_mem);
}
