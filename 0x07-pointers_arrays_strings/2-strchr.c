#include <stddef.h>
#include "main.h"

/**
* _strchr - locate a character in a string
* @s: string to be searched
* @c: character to be found
*
* Return: a pointer to the first location of c, else NULL if c is not found
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}

	return (NULL);
}
