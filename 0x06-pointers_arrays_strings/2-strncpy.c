#include "main.h"

/**
* _strncpy - copy at most n bytes of src to dest
* @src: pointer to the string to be copied
* @dest: pointer to the string to be overwritten with the copy
* @n: number of bytes to be copied from src
*
* Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	/* Overwrite any remaining positions in dest with null bytes*/
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
