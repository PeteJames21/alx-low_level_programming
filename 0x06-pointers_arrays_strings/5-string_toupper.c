#include "main.h"


/**
* string_toupper - convert a string to uppercase
* @s: string to be converted
*
* Return: `s` converted to uppercase
*/
char *string_toupper(char *s)
{
	char *s2 = s;

	/* Loop up to the null byte */
	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;

		s++;
	}

	return s2;
}
