#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
* create_array - create an array of chars and initialize it with c
* @size: number of elements in the array
* @c: char to use in filling the array
*
* Return: a pointer to the array, else NULL if the operation fails
*/
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (NULL);

	p = malloc(size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		*(p + i) = c;

	return (p);
}
