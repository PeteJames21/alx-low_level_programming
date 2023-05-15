#include "main.h"

/**
* _strcmp - compare two strings
* @s1: first string to be compared
* @s2: second string to be compared
*
* Return: 0 if s1 == s2, a negative int if s1 < s2, a positive int if s1 > s2
*/
int _strcmp(char *s1, char *s2)
{
	while (1)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		else if (*s1 == '\0' && *s2 == '\0')
			return (0);
		s1++;
		s2++;
	}
}
