#include "main.h"
/**
* _strcpy - copy the string pointed to by src to dest
*
* @dest: pointer of string to be overwritten
* @src: original string
*
* Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';  /* Add the null byte */

	return (dest);
}
