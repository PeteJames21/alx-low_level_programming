#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
* string_nconcat - concatenate s1 with the first n bytes of s2
* @s1: a string
* @s2: a string
* @n: number of bytes to use from s2
*
* Return: a pointer to the memory holding the new string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, s2_size, total_size = 0;
	char *p, *q;

	if (s1 != NULL)
		total_size += size_of_string(s1);
	if (s2 != NULL)
	{
		s2_size = size_of_string(s2);
		if (n >= s2_size)
			total_size += s2_size;
		else
			total_size += n;
	}
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
		n = (n >= s2_size) ? s2_size : n;
		for (i = 0; i < n; i++, q++)
			*q = s2[i];
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
