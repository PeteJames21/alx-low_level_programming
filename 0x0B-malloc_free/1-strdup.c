#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
* _strdup - copy the provided string to a new memory location
* @str: pointer to the string to be copied
*
* Return: a pointer to the memory holding the copy of the string
*/
char *_strdup(char *str)
{
	unsigned int i, size = 0;
	char *p;

	if (str == NULL)
		return (NULL);

	/* Determine the size of the string excluding the null byte */
	while (*(str + size))
		size += 1;

	p = malloc(size + 1);  /* +1 to accomodate null byte */

	if (p == NULL)
		return (NULL);

	/* Copy str to new memory location */
	for (i = 0; *(str + i); i++)
		*(p + i) = *(str + i);

	p[i] = '\0';

	return (p);
}
