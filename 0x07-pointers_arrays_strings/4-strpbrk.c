#include "main.h"

/**
* _strpbrk - search a string for any of a set of bytes
* @s: string to be searched
* @accept: string consisting of bytes to search
*
* Return: a pointer to the first matching character in s, else NULL if no match
*/
char *_strpbrk(char *s, char *accept)
{
	char *c, *c1;

	for (c = s; *c != '\0'; c++)
	{
		/* Check if *c is in `accept` */
		for (c1 = accept; *c1; c1++)
		{
			if (*c == *c1)
			{
				return (c);
			}
		}
	}

	return (NULL);
}
