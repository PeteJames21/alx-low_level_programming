#include "main.h"

/**
*  _strcat - concatenate two strings
*
* @dest: string to be appended to
* @src: string whose content is to be appended to dest
*
* Return: a pointer to @dest
*/
char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}

