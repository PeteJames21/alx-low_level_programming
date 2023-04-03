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
	while (*s)
	{
		if (*s == c)
			return (s);

		s++;
	}

	/* Check if the user intended to search for the nullbyte*/
	if (c == '\0')
		return (s);

	return (NULL);  /* c not found*/
}
