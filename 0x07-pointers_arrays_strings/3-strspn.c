#include "main.h"

/**
* _strspn - search a string for a set of bytes
* @s: string to be searched
* @accept: string consisting of acceptable characters
*
* Return: the length of the matching prefix substring
*/
unsigned int _strspn(char *s, char *accept)
{
	char *c, *c1;
	unsigned int count = 0;

	/* Only parse the 1st segment of s */
	for (c = s; *c != ' ' && *c != '\0'; c++)
	{
		/* Check if *c is in the `accept` */
		for (c1 = accept; *c1; c1++)
		{
			if (*c == *c1)
			{
				count++;
				break;
			}
		}
	}

	return (count);
}
