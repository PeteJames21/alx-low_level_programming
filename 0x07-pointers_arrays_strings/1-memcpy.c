#include "main.h"

/**
* _memcpy - copy n bytes from memory area src to memory area dst
* @dest: memory area where the data is to be copied to
* @src: memory area where the data is to be copied from
* @n: number of bytes to copy
*
* Return: a pointer to dst
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
