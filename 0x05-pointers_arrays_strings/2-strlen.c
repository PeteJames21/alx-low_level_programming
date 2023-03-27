#include "main.h"

/**
* _strlen - determine the length of a string
*
* @s: pointer of string variable to analyzed
*
* Return: the length of the string referenced by the pointer
*/
int _strlen(char *s)
{
	int i;
	int length;

	length = 0;
	i = 0;

	while (1)
	{
		if (*(s + i) == 0)
			break;

		length++;
		i++;
	}

	return (length);
}
