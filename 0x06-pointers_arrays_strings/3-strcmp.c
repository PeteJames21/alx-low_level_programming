#include "main.h"

/**
* _strcmp - compare two strings
* @s1: first string to be compared
* @s2: second string to be compared
*
* Return: 0 if s1 == s2, -15 if s1 < s2, 15 if s1 > s2
*/
int _strcmp(char *s1, char *s2)
{
	while (1)
	{
		if (*s1 < *s2)
			return (-15);
		else if (*s1 > *s2)
			return (15);
		else if (*s1 != '\0' && *s2 != '\0')
			return (0);
	}
}
