#include "main.h"

/**
* _strncat - concatenate two strings
* @src: pointer to the string to be copied
* @dest: pointer to the string to be appended to
* @n: number of bytes to be copied from src
*
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i;
	/* Move *dest to the position of the null byte*/
	while (*dest)
		dest++;

	/* Copy n bytes from src. Stop if null byte is reached. */
	i = 0;
	while (src[i] != '\0' && i < n)
	{
		*dest = src[i];
		dest++;
		i++;
	}

	*dest = '\0';

	return (ptr);
}
