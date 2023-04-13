#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
* malloc_checked - allocate memory of specified size
* @b: memory size in bytes to be allocated
*
* Return: a pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);
	if (mem == NULL)
		exit(98);

	return (mem);
}
