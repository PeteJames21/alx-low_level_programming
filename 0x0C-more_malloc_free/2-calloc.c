#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
* _calloc - allocate memory for an array and set to zero
* @nmemb: number of elements in the array
* @size: size of each element in memory
*
* Return: a pointer to the allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
/*
* We do not know the type of the array being created and we want to
* iterate over the entire memory area as we insert zeros. Performing
* operations on a void pointer is forbidden. We therefore use a char*
* since indexing operations are guaranteed to increase by a memory
* size of 1 byte. Using an int* would iterate 4 bytes at a time on
* a 64-bit machine, and the byte size would probably vary on a
* different CPU architecture.
*/
	char *mem;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		mem[i] = 0;

	return (mem);
}
