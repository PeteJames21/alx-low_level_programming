#include "main.h"

/**
* _memset - fill the first n bytes of memory area pointed to by s with b
* @s: pointer to the first location of the memory area
* @b: character to be written to the memory area
* @n: number of bytes to be overwritten
*
* Return: a pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	char *memstart = s;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (memstart);
}
