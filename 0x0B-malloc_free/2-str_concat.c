#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
* str_concat - concatenate two strings into a new memory location
* @s1: the first string
* @s2: the second string
*
* Return: the pointer to the new string, else NULL if the operation fails
*/
char *str_concat(char *s1, char *s2)
{
	unsigned int total_size = 0;
	char *p, *q;

	if (s1 != NULL)
		total_size += size_of_string(s1);
	if (s2 != NULL)
		total_size += size_of_string(s2);

	p = malloc(total_size + 1);  /* +1 to accomodate the null byte */
	if (p == NULL)
		return (NULL);
	q = p;

	if (s1 != NULL)
	{
		while (*s1)
		{
			*q = *s1;
			s1++;
			q++;
		}
	}
	if (s2 != NULL)
	{
		while (*s2)
		{
			*q = *s2;
			s2++;
			q++;
		}
	}
	*q = '\0';

	return (p);
}

/**
* size_of_string - get the length of a string
* @s: string to be evaluated
*
* Return: the size of s, including the null byte
*/
unsigned int size_of_string(char *s)
{
	unsigned int size = 0;

	/* Determine the size of the string excluding the null byte */
	while (*(s + size))
		size += 1;

	return (size);
}
